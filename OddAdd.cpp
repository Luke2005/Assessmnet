#include <iostream>
using namespace::std;

int main(int argc, char *argv[]) {
	int start, end, i, total;

	if (argc < 3) { 
		cout << " please give two numbers" << endl;
		exit(0);	
	}
	start = atoi(argv[1]);

	cout << " start number is : " << start << endl;

	end = atoi(argv[2]);
	cout << " end number is :" << end << endl;

	total = 0;

/*	cout<<"what is your first number"<<endl;
	cin>>start;
	cout<<"what is your second number"<<endl;
	cin>>end;
*/
       for(i=start;i<end+1;i++) {
		if (i%2 ==1) total = total + i;
	        
	}

	cout<<"The sum of your odd numbers is: " << total<< endl;
	return(0);
}
