#include <iostream>
using namespace::std;

int main()
{
	int n,i,max,stuff;
	max=0;
	cin>>n;
	int power[n];
	int sums[n];
	for(i=0;i<n;i++)
	{
		cin>>power[i];
		
	}
	for(i=0;i<n-2;i++)
	{
		
			sums[i]=power[i]+power[i+1]+power[i+2];
		
			if(sums[i]>max)
			{
				max=sums[i];
				stuff=i+2;
			}
	}
	cout<<max<<' '<<stuff<<endl;
}
