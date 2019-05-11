#include <iostream>
#include <fstream>
using namespace::std;

typedef struct Person
 {
        string name;
        int score;
 } Person;

int main()
{
int i,n,num,maxscore,tmp;
string scorername;
cin>>n;
Person*p=new Person[n];
fstream fin("scoreboard.in");
fin>>n;

 	for(i=0;i<n;i++)
		 { cin>>p[i].name;
   		p[i].score=0;}
      

	while(fin>>scorername>>tmp) {
            for(i=0;i<n;i++)
            {
               if(scorername==p[i].name)
                {p[i].score+=tmp;  }
            }
            }
            maxscore=0;
        for(i=0;i<n;i++)
          {if(p[i].score>maxscore)
             { maxscore=p[i].score;
               num=i;}
           }


       cout<<p[num].name<<endl;
}

