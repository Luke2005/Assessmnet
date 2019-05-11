#include <iostream>
using namespace::std;

int main()
{
 int N,X,Z;
 cin>>N>>X>>Z;
 int a,b,greatest,least,middle;
 	if((N>X)&&(N>Z))
	 {	
		greatest=N;
       	}
 else if((X>N)&&(X>Z))
        { 
		greatest=X;
        }
	else
        {
		greatest=Z;
        }
        if((N<X)&&(N<Z)
        {
		least=N;
        }
        else if((X<N)&&(X<Z))
        {
		least=X;
        }
        else
        {
		least=Z;
        }
        
