#include <iostream>
using namespace::std;

int main(int argc, char *argv[]) {
	int n, i, f[25];

	if (argc < 2) { 
		cout << " please give a number" << endl;
		exit(0);	
	}
	n = atoi(argv[1]);

       for(i=0;i<=n;i++) {
	       	if (i==0) f[i]=0;
		else if (i==1) f[i]=1;
		else f[i] = f[i-2] + f[i-1]; 
	}

	cout<<"The Fibonacci number is: " << f[n]<< endl;
	return(0);
}
