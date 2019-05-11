#include <iostream>
#include <cmath>
using namespace::std;
int main()
{ 
	int i, n;
  	int x[1000];
	int y[1000];
 	int d;
	for(i=0;i<n;i++)
                {cin>>x[i]; } 
        for(i=0;i<n;i++)
                 {cin>>y[i];}
	double d1, d2, d3, dinf;
        for(i=0;i<n;i++)
        { 
		d = abs(x[i] - y[i]);
		d1 += d;
                d2 += d * d;
		if(d > dinf)
               		dinf=d;
                d3=d*d*d;
        }          
        d2=sqrt(d2);
        d3=pow(d3,1/3);
        
        printf("%.6f\n",d1);
        printf("%.6f\n",d2);
        printf("%.6f\n",d3);
        printf("%.6f\n",dinf);
}
