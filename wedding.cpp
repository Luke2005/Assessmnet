#include <iostream>
#include <string>
using namespace::std;

int main()
{ 
	int n,i,j,extracount=0,totalcount, money;
        char names[20][24]={' '};
	cin>>n;
        for (i = 0; i < n; i++)  
        {
		cin>>names[i];
	}
       for(i=0;i<n;i++)
       {
		for(j=0;j<24;j++)
                {
			if(names[i][j]=='+')
        	        {
				extracount++;
				break;
               	        }
                }
       }
       totalcount=extracount+n;

       if(totalcount+2==13)
       {
		money=1400;
               
       }
       else
       {
               totalcount= totalcount+2;
               money= totalcount*100;
       }
       cout<<money<<endl;
}
