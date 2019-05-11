#include <iostream>
using namespace::std;

int main()
{ 	int n,i;
  	double total=0.0;
  	cin>>n;
	int nums[n];
 	 for(i=1;i<=n;i++)
  	{
 		cin>>nums[i];
		if (nums[i] == 3) {

			cout<<"None"<<endl;
			return 0;
		}
       		 total=total+nums[i];
 	 }
 	if(total/n==5)
 	{
        	cout<<"Named"<<endl;
 	}
	 else if((total/n<5)&&(total/n>=4.5)) 
 	{
		cout<<"High"<<endl;
 	}
	 else
 	{
 		cout<<"Common"<<endl;
 	}

}     
