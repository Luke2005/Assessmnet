#include <iostream>
using namespace::std;

int main()
{int n,i,m,e,l;
m= e= l=0;
cin>>n;
n=2*n;
 string word;
	for(i=0; i<n; i++)
	{ cin>> word;
        if(word=="Macaroni")
        {m++;}
        else if(word=="Emperor")
        {e++;}
        else if(word=="Little")
        {l++;}
	}

        if((m>e) && (m>l))
        {cout<<"Macaroni Penguin"<<endl;}
        else if((e>m) && (e>l))
        {cout<<"Emperor Penguin"<<endl;}
        else if((l>m) && (l>e))
        {cout<<"Little Penguin"<<endl;}
          
}

