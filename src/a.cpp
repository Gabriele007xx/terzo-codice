#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int scelta;
	float area,b,h,raggio;
	const double pi=3.14159;
	cout<<"Dimmi quello che devo fare, con 1 calcolo l'area del traingolo,con 2 il cerchio";
	cin>>scelta;
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
		default:
		 cout<<"Non hai inserito nessuna lettera valida";
		 break;		
	}
}
