/*
ID: bingrui1
LANG: C++
TASK: milk2
*/


#include <iostream>
#include <fstream>
using namespace::std;

typedef struct Farm
 {
        int start;
        int end;
 } Farm;


int compare(const void *a ,const void *b)
{return
 (((Farm *)a)->start
 -((Farm *)b)->start);
}

int main()
{ 

	int n,starttime,interval,endtime,idle, milkingtime;
	milkingtime=0;
     
	ifstream fin("milk2.in");
	ofstream fout("milk2.out");
	fin>>n;
	Farm *farm = new Farm[n];
 
	for (int i=0; i<n; i++) {
		
		fin>>farm[i].start>>farm[i].end;
	         
	}
	
        qsort(farm, n, sizeof(Farm), compare);

	starttime = farm[0].start;
	endtime = farm[0].end;
	idle = 0; 
          for (int i=0; i<n; i++)
          {     
	    	interval = farm[i].start - endtime;
	    	if (interval > 0) {
             		idle = max(idle, interval); 
             		starttime = farm[i].start, endtime=farm[i].end;}
	    	else{
			milkingtime = max (milkingtime, farm[i].end - starttime);
            		endtime =max(endtime, farm[i].end);
	    	}

          }
 	fout<<milkingtime<<" "<<idle<<endl;
} 
