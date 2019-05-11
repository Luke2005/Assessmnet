#include <iostream>
#include <sstream>
#include <string>

using namespace::std;

int main()
{	string T;
        string W;
	cin>>W;
        cin>>T;
	int count;
//If Lincoln was a programmer, he would be proud
	         
  	stringstream ss(T);
	string word;

	while (ss >> word) {
		if (word == W ) {
			count++;
		}
	}
	
	cout<<count<<endl;
}
