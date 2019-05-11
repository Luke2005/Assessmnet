#include <iostream>
using namespace::std;

int main()
{
	int n,j,i,maxp,maxi;
        string let;
	cin >> let;

       	string alp="abcdefghijklmnopqrstuvwxyz";
	int count[26];
        for(i=0;i<=26;i++)
        {
		count[i] = 0;
	}

       	for(i=0;i<let.length();i++) {
        	for(j=0;j<alp.length();j++)
        	{
			if(let[i] == alp[j])
                        {
        			count[j] ++;
                        }
        	}
        }
	maxp = count[0];
	maxi = 0;
        for(i=1;i<alp.length();i++)
        {
         	if(count[i]>maxp) 
                {
                	maxp=count[i];
			maxi = i;
                }
        }	 
        cout<<alp[maxi]<<endl;
}
