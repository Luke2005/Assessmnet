#include <iostream>
using namespace::std;

int main()
{
	int a, b, c,i,total;
	int sum[9];
	cin>>a>>b>>c;
	sum[0]=a-b+c;
	sum[1]=a+b-c;
        sum[2]=a+b*c;
	sum[3]=a*b+c;
	sum[4]=a*b-c;
	sum[5]=a-b*c;
	sum[6]=a-b-c;
	sum[7]=a+b+c;
	sum[8]=a*b*c;
	total=sum[0];
	for(i=0;i<9;i++)
	{
		if(sum[i]<total)
		{
			total=sum[i];
		}
	} 
	cout<<total<<endl;
}
