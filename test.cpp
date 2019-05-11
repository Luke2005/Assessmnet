/*
ID: bingrui1
LANG: C++
TASK: test
*/

#include <iostream>
#include <fstream>
using namespace::std;
int main()
{int a;
 int b;
 ifstream fin("test.in");
 fin>>a>>b;

 ofstream fout("test.out");
 fout<<a+b<<endl;
}
