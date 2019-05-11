#include <iostream>
using namespace::std;

int main()
{
	int n,i,j,k,m,h,c,total,max;
	cin>>n;
	int matrix[500][500];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>matrix[i][j];
		}
	}
	max=-10000000;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=i;k<n;k++)
			{
				for(m=j;m<n;m++)
				{ 
					total=0;
					for(h=i;h<=k;h++)
					{
						for(c=j;c<=m;c++)
						{
							total+=matrix[h][c];
						}
						if(total>max)
						{
							max=total;
						}
					}
				}
			}
		}
	}
	cout<<max<<endl;
}
