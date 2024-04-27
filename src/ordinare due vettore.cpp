#include <iostream>
using namespace std;
int main()
{
	int i=0,c=0,dimensione1,dimensione2,j,min,tot=0,tmp;
	cout<<"Dammi la dimensione del primo vettore: ";
	cin>>dimensione1;
	cout<<endl<<"Dammi la dimensione del secondo vettore: ";
	cin>>dimensione2;
	int a[dimensione1],b[dimensione2],c_a[dimensione1+dimensione2];
	tot=dimensione1+dimensione2;
	cout<<endl<<"Caricamento del primo vettore";
	do
	{
		cout<<endl<<"Dammi l'elemento con indice "<<i<<">> ";
		cin>>a[i];	
		i++;
	}
	while(i!=dimensione1);
	i=0;
	cout<<endl<<"Caricamento del secondo vettore";
	do
	{
		cout<<endl<<"Dammi l'elemento con indice "<<i<<">> ";
		cin>>b[i];	
		i++;
	}
	while(i!=dimensione2);
	i=0;
	do
	{
		c_a[i]=a[i];
		i++;
		c++;
	}
	while(i!=dimensione1);
	i=0;
	do
	{
		c_a[c]=b[i];
		i++;
		c++;
	}
	while(i!=dimensione2);
	i=0;

	do
	{
		cout<<endl<<c_a[i];
		i++;
	}
	while(i!=dimensione1+dimensione2);
}
