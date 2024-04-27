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
		cout<<"    "<<"\nCalcolatore";
		cout<<"\n\n1.Area Triangolo"<<"\n2.Area Cerchio"<<"\n3.Area rettangolo"<<"\n4.Uscita";
		do
		{
			cin>>scelta;
			system("cls");
		}		
		while(scelta!=1 && scelta!=2 && scelta!= 3 && scelta!=4);	
		switch(scelta)
		{
			case 1:
				cout<<"Dammi l'altezza";
				cin>>h;
				cout<<"Dammi la base";
				cin>>b;
				area=b*h/2;
				cout<<"L'area e'"<<" "<<area;
				break;
			case 2:
				cout<<"Dammi il raggio";
				cin>>raggio;
				area=pi*raggio*raggio;
				cout<<"L'area e'"<<" "<<area;
				break;
			case 3:
				cout<<"Dammi l'altezza";
				cin>>h;
				cout<<"Dammi la base";
				cin>>b;
				area=b*h;
				cout<<"L'area e'"<<" "<<area;
				break;
			default:
				cout<<"Uscita in corso...";		
		} 
	}
	while(scelta!=4);
}


