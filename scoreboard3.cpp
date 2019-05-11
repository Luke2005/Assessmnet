#include <iostream>
#include <fstream>
using namespace::std;

typedef struct Person
 {
        string name;
        int score;
 } Person;

int scorecmp(Person a, Person b)
{
	return a.score < b.score;
}

int main()
{
int i,n,a,b,num,maxscore,tmp;
string scorername;
fstream fin("scoreboard.in");
fin>>n;
Person*p=new Person[n];

        for(i=0;i<n;i++)
                 { fin>>p[i].name;
                p[i].score=0;}


        while(fin>>scorername>>tmp) {
            for(i=0;i<n;i++)
            {
               if(scorername==p[i].name)
                {p[i].score+=tmp;  }
            }
            }
           sort(p, p+n, scorecmp);
          for (i=0; i<n; i++)
          {      cout<<p[i].name<<" "<<p[i].score<<endl;

	  }
           return 0;
}
