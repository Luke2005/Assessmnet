#include <iostream>
using namespace::std;

int main()
{
        int n,k,i,j,totalx,totaly,stuff,num;
        totalx=0;
        totaly=0;
        cin>>n>>k;
        int x[n],y[n];
        for(i=0;i<n;i++)
        {
                cin>>x[i]>>y[i];
		totalx= totalx + x[i];
		totaly= totaly + y[i];
        }

        totalx=totalx+k;
	stuff = 2* (n+1);
        if(totalx >= totaly + stuff)
        {
                        num=totalx-totaly-stuff;
			cout<<num<<endl;
        }
        else
        {
                cout<<"Big Bang!"<<endl;
        }
}

