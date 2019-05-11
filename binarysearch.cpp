#include <iostream>
using namespace::std;

int main()
{ 
  int i,j,n,s,k,matchcounter=0;
  cin>>n;

  if (n > 100000) { return 0;}

  int* nums = new int[n];
  for (int i = 0; i< n ; i++) {
  	cin>>nums[i];
  }

  cin>>s;

  if (s > 50000) { return 0;}
  int* numz = new int[s];
  for (i = 0; i  < s; i++) {
  	cin>>numz[i];
  }

  k = n/2;

  for(i=0;i<s;i++)
     {
		if (numz[i] >= nums[k]) {
		 
	  		for(j=k;j<n;j++)
			{
				if(numz[i]==nums[j])
            			{
					matchcounter++;
					break;
				}
          		}        
		}  
		else {
			for (j=0; j<k; j++) {

				if(numz[i]==nums[j])
            			{
					matchcounter++;
					break;
				}
          		}        
			
		}                
     }
         cout<<matchcounter<<endl;
}
