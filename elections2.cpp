#include <iostream>
using namespace::std;

int main()
{
	int n,m,i,j,regcounter;
	cin>>n>>m;
	regcounter=0;
	int voters[m];
	int candidates[n];
        int counter[n];
        for(i=0;i<m;i++)
	{
		cin>>voters[i];
	//	cout<<"voters:"<<voters[i]<<endl;
	}
	for(i=1;i<=n;i++)
	{
		candidates[i]=i;
		counter[i]=0;
	//	cout<<"candidates:"<<candidates[i]<<endl;
	}

	for(j=0;j<m;j++)
	{
		if(voters[j]==candidates[i])
		{
			counter[i]++;
			regcounter++;
		}
	}
	cout<<regcounter<<endl;
	for(j=0;j<n;j++)
	{	cout.precision(2);	
		cout<<counter[i]/regcounter<<endl;
        }
}
