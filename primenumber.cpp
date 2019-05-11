#include <iostream>
#include <cmath>
using namespace::std;
int main()
{
	int N,j;
        int i;
	int countprim;
 	countprim=0;
 	cin>>N;
 	int*nums=new int[N];
	for(i = 0; i < N; i ++) cin >> nums[i];
 	for(i=0;i<N;i++)
 	{	
		int x = sqrt(nums[i]);
		bool ifprime = true;
        	for(j=2;j<=x;j++)
        	{  		
         		if(nums[i] % j == 0) {
				ifprime = false;
				break;
			}
		}
		if(ifprime) 
        		countprim++;
	}

	cout<<countprim<<endl;
} 
