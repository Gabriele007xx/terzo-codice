#include <iostream>
using namespace std;
int main()
{
	int i,tabella[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31},mese,giorno;
	cout<<"Dammi il mese";
	do
	{
		cout<<endl<<"Dammi un mese che vada da 1 a 12.";
	    cin>>mese;
	}
	while(mese<1 || mese>12);
	cout<<endl<<"Dammi il giorno";
	cin>>giorno;
	if(giorno>=1)
	{
		if(giorno<=tabella[mese])
			cout<<"La data esiste";
		else
			cout<<"La data non esiste";
	}
	else
		cout<<"La data non esiste";
	
	
}
