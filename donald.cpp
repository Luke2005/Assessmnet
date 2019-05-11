#include <iostream>
#include <cmath>
using namespace::std;

int main()
{
	int i,n,currentpo,nextpo,steppes;															
	cin>> n;
        currentpo=0;
        steppes=0;
	string names;  
	for(i=0;i<n;i++)             
        {
		cin>> names;
	        if((names[0]=='B')||(names[0]=='M')||(names[0]=='S'))
                {
                	nextpo=1;
                        steppes=steppes+abs(currentpo-nextpo);
                        currentpo=nextpo;
                }
                else if((names[0]=='A')||(names[0]=='P')||(names[0]=='R')||(names[0]=='O'))
                {
                        nextpo=0;
                        steppes=steppes+abs(currentpo-nextpo);
                        currentpo=nextpo;
                }
                else
                {
                        nextpo=2;
                        steppes=steppes+abs(currentpo-nextpo);
                        currentpo=nextpo;
                }
        }
        cout<<steppes<<endl;
}
