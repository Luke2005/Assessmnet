#include <iostream>
#include <stdlib.h> 
using namespace::std;

int compare (const void * a, const void * b) {
	return (*(int*)a- *(int*)b);
}
int main()
{
	int n,nuts,counter,cars,i,j;
	cin>>n;
        int wheels[n];
	for(i=0;i<n;i++)
	{
		cin>>wheels[i];
	}
	 qsort(wheels, n, sizeof(int), compare);
	counter=1;
	cars=0;
	for(j=1;j<n;j++)
		{
			cout<<"----"<<wheels[j]<<endl;

			if(wheels[j-1]==wheels[j])
			{
				counter++;
                                
                	}
			else
			{
				
                                
                                cars+=counter/4;
                   		counter =1;             
                	}
       		 }

	if (counter > 1) {
		cars+=counter/4;

	}

	cout<<cars<<endl;
}
