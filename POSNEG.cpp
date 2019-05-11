#include <iostream>
using namespace::std;

//This is Professor Bangjoon's secret negative number machine

int main(int argc, char *argv[])
{
	
		int nums;
		
cout << "Your number please "<<endl;
	        
		cin >> nums;
	if (nums>0)
	cout << "It is Positive" << endl;
	
        if (nums==0)
        cout<< "It is Zero"<<endl; 
	return (0);
        
        if (nums<0)
        cout<<"It is Negative"<<endl;
}
