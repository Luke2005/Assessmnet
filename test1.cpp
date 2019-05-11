#include <iostream>
using namespace std;

void numberFunction(int i) {
  cout << "The number is: " << i << endl;
  i--;
  if(i>0) {
    numberFunction(i);
  }
  cout<<"---in the loop--"<<i<<endl;
}

int main() {

int i=2;
numberFunction(i);

return 0;
}

