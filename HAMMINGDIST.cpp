#include <iostream>
using namespace::std;

int main()
{
	char nume[] = "ABCED";
	char inte[] = "ABCDE";
 
        int forrestgump;
        forrestgump=0;
        for(int i=0 ; i<5 ; i++) {
                if (inte[i]!=nume[i]) 
        		forrestgump+=1;             
        }
        cout<<"Hamming Dist:"<<forrestgump<<endl;
}
                               
