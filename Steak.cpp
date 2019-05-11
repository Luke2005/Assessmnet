#include <iostream>
using namespace::std;

int main()
{
	int n, k,leftovers,stuff;
	cin>>n>>k;
	if(n<=k)
	{
		cout<<2<<endl;
	}
	else
	{
		n=n*2;
		leftovers=n%k;
		n=n-leftovers;
		stuff=n/k;
		if(leftovers>=1)
		{
			cout<<stuff+1<<endl;
		}
		else
		{
			cout<<stuff<<endl;
		}
	}
}
		
