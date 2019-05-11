#include <iostream>
using namespace::std;

int main()
{ 
	int n,i,j;
	cin>>n;
	char squares [n][2];
	for(i=0;i<n;i++)
	{			
			cin>>squares[i][0]>>squares[i][1];
			if((squares[i][0]=='a')||(squares[i][0]=='h'))
			{
				if((squares[i][1]=='1')||(squares[i][1]=='8'))
				{	
					cout<<"2"<<endl;
				}
				else if((squares[i][1]=='2')||(squares[i][1]=='7'))
				{
					cout<<"3"<<endl;
				}
				else	
				{
					cout<<"4"<<endl;
				}
			}
			else if((squares[i][0]=='b')||(squares[i][0]=='g'))
			{	
				if((squares[i][1]=='1')||(squares[i][1]=='8'))
				{
					cout<<"3"<<endl;
				}
				else if((squares[i][1]=='2')||(squares[i][1]=='7'))
				{
					cout<<"4"<<endl;
				}
				else
				{
					cout<<"6"<<endl;
				}
			}
			else if((squares[i][0]=='c')||(squares[i][0]=='f')||(squares[i][0]=='d')||(squares[i][0]=='e'))
			{
				if((squares[i][1]=='1')||(squares[i][1]=='8'))
				{
					cout<<"4"<<endl;
				}
				else if((squares[i][1]=='2')||(squares[i][1]=='7'))
				{
					cout<<"6"<<endl;
				}
				else
				{
					cout<<"8"<<endl;
				}
				
			}
		
	}
}	
