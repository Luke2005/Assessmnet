#include <iostream>
using namespace::std;


int main()
{
	int n,i,j,a,k;
	a=0;
	bool findit;
	cin>>n;
	cout<<"n:"<<n<<endl;
	long int nums[n];
	for(i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	for(j=0;j<n;j++)
	{
		k=0;
		while(a<nums[j])
		{   
			    
			a=k*(k+1)/2;
			a=a+1;
			findit=false;
			cout<<"a:"<<a<<"---"<<nums[j]<<"j is"<<j<<endl;
			if(a==nums[j])
			{
				findit=true;
				break;
		        }
		 k++;
		}
		if(findit)
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}

	}	

}


		


