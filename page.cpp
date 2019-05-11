#include <iostream>
//#include <fstream>
using namespace::std;



int main()
{
  int h, w, n;

  int pages,lines,chars;


  chars=0;
  lines = 1;

  string words;
  cin>>h>>w>>n;
  for(int i=1;i<=n;i++)	
  {
	cin>>words;
	
	if (chars+words.length()+1<=w+1) {
		chars+=words.length()+1;
	}
	else {
		lines++;
		chars= words.length() + 1;
	}

//	cout << "--"<<words<<"--\n";
  }	

 	pages = (lines+ h-1)/h;

	cout << pages;
	
}
