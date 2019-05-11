/*
ID: bingrui1
LANG: C++
TASK: friday
*/


#include <iostream>
#include <fstream>
using namespace::std;

int main()
{
   ifstream fin("friday.in");
   ofstream fout("friday.out");

   int n,year,month, day, days,weekday, mlength;
   int weekdaycount[7]={0};
   int mdays[]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
   fin>>n;


  if (n> 400) {return 0;}
  days =0;
   
  for(year=1900;year<1900+n;year++) {
	for (month = 0; month < 12; month++) {
		mlength = mdays[month];
		if (month == 1 ) {
			if ((year % 4 == 0)&&((year%400==0)||(year%100 != 0))) {
				mlength = mlength+1;
			}
		}

			weekday = (days+13)%7;
			weekdaycount[weekday]++;
			days=days + mlength;
			
	}
	 

  }
  fout<<weekdaycount[6]; 
  for (weekday =0; weekday<6; weekday++) {
	fout <<" "<< weekdaycount[weekday];
  }
  fout<<endl;
  return 0;
 }

