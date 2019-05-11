#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace::std;

int main()
{
	string slogan;	
	int total, i;
	total=0;
	getline(cin, slogan);
        	

	for(i=0;i<slogan.length();i++)
	{
	
		if((slogan[i]=='a')||(slogan[i]=='d')||(slogan[i]=='g')
			||(slogan[i]=='j')||(slogan[i]=='m')||(slogan[i]=='v')||(slogan[i]=='p')||(slogan[i]=='s')
			||(slogan[i]=='y')||(slogan[i]==' ')||(slogan[i]=='.'))
		{
			total++;
		}
		else if((slogan[i]=='b')||(slogan[i]=='e')||(slogan[i]=='h')||(slogan[i]=='k')||(slogan[i]=='n')||(slogan[i]=='q')||(slogan[i]=='t')||(slogan[i]=='w')||(slogan[i]=='z')||(slogan[i]==','))
		{
			total=total+2;
		}
		else 
		{
			total=total+3;;
		}
	}
	cout<<total<<endl;
}
