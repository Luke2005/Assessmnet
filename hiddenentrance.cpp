#include <iostream>
using namespace::std;

int main()
{
	int n,i,max,wallpower,stuff,average;
        cin>>n;
        int power[n];
	average=0;	
	stuff=0;
        for(i=0;i<n;i++)
	{
		cin>>power[i];
		average=average+power[i];
        }
	average=average/n;
	for(i=0;i<n;i++)
	{
        	
		  if(power[i]>average)
		  {
			wallpower=i;
                       stuff=power[i]+stuff;
			if((power[i+1]>average)&&(power[i+2]>average))
			{
				
				cout<<stuff<<' '<<wallpower+1<<endl;
			}
			else if((power[i+1]>average)&&(power[i-1]>average))
			{
				cout<<stuff<<' '<<wallpower<<endl;
			}
			else if((power[i-1]>average)&&(power[i-2]>average))
			{
				cout<<stuff<<' '<<wallpower-1<<endl;
			  }
 		}
     }
}	
