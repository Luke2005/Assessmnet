#include <iostream>
using namespace::std;

typedef struct Pokemon
{ 
        string pokename;
        int power;
        int price;

} Pokemon;

int cmpprice(Pokemon a, Pokemon b)
{         
        return a.price < b.price;
         
}       

int cmppower(Pokemon a, Pokemon b)
{
        return a.power < b.power;

}

int main()
{ 
	int num,i;
	string type;
	cin >> num >> type;
	Pokemon *cards = new Pokemon[num];
	for(int i = 0; i < num; i ++) {
		cin >> cards[i].pokename >> cards[i].power >> cards[i].price;
	}  
	if(type == "power") {
		sort(cards, cards + num, cmppower);
	}
	else { sort(cards, cards + num, cmpprice);
	 }
        for(i = 0; i < num; i ++) {
		cout<<cards[i].pokename<<" "<<cards[i].power<<" "<<cards[i].price<<endl;}



} 
