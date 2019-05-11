#include <iostream>
using namespace::std;

//This is Proffesor Bangjoon's IQ study for highly gifted students
int main(int argc, char *argv[])
{
	cout << "your number please: "<<endl;
        int number;
        cin >> number;
   	int result = 1;
        for(int i=1; i<=number; i++)
		result=result*2;
          	 
        cout   << result << endl;
                
}        
