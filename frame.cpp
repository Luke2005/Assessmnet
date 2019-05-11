#include <iostream>
using namespace::std;

int main(){
   int H;
   int W;
   int i;
   int j;
   cin>>H;
   cin>>W;
   while(H!=0 && W!=0) {
      for(i=0;i<H;i++)	{	
            for(j=0;j<W;j++) {
	              if(i==0) cout<<'#';
                      else if(i==W-1) cout<<'#';
                      else if(j==0)
                              cout<<'#';
                      else if(j==H-1)
                              cout<<'#';
                      else
                              cout<<'.';
      
           }
	   cout<<endl;
        }
        cout<<endl;
        cin>>H>>W;
    }		
    return(0);
}
