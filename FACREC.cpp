#include<iostream>
using namespace::std;

int fac(int n) {
  int(n==1)
  return 1;
  else
     return n*fac(n-1);
}

int main() {
	int m;
	cin >>m;
	//fac(5);
	//fac(10);
	cout<<fac(m)<<endl;
} 
