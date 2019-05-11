#include <iostream>
using namespace::std;

void generator (int n, string dna)
{	string alp="ATCG";
        if(dna.length()==n)
        {
		cout<<dna<<endl;
        }
        else
        {
        	for(i=0;i<4;i++)
                {
                	dna+=alp[i]
                        generator(n, dna);
                        dna.pq.back();
                }
        }
}

int main()
{
	int n=10;
        string dna=" ";
        generator(n.dna);
}
