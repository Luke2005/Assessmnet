#include <iostream>
using namespace::std;

//This is Proffesor Bangjoon's IQ study for highly gifted students
int main(int argc, char *argv[])
{
	if(argc > 1) {
		cout<< "Hello " << argv[1] << endl;
	}
	
		cout << "your number please: "<<endl;
		int number;
		cin >> number;
		if (number>=60)
		cout   << "you passed, congratulations!" << endl;
               
        else{
	cout << "you failed! Istanbul is in North America!";
        }   
	return (0);
}
