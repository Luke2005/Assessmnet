#include <iostream>
#include <cmath>
using namespace::std;

int main()
{ 
        
        int i,n;
        double j[100];
        cin>>n;
	for(i=0;i<n;i++)
           {cin>>j[i];}
	int a = 0;
            for(i=0;i<n;i++)
             {a=a+j[i];}
          double mean=a * 1.0/n;
             for(i=0;i<n;i++)
               {j[i]=j[i]-mean;}
	  int b = 0;
          for(i=0;i<n;i++)
            {b=b+(j[i]*j[i]);}
           b=b/n;
           b=sqrt(b);
           cout>>b>>endl;
}
         
         
 
