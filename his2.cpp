#include <iostream>
#include <cstdlib>
using namespace::std;

int bsearch(int n, int *s, int q)
{
    	int a= 0;
        int b= n;
        while(a<b)
        {
                 int m = (b - a) / 2 + a;
                 if(q==s[m])
                 {
                      return m;  
                 }
                 else if(q < s[m]) 
                 {
              		b = m; 
                 }       
		 else {
			a = m + 1;
		 }
		 
        }
        return -1;
}
        
int main()
{       
        int q,i,s,n,correct;
        correct=0;
	int pro[15000];
        int stud;
        cin>>n;
        for(i=1;i<=n;i++)
        {
 		cin>>pro[i]>>endl;
        }
	cin>>s;
        for(i=1;i<=s;i++)
        {
                cin>>stud;
                if(bsearch(n, pro, stud) != -1)
                { 
                	correct++;
                }
        }
        

        cout<<correct<<endl;
}
