#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int n,vet[101],i=1,scelta=4,risposta,c=0,case2_scelta=4;
	char ris='n';
	srand(time(NULL));
	do
	{
		vet[i]=0;
		i++;
	}
	while(i!=100);
	do
	{
		do
		{
			system("cls");
			cout<<"SIMULAZIONE ESTRAZIONE NUMERI TOMBOLA";
			cout<<"\n\nSelezionare una scelta con l'appropiato numero:";
			cout<<"\n1.Estrazione numeri tombola";
			cout<<"\n2.Impostazioni";;
			cout<<endl;
			cin>>scelta;
		}
		while(scelta!=1 && scelta!=2 && scelta!=3);
		switch(scelta)
		{
			case 1:
				do
				{
			
					system("cls");
					cout<<"Hai scelto di fare l'estrazione dei numeri!";
					do
					{
						n=rand()%90+1;
					}
					while(vet[n]==1);
					cout<<"\nNumero estratto: "<<n;
					vet[n]=1;
					c++;
					cout<<"\nCosa si vuole fare adesso?";
					cout<<"\n1.Prossima estrazione";
					cout<<"\n2.Visualizzare i numeri estratti e procedere con la prossima estrazione";
					cout<<"\n3.Interrompere l'estazione";
					do
					{
						cin>>risposta;
					}
					while(risposta!=1 && risposta!=2 && risposta!=3);
					switch(risposta)
					{
						case 1:
							break;
						case 2:
							i=1;
							do
							{
								if(vet[i]==1)
								{
									cout<<" "<<i<<" ";
									i++;
									
								}
								else
								{
									i++;
								}
							}
							while(i!=100);
							system("PAUSE");
							break;
						case 3:
							c=100;				
					}
					
				}
				while(c!=100);
				break;
			case 2:
				system("cls");
				cout<<"Impostazioni programma";
				cout<<"\nQui puoi impostare il tema del programa";
				cout<<"\n1.Matrix";
				cout<<"\n2.Communista";
				cout<<"\n3.Nostalgia";
				cout<<"\n4.Defeault";
				do
				{
					cout<<"\nPer favore selezionare una scelta che vada da 1 a 4.";
					cin>>case2_scelta;
				}
				while(case2_scelta!=1 && case2_scelta!=2 && case2_scelta!=3 && case2_scelta!=4);
				switch(case2_scelta)
				{
					case 1:
						system("color 02");
						break;
					case 2:
						system("color 4e");	
						break;
					case 3:
						system("color 81");
						break;
					case 4:
						system("color");
						break;		
				}
				break;
			case 3:
				system("cls");
				cout<<"\nArea del programma nacosta usata per scopi di debug. Posso stampare i valori delle variabili  per aiutare ad indentificare gli errori del programma."<<endl;
				system("PAUSE");
				cout<<endl<<"Valori di n,i,scelta,risposta,c,case2_scelta sono rispettivamente "<<n<<" "<<i<<" "<<scelta<<" "<<risposta<<" "<<c<<" "<<case2_scelta<<endl;
				system("PAUSE");
				cout<<"\nValori dei vettori sono:";	
				i=0;
				do
				{
					
					cout<<endl<<"Indice "<<i<<":"<<vet[i];
					i++;
				}
				while(i!=100);
		}
		cout<<"\nRitornare al menu'? Y/N Se digiti N usciro' dal programma ";
		cin>>ris;	
	}
	while(ris=='y' || ris=='Y');	
	
	
	
}
