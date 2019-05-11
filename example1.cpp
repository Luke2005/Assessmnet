#include <iostream>
using namespace::std;

int main()
{       int nums[1000];
	int n;
        int i;
	cin>>n;
        int total;
	total=0;
	for(i=0;i<n;i++)
		{cin>>nums[i];}
	for(i=0;i<=n;i++)
		{total=nums[i]+total;}
        total=total/n;
        cout>>total>>endl;
}
