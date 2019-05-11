#include <iostream>
using namespace::std;

int main()
{   int n,i,j;
    unsigned long long int subtotal;
    subtotal=0;
    cin>>n;
    int nums[n+1];
    

	for(i=0;i<=n;i++)
	{ 
		nums[i]= i;
	}
        
       for(i=0;i<=n;i++)
       {  
                for(j=i;j<=n;j++)
                {
     			subtotal=subtotal+nums[i]+nums[j];
		}
	
      }
      cout<<subtotal<<endl;
}		
