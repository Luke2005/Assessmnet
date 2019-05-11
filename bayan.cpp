#include <iostream>
using namespace::std;

int main()
{       
        int i,j,counter,N,placeholder;
        j=i+1;
 	cin>>N;
        string bayan[1000];
        for(i=1;i<=N;i++)
        {
                cin>>bayan[i];     
        }
 

        }
       for(i = 0;i < N; i++) 
       {   		 
		 for( j = i; j < N; j++) 
       		 {   	 if(j != i) 
           		 {
                		if(bayan[i] == bayan[j]) 
               			 {
                   			 counter++;
               			 }
           		  }
                 }  
        }
         cout<<counter<<endl;
}
