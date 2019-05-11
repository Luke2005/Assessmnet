#include <iostream>
using namespace::std;

int main()
{  	int k;
        int j,i;
        int n;
        int x;
        int combinationcounter=0;
        cin>>n;
	cin>>x;
	if ((n<3 ) || (n>100)) { 
		return 0;
	}
	else if ((x > 300 )||(x<1)) {

		return 0;
	}
	else if ((n==0) && (x==0)) {
		return 0;
	}
	
        for(i=1;i<=n;i++)
        {       
        	for(j=i+1;j<=n;j++)
                {       
        		for(k=j+1;k<=n;k++)
                	{       
        			if (j+k+i==x) {
        				combinationcounter++;
				cout<<"i is " <<i<< "j is "<<j<<"k is "<<k<< " total is " <<i+j+k<<endl;	
				}
			}
		}
			

	}
        cout<<combinationcounter<<endl;
	combinationcounter =0;
}



