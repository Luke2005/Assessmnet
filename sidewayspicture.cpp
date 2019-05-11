#include <iostream>
using namespace::std;

int main()
{
	int m,i,j,n,rotation;
	cin>>m>>n;
	int nums [m][n];
        
	for(j=0;j<m;i++)
	{
		for(i=0;i<n;i++)
		{
			cin>>nums[i][j];
			
		}
	}
        cin>>rotation;
        if(rotation==-1)
	{
		for(i=0;i<n;i++)
	        {
			cout	
		
	}
        else if(rotation==1)
	{
		for(j=1;j<n;j++)
		{
			for(i=0;i<n;i++)
			{
				cout<<nums[i][j];
			}
		}
	}
}
