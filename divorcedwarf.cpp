#include <iostream>
using namespace::std;

int main()
{
 long  int n=0;
 string itemnum;
 cin>>itemnum;
 cout<<itemnum<<endl;
 int size, p1, p2;

 size = itemnum.size();
 cout<<"size : "<<size<<endl;

 p1 = 0;


 while (p1 < size) {
	p2 = p1 + 8;
	if (p2 > size ) {
		p2 = size;
	} 
		
	for (int i = p1; i < p2; i ++) {
		cout << itemnum[i] << "--int value--"<<(int)itemnum[i]<<endl;
		n = n * 10 + ((int)itemnum[i]-48);
		cout<<"number chunk is "<<n<<endl;

	}
	cout<<"num is "<<n<<endl;
	p1 = p1+8;
	n = n % 7;
	cout<<"remainder is "<<n<<endl;
	
 }
 
 cout<<n<<endl;
}
