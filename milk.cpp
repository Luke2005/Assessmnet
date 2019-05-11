/*
ID: bingrui1
LANG: C++11
TASK: milk
*/


#include <iostream>
#include <fstream>
#include <algorithm>
using namespace::std;

typedef struct farmer {
	int price;;
	int unit;
} farmer;

int pricecmp (farmer a, farmer b) {
	return a.price < b.price;
}

int main()
{
	 ifstream fin("milk.in");
	 ofstream fout("milk.out");

	 int m, n;

	 fin>>n>>m;
	 
	 int cost=0;
	 int num=0;

	 farmer *fr = new farmer[m];

 	 for(int i=0;i<m;i++) {	
		fin >> fr[i].price >> fr[i].unit;
	}
	sort(fr, fr+m, pricecmp);
	int j=0;
	while(n>0) {
		if (n> fr[j].unit) {
			num = fr[j].unit;
		}
		else {
			num = n;
		}
		
		cost += fr[j].price * num;

		j++;
		n -= num;

	}

	fout << cost <<endl;
}

