#include <iostream>
using namespace::std;

int main()
{
	int k;
	int a,stuff,b,i,j,q,z,total;
	cin>>a>>b>>k;
	total=0;
	for(j=a;j<=b;j++)
	{
		//check if j is a beatiful number
		string s = to_string(j);
		string r ="";
		for(i=s.length() - 1;i>=0; i--)
		{
			r += s[i];
		}
		q=stoi(s);
		z=stoi(r);
		stuff=z-q;
		if(stuff%k==0)
		{
			total++;
		}

		
			
	}
cout<<total<<endl;	
}
