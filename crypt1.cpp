/*
ID: bingrui1
LANG: C++11
TASK: crypt1 
*/


#include <iostream>
#include <fstream>
using namespace::std;

bool goodnum(int num, int n, int *digit) {

	bool bad;
	bad = true;
	while (num > 0) {
		int m;
		m = num % 10;
		for (int i = 0; i < n; i++) {
			if (m== digit[i]) {
				bad = false;		
				break;
			}
		}
		if (bad) {
			return false;
		}
		else {
			num = num / 10;
			bad = true;
		}
	}
	return true;
}


int main()
{        ifstream fin("crypt1.in");
         ofstream fout("crypt1.out");

         int i, n;
	

         fin>>n;
	 int code[n];

	 int top, p1, p2, prod, goodcount;
	 goodcount = 0;

         for(i=0;i<n;i++)
         {
		fin>>code[i];
	 }
        
	 for (top = 100; top < 1000; top++) { 
		if (!goodnum(top, n, code )) {
			continue;	

		}
		else {
		    for (int p=0; p<n; p++) {
			p2 = top * code[p];
			if ((p2>999) ||(!goodnum(p2, n, code))) {
				continue;
			}
			else {
			    for (int q=0; q<n; q++) {
				
				p1 = top* code[q];
				if ((p1>999) ||(!goodnum(p1, n, code))) {
					continue;
				}
				else {
					
					prod = p2 * 10 + p1;
					if ((prod > 9999) ||(!goodnum(prod, n, code))) {
						continue;
					}
					else {
						//cout << top << "*" <<code[p]<<code[q]<<"="<<p2<<"*10+"<<p1<<"="<<prod<<endl;
						goodcount++;
					}
				}		
			    }
			}	    
		    }
		}				

	 }
	 fout<<goodcount<<endl;        

}


