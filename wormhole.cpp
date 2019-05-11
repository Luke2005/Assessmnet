/*
ID: bingrui1
LANG: C++
TASK: wormhole
*/


#include <iostream>
#include <fstream>
using namespace::std;

int n, x[13], y[13];
int ppair[13];
int nextright[13];



bool wormhole_exists() {
	int ss, pp, tt;


	for (ss= 1; ss<=n; ss++) {

		pp = ss;
		for ( tt=0; tt<n ; tt++) {
			pp = nextright[ppair[pp]];
		}
	
		if (pp !=0) return true;
	}
	return false;
}


int pairs() {

	int i;
	int total;
        total=0;
	for (i = 1; i <= n; i++) {
		if (ppair[i] == 0) break;
	}

	if (i>n) {

		if (wormhole_exists()) return 1;
		else return 0;
	}

	for(int j=i+1; j<=n; j++) {
		if (ppair[j] == 0 ) {
			ppair[i]=j;
			ppair[j]=i;
			total = total + pairs();
			ppair[i]=ppair[j]=0;

		}

	}

		return total;

}


int main()
{ 

 ifstream fin("wormhole.in");

 fin>>n;
 for (int i=1; i<=n; i++) {
	fin>>x[i]>>y[i];
 }

 
 for (int i =1; i<= n; i++) {
	for(int j=1; j<=n; j++) {

		if (x[j]>x[i] && y[j]==y[i]) {
			if ((nextright[i] == 0) || (x[j]-x[i] < x[nextright[i]]-x[i]) ) 
				nextright[i] = j;
		}

	}

 }

 int num = pairs();

 ofstream fout("wormhole.out");
 fout<<num<<"\n";
 return 0;

}
