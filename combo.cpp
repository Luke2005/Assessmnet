
/*
ID: bingrui1
LANG: C++11
TASK: combo
*/


#include <iostream>
#include <fstream>
using namespace::std;

bool close(int d,int f,int n)
{ 
  if(d>f){
  if(d-f<=2)return true;
  if(n-d+f<=2)return true;
         }
  else{
    if(f-d<=2)return true;
    if(n-f+d<=2)return true;
  }
  return false;
}

int main()
 {      
	 ifstream fin("combo.in");
         ofstream fout("combo.out");
         int d,total,f,d1,d2,d3, n,f1,f2,f3,m1,m2,m3;
         total=0;
         fin>>n;
         fin>>f1>>f2>>f3;
         fin>>m1>>m2>>m3;          
         for(d1=1;d1<=n;d1++)
         {
         	for(d2=1;d2<=n;d2++)
                {       
                       for(d3=1;d3<=n;d3++)
                       {  
				if(close(d1, f1, n) && close(d2, f2, n) && close(d3, f3, n))
                                {
                                	total++;
                                //cout<<total<<endl;
                                }
                               
                                else if(close(d1, m1, n) && close(d2, m2, n) && close(d3, m3, n))
                                {
                                        total++;
                                //cout<<total<<endl;
                                }

                       }        
                }
         } 

fout<<total<<endl;


}
