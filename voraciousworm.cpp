#include <iostream>
#include <stdio.h>      
#include <math.h>
using namespace::std;

int main()
{
	double paper,cover, paperwidth,coverwidth,papertime,covertime;
	int n,total;

	cin>>paper>>cover>>paperwidth>>coverwidth;
	cin>>n;
	papertime=paperwidth/paper;
	cout<<papertime<<endl;
	covertime=2*coverwidth/cover;
	total=papertime+covertime;
	n=n%total;
        cout<<n<<endl; 
	if(n<1e-10)
	{
		cout<<"cover"<<endl;
	}
	else if(n<papertime-1e-10)
	{
		cout<<"paper"<<endl;
	}
	else
	{
		cout<<"cover"<<endl;
	}
}
	
	
