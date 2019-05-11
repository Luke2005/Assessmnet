#include <iostream>
using namespace::std;

int main()
{
	int n,i,j,z,h;
	cin>>n;
	int nums[n];
	int numbermatcher[10];
	int counter[10];
	for(i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	for(z=0;z<10;z++)
	{
		numbermatcher[z]=z;
	}
	for(h=0;h<n;h++)
	{
		if(nums[i]==numbermatcher[h])
		{
			counter[h]++;
		}
	}
	for(j=0;j<10;j++)
	{
		if(counter[j]>0)
		{
			cout<<counter<<' '<<j<<' '<<endl;
		}
	}
}
			
