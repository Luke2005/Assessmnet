#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace::std;

int main()
{
	int n,i,j,counter;
        cin>>n;
        counter=0;
      string stores[1001];
      int checker[n];
	for(i=0;i<=n;i++)
        {
		getline(cin, stores[i]);
//		cout<<i<<"==="<<stores[i]<<endl;		
		
                for(j=1;j<i;j++)
                {
                	if(stores[i]==stores[j])
			{
			   	counter++;
				break;	
	                }
                 }
//		cout<<stores[i]<<"---"<<counter<<endl;
		
         }
	cout<<counter<<endl;
}
