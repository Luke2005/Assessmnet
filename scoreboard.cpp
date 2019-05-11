#include <iostream>
#include <fstream>
using namespace::std;

int main()
{int a,n,i,tmp,num,maxscore ;
string scorername;
ifstream fin("scoreboard.in");
fin>>n;
string* names=new string[n];
 int* score=new int[n];

	for(i=0;i<n;i++)
         {fin>>names[i];
           score[i]=0;}

        while(fin>>scorername>>tmp) {
            for(i=0;i<n;i++)
            {
               if(scorername==names[i])
                {score[i]+=tmp;  }
            }
            }
	maxscore=0;
        for(i=0;i<n;i++)
          {if(score[i]>maxscore)
             { maxscore=score[i];
               num=i;}
           }
 
       
       cout<<names[num]<<endl;
}
