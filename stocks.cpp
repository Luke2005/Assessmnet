#include <iostream>
using namespace::std;

int main()
{
	int n,z,q,i,j,max,total;
	cin>>n;
	max=0;
	int stocks[n];
	for(i=0;i<n;i++)
	{
		cin>>stocks[i];
	}
	total = 0;
	for(i=0;i<n;i++)
	{
		total+=stocks[i];
		if(total>max)
		{
			max=total;
		}
		if(total<0)
		{
			total=0;
		}
		

	}
	
cout<<max<<endl;	
}
