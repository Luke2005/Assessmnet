#include <iostream>
using namespace::std;

int main()
{
	int n1, n2 ,n3,teameigen,i,j,k, othercounter;
	bool counter;
	othercounter=0;
	cin>>n1;
	long long int eigena[n1];
	for(i=0;i<n1;i++)
	{
		cin>>eigena[i];
	}
	cin>>n2;
	long long int eigenb[n2];
	for(i=0;i<n2;i++)
	{
		cin>>eigenb[i];
	}
	cin>>n3;
	long long int eigenc[n3];
	for(i=0;i<n3;i++)
	{
		cin>>eigenc[i];
	}
	for(i=0;i<n1;i++)
	{
		counter = false;
		for(j=0;j<n2;j++)
		{
			if(eigena[i]==eigenb[j])
			{
				counter=true;
				break;
			}
		}
	 	
			
		if(counter==true)
		{
			for(k=0;k<n3;k++)
			{
				
					if(eigena[i]==eigenc[k])
					{
						othercounter++;
						break;
					}
				
			}
	        }
	}
	cout<<othercounter<<endl;
}
