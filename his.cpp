#include <cstdlib>
#include <iostream>
using namespace::std;

struct Studendt {

	int year;
	int count;
}studendt;


int compare(const void *ap, const void *bp)
{
    const int *a = (int *) ap;
    const int *b = (int *) bp;
    if(*a < *b)
        return -1;
    else if(*a > *b)
        return 1;
    else
        return 0;
}
 
int main(int argc, char **argv)
{

    int correct, p, s;

    cin>>p;
    int prof[p+1];
    for (int i =1; i<=p; i++) {
	cin>>prof[i];
    }

    cin>>s;
    int stud[s+1];
    for (int i =1; i <= s; i++) {
	
	cin>>stud[i];
    }
    
    for (int i =1; i <=p ; i++) {
    	int *p1 = (int *) bsearch(&prof[i], stud, s, sizeof(stud[1]), compare);
    	if(prof[i]=stud[j]){
		correct++;
    }
    cout <<correct;

}
