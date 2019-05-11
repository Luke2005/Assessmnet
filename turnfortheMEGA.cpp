#include <iostream>
using namespace::std;

int main()
{
	int n,i,total,k,stuff,trafficjam;
	bool remaindercount;

	total=0;
	cin>>k>>n;
	int cars[n];
	for(i=0;i<n;i++)
	{
		cin>>cars[i];
		total=total+cars[i];
		
	
	}
	for(i=0;i<n;i++)
	{
		if(cars[i]>k)
		{
			stuff=cars[i]-k;
			cars[i+1]=cars[i+1]+stuff;
		}
		if(cars[n-1]>k)
		{
			trafficjam=cars[n-1]-k;
			remaindercount=true;
		}
		else{
			remaindercount=false;
		}
	}
	if(remaindercount==true)
	{
		cout<<trafficjam<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
	

}
		
	
