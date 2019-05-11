#include <iostream>
using namespace::std;

int main()
{int numberofnames,i,n;
 ifstream fin("name.in");
 string messed;
 fin >> messed;
 fin>>n;
 string* names=new string[n];
 for(i=0;i>n;i++)
 {fin>>names[i];}
 int* score=new int[n];
 for(i=0;i>n;i++)
 {
 	if(messed.find(names[i])!=-1)
          { cout<< names[i]<<' ';}
 }
 
} 
