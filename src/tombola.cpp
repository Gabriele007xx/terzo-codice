#include <iostream>
#include <cstdlib>>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int tabella[91],i=0,n;
	char ris;
	cout<<"Generatore numeri tombola";
	do
	{
		tabella[i]=0;
		i++;
	}
	while(i!=91);
	n=rand()%90+1;
	do
	{
		do
		{
			n=rand()%90+1;
		}
		while(tabella[n]==1);
		cout<<endl<<"NUMEORO USCITO E' "<<n;
		tabella[n]=1;
		cout<<endl<<"Hai finito?digita n per dirmi no";
		cin>>ris;
	}
	while(ris=='N' || ris=='n');
}
