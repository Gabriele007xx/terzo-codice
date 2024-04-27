#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int tabella[5],i=0,media,somma=0,sd,diff=0,c=1;
	do
	{
		cout<<endl<<"Dammi l'elemento numero "<<c<<" ";
		cin>>tabella[i];
		somma=somma+tabella[i];
		i++;
		c++;
	}
	while(i!=5);
	i=0;
	c=0;
	media=somma/5;
	do
	{
		sd=sqrt((tabella[i] - media)^2);
		diff=diff+sd;
		cout<<endl<<"risultato elemento numero "<<c<<" dalla formula e' "<<sd<<" la somma delle differenza fino ad ora e' "<<diff;
		i++;
		c++;
	}
	while(i!=5);	
}
