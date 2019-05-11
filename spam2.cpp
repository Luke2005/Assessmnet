#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace::std;

int main()
{
	string slogan[1000];	
	int total, i;
	total=0;

	for(i=0;i<slogan.length();i++)
	{
		getline(cin, slogan[i]);
		if((string[i]=='a')||(string[i]=='d')||(string[i]=='g')||(string[i]=='j')||(string[i]=='m')||(string[i]=='v')||(string[i]=='y')||(string[i]==' ')||(string[i]=='.'))
		{
			total++;
		}
		else if((string[i]=='b')||(string[i]=='e')||(string[i]=='f')||(string[i]=='k')||(string[i]=='n')||(string[i]=='w')||(string[i]=='z')||(string[i]==','))
		{
			total+2;
		}
		else
		{
			total+3;
		}
	}
	cout<<total<<endl;
}
