#include <iostream>
#include <iomanip>
using namespace::std;

int main()
{
	int n,i,m,j,v;
	cin>>n>>m;
	double H;
	int candidates[n];
	int counter[n+1];
	for(i=1;i<=n;i++)
	{
		
		counter[i]=0;
	}
        for(i=0;i<m;i++)
        {
                cin>>v;
		counter[v]++;
		
        }

	for(i=1;i<=n;i++)
	{
		H=counter[i]*100.00/m;
		
		cout<<fixed<<setprecision(2);
		cout<<H<<'%'<<endl;
	}
}
	
