#include <iostream>
using namespace std;
int main()
{
	int min,max,n,i=0,c=0,j=0; // n è il numero degli elementi
	cout<<"Dammi il numero degli elementi del vettore";
	cin>>n;
	int vet[n];
	do
	{
		cout<<endl<<"Dammi il valore max, che deve essere piu' grande di min, il valore minimo";
		cin>>max;	
		cout<<endl<<"Dammi il valore min";
		cin>>min;
	}
	while(max<min);
	cout<<endl<<"Caricamento del vettore 1...";
	do
	{
		cout<<"Dammi l'elemento con indice "<<i<<": ";
		cin>>vet[i];
		if(vet[i]>min && vet[i]<max)
			c++;
		i++;
	}
	while(i!=n);
	i=0;
	int vetb[c];
	do
	{
		if(vet[i]>min && vet[i]<max)
		{
			vetb[j]=vet[i];
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	while(i!=n);
	j=0;
	do
	{
		cout<<endl<<"Elemento con indice "<<j<<" del vettore 2: "<<vetb[j];
		j++;
	}
	while(j!=c);

	
}

