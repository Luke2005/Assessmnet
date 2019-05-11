#include <iostream>
using namespace::std;

bool luckynumber ( int num) {
	int digit[6]={0};

	int i, k;

	i=0;
	while (num>0) {

		k= 5-i;
		digit[k] = num%10;
		num = num / 10;
		i++;
	}
	if (digit[0]+digit[1]+digit[2] == digit[3]+digit[4]+digit[5]) {
		return true;
	}
	else {
		return false;
	}
}


int main()
 
{        int n;

 	 cin>>n;

	int prev, next;
	prev = n -1;
	next = n + 1;


	if (luckynumber(next)) 
	{
		cout << "Yes" << endl;
	}

	else if (luckynumber(prev))  {
		cout <<"Yes" << endl;
		
	}
	else {
		cout <<"No" << endl;
	}


}
