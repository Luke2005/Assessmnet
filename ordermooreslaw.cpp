#include <iostream>
using namespace::std;

int main()
{ int majority,n,num,i,count;
   cin>>n;
   count=1;
   cin>>majority;
   for(i=1;i<n;i++)
   {
	cin>>num;
        if(num==majority)
        {
        	count++;
        }
        else
        {
                count--;
        }
        if(count==0)
        {
        	majority=num;
                count=1;
        }
     
    }
    
    cout<<majority<<endl;
}
