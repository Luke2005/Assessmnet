#include <iostream>
using namespace::std;

int main()
{       
        int x,i;
        char lastvar;
 	cin>>x;
        string Hiero[1000];
        for(i=0;i<x;i++)
        {
        	cin>>Hiero[i];
	        
        }
        cin>>lastvar;
            
        
        for (i=0;i<x;i++)
        {
        	if(Hiero[i][0]==lastvar)
                {
                	cout<<Hiero[i]<<endl;
                }
         }
} 
