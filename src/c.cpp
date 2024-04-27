#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int scelta=5;
	do
	{
		
		float area,b,h,raggio;
		const double pi=3.14159;
		cout<<"    "<<"\nCalcolatore Aree poligoni";
		cout<<"\n\n1.Area Triangolo"<<"\n2.Area Cerchio"<<"\n3.Area rettangolo"<<"\n4.Uscita";
		do
		{
			cout<<"\nDigita il numero corrispondente alla scelta che vada solo da 1 a 4: ";
			cin>>scelta;
		}		
		while(scelta!=1 && scelta!=2 && scelta!= 3 && scelta!=4);	
		switch(scelta)
		{
			case 1:
				system("cls");
				cout<<"  "<<"Hai scelto: triangolo";
				cout<<"\nDammi l'altezza: ";
				cin>>h;
				cout<<"\nDammi la base: ";
				cin>>b;
				area=b*h/2;
				cout<<"\nL'area e'"<<" "<<area;
				break;
			case 2:
				system("cls");
				cout<<" "<<"Hai scelto: cerchio";
				cout<<"\nDammi il raggio";
				cin>>raggio;
				area=pi*raggio*raggio;
				cout<<"\nL'area e'"<<" "<<area;
				break;
			case 3:
				system("cls");
				cout<<" "<<"Hai scelto: rettangolo";
				cout<<"\nDammi l'altezza";
				cin>>h;
				cout<<"\nDammi la base";
				cin>>b;
				area=b*h;
				cout<<"\nL'area e'"<<" "<<area;
				break;
			default:
				cout<<"\nUscita in corso...";		
		}
		if (scelta!=4)
		{
			cout<<"\n";
			system("PAUSE");
		    system("cls");
		}
	 
	}
	while(scelta!=4);
}




	
