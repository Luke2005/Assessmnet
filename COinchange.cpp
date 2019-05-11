#include <iostream>
using namespace::std;

int main()
{int n,numofquart,numofdim,numofnick,sum;
cin>>n;
numofquart=n/25;
numofdim=(numofquart%25)/10;
int left = n - numofquart*25-numofdim*10;
numofnick=left/5;
left=left-numofnick*5;
sum=numofquart+numofdim+numofnick+left;
cout<<sum<<endl;
}


