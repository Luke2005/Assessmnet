#include <iostream>
#include <string>
using namespace::std;

int main()
{ 
  string i;
  string n;

  cin>>i;
  cin>> n;
   if((i[3]=='0')||(i[3]=='2')||(i[3]=='4')||(i[3]=='6')||(i[3]=='8')) 
  {
	cout<<"yes"<<endl;
  }
  else if((n[3]=='1')||(n[3]=='3')||(n[3]=='5')||(n[3]=='7')||(n[3]=='9'))
  {
	cout<<"yes"<<endl;
  }
  else
  {
  	cout<<"no"<<endl;
  }
} 
