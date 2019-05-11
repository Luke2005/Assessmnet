#include <iostream>
using namespace::std;

//I like cheese
int main(int argc, char *argv[])
{
	if(argc > 1) {
		cout<< "Hello " << argv[1] << endl;
	}
	else {
		cout << "your number please: "<<endl;
                int number;
                cin >> number;
              
                cout << "your other number cheese: "<<endl;
                int numbe; 
                cin >> numbe;        
                if (number > numbe)
                	cout   << "this number is greater:" << number << endl;
 
        	else{
        		cout << " this number is greater:"<<numbe<< endl;
        	/play cottoneyejoe►}
	}

	return (0);
}

