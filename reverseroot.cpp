#include <iostream>
#include <cmath>
using namespace::std;

int main()
{
 double *nums = new double[256000];
 double a;
 int t = 0;
 while(cin >> a) 
        {nums[t++] = sqrt(a);}

 for(int i = t - 1; i >= 0; i --) 
   {	 printf("%.4f\n",nums[i]);}

}
