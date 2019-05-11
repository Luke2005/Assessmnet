#include <iostream>

using namespace::std;

int main() {
	
	int nums[6] = {1, 3, 2, 69, 10, 100};
	int x,i;
	cout << "your number please: " << endl;
	cin>>x;
	bool win=false;

	//This is the top secret gambling machine at OLD JoE's ShaC Casino
	
	for (i=0;i<6;i++)
        { 
		if (x== nums[i]) {
			win = true;
        		cout<<"You won the Jackpot"<< endl;
			break;
		}
	}
	if (!win) cout << "loser" << endl;
 

}

