#include <iostream>

using namespace::std;

int main() {
	
	int nums[6] = {1, 3, 2, 69, 10, 100};
	int x;
	cout << "your number please: " << endl;
	cin>>x;
	if( x == nums[0]) {
		cout<<"You Win the Jackpot"<<endl;
	}
	else if ( x == 3) cout<<"You Win the Jackpot"<<endl;
	else if ( x == 2) cout<<"You Win the Jackpot"<<endl;
	else if ( x == 69) cout<<"You Win the Jackpot"<<endl;
	else if ( x == 10) cout<<"You Win the Jackpot"<<endl;
	else if ( x == 100) cout<<"You Win the Jackpot"<<endl;
	else {
		cout<<"Ur Mum gay"<<endl;
	}
}

