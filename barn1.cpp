/*
ID: bingrui1
LANG: C++11
TASK: barn1
*/





#include <iostream>
#include <fstream>
#include <algorithm>
using namespace::std;

typedef struct stall {
	int id;
	int gap;
} stall;

int stallcmp ( stall a, stall b) {

	return a.gap > b.gap;
}

int stallorder (stall a, stall b) {
	return a.id < b.id;
}

int main()
{
	 ifstream fin("barn1.in");
	 ofstream fout("barn1.out");

	 int m, s, n;

	 fin>>m>>s>>n;
	 
	 int num=0;

	 stall *st = new stall[n];

 	 for(int i=0;i<n;i++) {	
		fin >> st[i].id;
		st[i].gap = 1; 
	}
	sort(st, st+n, stallorder);
	for (int i=0; i<n; i++) {
		if (i > 0) { 
			st[i].gap = st[i].id - st[i-1].id; 
		}
	}
	sort(st, st + n, stallcmp);

	for (int j=0; j<n; j++) {

		if (j < m-1) {
			num++;	
		}
		else {
			num += st[j].gap;
		}
	}
	fout << num <<endl;
}

