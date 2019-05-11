#include <iostream>
using namespace::std;


int main()
{
	int n,sum,i;
	cin>>n;
	sum=0;
	if (n>0)
	{
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
	}
	else if(n<=0)
	{
		for(i=1;i>=n;i--)
		{
			sum=sum+i;
		}
	}
	cout<<sum<<endl;
}
