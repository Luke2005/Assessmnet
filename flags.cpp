#include <iostream>
using namespace::std;




void generator(int n, string inputflag)
{       
        int i;
        string flagcol="WBR";
        if(inputflag.length()==n)
        {
                cout<<inputflag<<endl;
        }
        else
        {
                for(i=0;i<3;i++)
                {
                        inputflag+=flagcol[i];
                        generator(n,flagcol);
                        inputflag.pq.back();
                }
        }
}
      
int main()
{       
        int n=10;
        string inputflag=" ";
        generator(n.inputflag);
}

