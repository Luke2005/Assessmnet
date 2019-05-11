#include <iostream>
using namespace::std;
int main() 
{
	int num[10]={1 , 3 , 420 , 69 , 77 , 44 , 2 , 4 , 0 , 5};
	
	int result = 0;
	for (int i=0; i<10 ; i++) {
        	result+= num[i];
	        cout << num[i] <<endl; 
	}
	cout<<"the sum is:"<<result<<endl;
}
