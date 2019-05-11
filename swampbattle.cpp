#include <iostream>
using namespace::std;

int main()
{
	int N,K,i,unused,surviving;
        surviving=0;
        unused=0;
        cin>>N>>K;
        int booma[N+1];
        for(i=1;i<=N;i++)
        {
         	cin>>booma[i];
        }
        for(i=1;i<=N;i++)
        {  	if(booma[i]>K)
        	{
        		unused=unused+booma[i]-K;
       		 }
        	else if(booma[i]<K)
       		 {
			surviving=surviving+K-booma[i];
       		 }
        }
        cout<<unused<<' '<<surviving<<endl;
}
