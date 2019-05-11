#include <iostream>
using namespace::std;

int main()
{
	int n,black,grimy,total,i;
        cin>>n;
        int nums[n];
        total=0;
        for(i=0;i<n+1;i++)
        {
		nums[i]=i;
        }
        for(i=0;i<n+1;i++)
        {
		total=total+nums[i];
        }
        if(total%2==1)
        {
		cout<<"grimy"<<endl;
        }
        else
        {
                cout<<"black"<<endl;
        }
}
