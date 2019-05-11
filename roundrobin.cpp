#include <iostream>
#include <queue>
using namespace::std;

	
	typedef struct Process
	 {
        	string name;
       	 	int time;
 	} Process;




int main()
{ 	
	int n,q,i,totaltime;
        totaltime=0;
  	cin>>n>>q;
  	Process process, pp;
  	queue<Process> processque;
  	for( i=0; i<n; i++)
  	{
        		cin>>process.name; 
        		cin>>process.time;      
	 		processque.push(process);
                
  	}
 	 while(!processque.empty())
  	{                      
                  pp = processque.front();
              	  processque.pop();
               	 if(pp.time>q)
               	 { 
                	  pp.time=pp.time-q;
			  processque.push(pp);
                          totaltime=totaltime+q;
               	 }
           	 
                 else
                 {
                 	totaltime=totaltime+pp.time;
                 
                  cout<<pp.name<<' '<<totaltime<<endl;
  	         }

          }

}






