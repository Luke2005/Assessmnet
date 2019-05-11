#include <iostream>
using namespace::std;


main ()
{
        int W, H,x,y,r,correctcount;
        correctcount=0;
        cin>>W;
        cin>>H;
        cin>>x;
        cin>>y;
        cin>>r;
       if(y+r<=H){
       correctcount=+1;
       }
       if(x>r){
       correctcount=+1;
       
       }
       if(y>=r){
       correctcount=+1;
       
       }
       if(x<=W-r){
       correctcount=+1;
        
       
       }
       if(correctcount=4) {
           cout<<"Yes"<<endl;
       }
       else {
           cout<<"No"<<endl;
       }
}
        

