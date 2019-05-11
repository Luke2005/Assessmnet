#include <iostream>

using namespace::std;

int Fac(int n)
{
	cout<<n <<endl;
	if(n<=2) return 1;
        else return Fac(n-2)*n;
}

int main()
{      
        int n;
	cin >> n;
	cout<<Fac(n)<<endl;
}
