#include <iostream>
#include <cmath>
using namespace::std;

int main()
{int n,i;
 cin>>n;	
 int product=sqrt(n);
 for(i=1;i<=product;i++)
     {if(n%i==0)
            { cout<<i<<" X "<<n/i<<endl; }  
     }
}
