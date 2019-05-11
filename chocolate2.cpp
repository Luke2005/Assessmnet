#include <iostream>
using namespace::std;

int main()
{
	int m,total,n,stuff;
	cin>>m>>n;
        total=m*n;
	total=total-1;
	stuff=total%2;
	if(stuff==0)
	{
		cout<<"[second]=:]"<<endl;
	}
	else
	{
		cout<<"[:=[first]"<<endl;
	}
}
