#include <iostream>
using namespace::std;


int total;
void nuts(int i){

total=total+i;
i++;
	if(i<=100)
	{
		nuts(i);
	}
}


int main()
{
	int i=1;
	nuts(i);
cout << total<<endl;	
return 0;
}
