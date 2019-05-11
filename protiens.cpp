#include <iostream>
using namespace::std;

int main()
{       
        int i,j,max;
 	string pro;
        cin>>pro;
        string alph = "ACDEFGHIKLMNPQRSTVWXY";
        int count[20];
        for(i=0;i<20;i++)
        {
        	count[i]=0;
        }
        for(i=0;i<pro.length();i++)
        {	       
                	for(j=0;j<alph.length();j++)
                        {
				if(pro[i]==alph[j])
        	        	{ 
					count[j]++;
               		 	}
                         }
        }

	for(j=0;j<pro.length();j++)
        {
               			if(count[j]>count[i])
                		{
                  		 max=count[j]; 
               			}
       	}
        if(max==count[j])
        {
        	cout<<alph[j]<<endl;
        }
 
}		

         
