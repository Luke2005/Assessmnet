#include <iostream>
using namespace::std;

int main()
{
	int b, n, m, i, j, max,stuff;
	cin>>b>>n>>m;
	max=0;
	int keyboard[n];
	int usb[m];
	for(i=0;i<n;i++)
	{
		cin>>keyboard[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>usb[j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			stuff=keyboard[i]+usb[j];
			if(stuff<=b)
			{
				if(stuff>max)
				{
					max=stuff;
				}
			}
				
		}
	}

	if(max==0)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<max<<endl;
	}
}
