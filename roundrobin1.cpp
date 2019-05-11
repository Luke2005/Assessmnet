#include <iostream>
#include <queue>
using namespace::std;

	
	typedef struct Process
	 {
        	char name;
       	 	int time;
 	} Process;




int main()
{ 	
	int n,q,i;

  	cin>>n>>q;
  	Process process;
  	queue<Process> processque;
  	for( i=0; i<21; i++)
  	{
        		cin>>process.name; 
        		cin>>process.time;      
	 		processque.push(process);
                
  	}
 	 while(!processque.empty())
  	{                      
                
              	  processque.pop();
               	 if(process.time>q)
               	 { 
                	  process.time=Process.time-q;
               	 }
           	 cout<<process.front()<<endl;
                 
  	}

}

