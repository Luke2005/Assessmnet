#include <iostream>
using namespace::std;

int main()
{
	long long int x,y,c,num;
        cin>>x>>y>>c;
        
        if(y>=c)
        {       x=0;
                y=c;
		cout<<x<<' '<<y<<endl;		
                
        }
      else if((y<c)&&(x>=c))
       {
      		x=c;
                y=0;
                cout<<x<<' '<<y<<endl;
      
       } 
      else if((y<c)&&(x<c))
      {
		if(x+y>c)
                {	num=x+y;
                        num=num-c;
			y=y-num;
			cout<<x<<' '<<y<<endl;
                }
		else if(x+y==c)
		{
			cout<<x<<' '<<y<<endl;
                }
		else
                {
			cout<<"Impossible"<<endl;
                }

      }

}
