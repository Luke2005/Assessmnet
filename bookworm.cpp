#include <iostream>
using namespace::std;

int main()
{
	int x,y,z,g,pages,covercount,total;
	cin>>x>>y>>z>>g;
	if(z<g)
	{
		covercount=g-z;	
        	covercount=covercount*2;
       		
       		covercount=covercount*y;	
		if(g-z==1)
	        {
			cout<<2*y<<endl;
        	}
		else if(g-z>1)
		{
			pages=g-z;                	
                	pages=pages-1;
                        pages=pages*x;
			total=pages+covercount;
                	cout<<total<<endl;
       		}
         }
        else if(z==g)
        {
		cout<<x<<endl; 
        }
	else 
        {
		covercount=z-g;
		covercount=covercount+1;
                covercount=covercount*2;
                covercount=covercount-2;
                covercount=covercount*y;
		pages=z-g;
                pages=pages+1;
                pages=pages*x;
                
                
                cout<<pages+covercount<<endl;
		
	}
}       
		
