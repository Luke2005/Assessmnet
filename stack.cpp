#include <iostream>
#include <stack>
#include <queue>
using namespace::std;


int main()
{       
        int i;
	
 	queue<char> catchup;
	stack<char> porkchup;
	char karatechup[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for( i=0; i<21; i++)
        {
		porkchup.push(karatechup[i]);
                catchup.push(karatechup[i]);
        }
        while(!porkchup.empty())
        { 
     		cout<<"good for chup:"<<' '<<porkchup.top()<<endl;
                porkchup.pop();
        }
        while(!catchup.empty())
        {
		cout<<"Gordon Ramsey says:"<<' '<<catchup.front()<<endl;
                catchup.pop();
        }
        return 0;
          
          




}

