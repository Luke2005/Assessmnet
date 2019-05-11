#include <iostream>
using namespace::std;

int main ()
 { int i;
   string linesegment;
   getline(cin, linesegment);
   int cost = 0;
   for(i=0;i<linesegment.length();i++)
   {	if(linesegment[i]<='z' && linesegment[i]>='a')
	        { cost += (linesegment[i]-'a')%3 + 1; }
         else if((linesegment[i]==' ')||(linesegment[i]=='.')||(linesegment[i]=='_'))
                {cost++;}
         else if(linesegment[i]==',')
                {cost++;}
         else if(linesegment[i]=='!')
                {cost++;}
              
        
  	 }
}

