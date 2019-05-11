#include <iostream>
using namespace::std;
int total=1;
void nuts(int i)
{
	i++;
	if(i<=10)
	{       total=total*i;
		nuts(i);
	}
}

int main()
{
	int i=1;
	nuts(i);
	cout<<total<<endl;
return 0;
}
