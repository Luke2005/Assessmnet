#include <iostream>
using namespace::std;

int main()
{
	int x,i,j,y,c,z,stuff1,stuff2,hold1,hold2;
        bool possiblechecker;
        cin>>x>>y>>c;
        stuff1=x+1;
        stuff2=y+1;
        int arrx[x];
        int arry[y];
        for(i=0;i<x;i++)
        {
		arrx[i]=i;
        }
        for(j=0;j<y;j++)
        {
		arry[i]=i;
        }
        
        
        for(z=0;z<stuff2*stuff1;z++)
        {
		if(arrx[i]+arry[j]==c)
                {	
			hold1=arrx[i];
                        hold2=arry[j]; 
 			possiblechecker=true;   
                }

        }
	if(possiblechecker==true)
        {
		cout<<hold1<<' '<<hold2<<endl;
        }
        else
        {
		cout<<"Impossible"<<endl;
         }
}
