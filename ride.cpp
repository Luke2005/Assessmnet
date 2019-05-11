/*
ID: bingrui1
LANG: C++
TASK: ride
*/


#include <iostream>
#include <fstream>
using namespace::std;

int main()
{
  ofstream fout ("ride.out");

  int tot=8;
  int product1,product2;
  int i, value;
  product1=1;
  product2=1;


  ifstream fin ("ride.in");
  	char* comet =new char[tot];
  	fin>>comet; 
  
  	char* group =new char[tot];
  	fin>>group;
  
  for (i = 0; i < 6; i++) {
	value = int(comet[i]) -64;
	if (value > 0) {
		product1 = product1 * value;
	}
	value = int(group[i]) -64;
	if (value > 0) {
		product2 = product2 * value;
	}

  }
	
  product1 = product1 % 47;
  product2 = product2 % 47;

  if (product1 == product2 ) {

	fout <<"GO"<<endl;
  } 
  else {
	fout <<"STAY"<<endl;
  }

  return 0;
}
