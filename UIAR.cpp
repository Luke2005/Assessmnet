#include <iostream>
#include <cmath>
using namespace::std;


int main()

{

 int i,z,average,least,greatest,median;
 cin>>z;
 int *n=new int[z];
  for(i=0;i<z;i++)
         {	cin>>n[i];}
  sort(n,n+z);
  least=n[0];
  greatest=n[z-1];
  median=n[z%2];
  for(i=0;i<z;i++)
         {    average+=n[i];}
  average=average/z;

  cout<<"least: "<<least<<" "<<"greatest:"<<greatest<< "median :"<<median<<"average :"<<average<<endl;
} 
