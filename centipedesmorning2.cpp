#include <iostream>
using namespace::std;

int main()
{
	int leftslip,a,b,rightslip,weartime1,weartime2;
	cin>>leftslip>>rightslip;
	a=rightslip;
	b=leftslip;
	weartime1=0;
	weartime2=0;
	weartime1=weartime1+80;
	rightslip=rightslip-40;
	weartime1=weartime1+(2*rightslip);
	weartime1=weartime1+40;
	weartime2=weartime2+40;
	weartime2=weartime2+2*(b-40);
	weartime2=weartime2+78;
	weartime2=weartime2+1;
	if(weartime1>weartime2)
	{
		cout<<weartime1<<endl;
	}
	else if(weartime1<weartime2)
	{
		cout<<weartime2<<endl;
	}
	else
	{
		cout<<weartime1<<endl;
	}
	
}
