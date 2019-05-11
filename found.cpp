#include <iostream>
using namespace::std;

int main()
{	int x;
        int i;
        int query;
        int found;
        cin>>x;
        int*nums=new int[x];
	for(int i = 0; i < x; i ++) 
		cin >> nums[i];
        cin>>query;
        found=0;
	for(int i = 0; i < x; i ++) {
		if(nums[i] == query) {
			found = 1;
			break;
		}
	}
	if(found == 1) {
		cout<<"Found"<<endl;
	}
	else {
		cout<<"Not found"<<endl;
	}
}
