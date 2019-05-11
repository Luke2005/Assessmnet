#include <iostream>
using namespace::std;

int main()
{
	int n,i,j,z,stuff,total;	
	cin>>n;
	total=0;
	int socks[n];
	int matcher[101];	
	int counter[101];
	for(i=0;i<n;i++)
	{
		cin>>socks[i];
	}
	for(i=1;i<=100;i++)
	{
		counter[i]=0;
	}
	
	for(j=0;j<n;j++)
	{
		counter[socks[j]]++;
	}
	for(z=1;z<=100;z++)
	{
		if(counter[z]>0)
		{
			stuff=counter[z];
			if(stuff%2==0)
			{
				stuff=stuff/2;
				total=total+stuff;
			}
			else
			{
				
				stuff=stuff-1;
				stuff=stuff/2;
				total=total+stuff;
			}
		}
	}
	cout<<total<<endl;

}

		
