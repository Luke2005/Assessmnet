#include <iostream>
using namespace::std;

int main()
{
	int row;
	char col;

	cin>>row;
	cin>>col;

	if(row<3)
        { 	
		if((col=='A')||(col=='D'))
           	{
			cout<<"window"<<endl;																			     }
                else
                { 
			cout<<"aisle"<<endl;
		}
        }
        else if(row<21)
        {	
                if((col=='A')||(col=='F'))
		{ 
			cout<<"window"<<endl;	
		}
               else if((col=='B')||(col=='C')||(col=='D')||(col=='E'))
                {
                        cout<<"aisle"<<endl;

                }
                else
                {
                         cout<<"eat cheese truker"<<endl;
                }
        }
       

        else
        {
               if((col=='A')||(col=='K'))
               {
			cout<<"window"<<endl;
               }
               else if((col=='C')||(col=='D')||(col=='G')||(col=='H'))
               {
                        cout<<"aisle"<<endl;
               }
               else
               {
                        cout<<"neither"<<endl;
               }
	

        }
}	
