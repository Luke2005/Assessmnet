#include <iostream>
using namespace::std;

int compare (const void*a,const void*b)
{
	return (*(int*)a-*(int*)b);
}

int main()
{
	int n;
	cin>>n;
	int nums[n];
  	for(i=0;i<n;i++)
	{
		cin>>nums[n];
	}
	qsort(nums,n, sizeof(int), compare)
	
