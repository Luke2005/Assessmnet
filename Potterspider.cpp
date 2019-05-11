#include <iostream>
#include <queue>
using namespace::std;


typedef struct Spider        
 {           
        int index;          
        int power;         
 } spider;

       
int main()
{
	int X,N,i,ind, max;
        Spider spider;
        queue<Spider> spiderque;
        cin>>N>>X;
        
	Spider ss[X+1];
        for(int i=1;i<=N;i++)
        {
                cin>>spider.power;
		spider.index = i;
                spiderque.push(spider);
                
                        
        }
       
	
	for (int j=1; j<=X; j++) {
		ind =1;
		max = 1;
		while(ind <=X && !spiderque.empty())
        	{
			ss[ind] = spiderque.front();
			if (ss[ind].power > ss[max].power) max = ind;
			spiderque.pop();
			ind++;
		}

		for (int k=1; k<ind; k++) {
			if(k!=max)
			{
				if (ss[k].power > 0) ss[k].power--;
				spiderque.push(ss[k]);
			}
                }
		cout<<ss[max].index<<" ";
     

	}
               
}

