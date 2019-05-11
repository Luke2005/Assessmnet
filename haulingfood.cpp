#include <iostream>
using namespace::std;

int main()
{
	int n,k,i,stuff,counter,stuffz,total;
        cin>>n;
        int weights[n];
	counter=1;
	for(i=0;i<n;i++)
	{
		cin>>weights[i];
		stuffz=weights[1];
                if(weights[i]==stuffz)
		{
			counter++;
		}
	}
	for(i=0;i<n;i++)
	{
		total=total+weights[i];
	}
        
      		
        if((n%2==1)&&(counter==n))
	{
		cout<<weights[1]<<endl;
	}
        else
	{
		stuff=total%2;
		cout<<stuff<<endl;
	}
}
