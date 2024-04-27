#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
	short int scelta;
do
{	
	srand(time(NULL));
	short int n_giocatori,d1,d2,punteggio1,punteggio2;
	float pa1,pa2;
	int i,p2,p1,lanci;
	cout<<"             Simulatore professionale dadi";
	cout<<"\nEseguire una scelta:";
	cout<<"\n1.1 giocatore con 2 dadi"<<"\n2.2 giocatori con 2 dadi"<<"\n3.Uscita ";
	do
	{
		cin>>scelta;
	}		
	while(scelta!=1 && scelta!=2 && scelta!=3);
	switch(scelta)
	{
		case 1:
			cout<<"\nDammi il numeor dei lanci";
			cin>>lanci;
			for(i=0;i<lanci;i++)
			{
				d1=rand()%6+1;
				d2=rand()%6+1;
				punteggio1=d1+d2;
				break;
			}
		case 2:
			cout<<"\nDammi il numeor dei lanci";
			cin>>lanci;
			for(i=0;i<lanci;i++)
			{
				d1=rand()%6+1;
				d2=rand()%6+1;
				punteggio1=d1+d2;
				d1=rand()%6+1;
				d2=rand()%6+1;
				punteggio2=d1+d2;
				if(punteggio1>punteggio2)
				p1++;
				else
				p2++;
				break;
			}
			
	}
	if(scelta==1)
	{
		cout<<"\nPunteggio totale ottenuto: "<<punteggio1;
	}	
	else
	{
		pa1=100*p1/lanci;
		pa2=100-pa1;
		cout<<endl<<"Il giocatore 1 ha vinto "<<p1<<" volte "<<"mentre il giocatore ha vinto "<<p2<<" volte"<<",giocatore 1 ha vinto il "<<pa1<<"% delle partite"<<" mentre giocatore 2 ha vinto il "<<pa2;
	}
	system("PAUSE");
	system("cls");
}
while(scelta!=3);	
}


