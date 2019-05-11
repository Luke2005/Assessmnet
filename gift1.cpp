/*
ID: bingrui1
LANG: C++
TASK: gift1
*/


#include <iostream>
#include <fstream>
using namespace::std;

int main()
{int n,i,c,given,j,np,amount,friends,giverslot;
 string givername; 
 string whichfriend;
ifstream fin("gift1.in");
 ofstream fout("gift1.out");

fin>>n;
 string* names=new string[n];
 int* money=new int[n];

 for(i=0;i<n;i++)
 {
	fin >> names[i];
	money[i]=0;
 }
 while(true) {

   fin>>givername>>amount>>friends;
   cout<<givername<<" "<<amount<<" "<<friends<<endl;

   if (fin.eof()) break;

   if(friends==0)
   {continue;}
   for(i = 0; i < n; i ++) {
       if(givername == names[i]) {
		giverslot = i;
		break;
       }
   }
   int share = amount / friends;
   money[giverslot]+= - amount + (amount % friends);
   for(i=0; i<friends;i++) {
	fin>>whichfriend;
	int whichfriendslot;
        for(j=0; j<n; j++) {
	        if(whichfriend == names[j]){
			whichfriendslot = j;
			break;
		}
	}
	money[whichfriendslot]+=share;
   }
 }

 for(i=0;i<n;i++)
      {fout<<names[i]<<" "<<money[i]<<endl;}
}
