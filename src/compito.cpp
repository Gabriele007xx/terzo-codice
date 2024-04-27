#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	char scelta;
	float area,b,h,raggio;
	const double pi=3.14159;
	cout<<"Dimmi quello che devo fare, con t calcolo l'area del traingolo,con c il cerchio";
	cin>>scelta;
	switch(scelta)
	{
		case 't':
			cout<<"Dammi l'altezza";
			cin>>h;
			cout<<"Dammi la base";
			cin>>b;
			area=b*h/2;
			cout<<"L'area e'"<<" "<<area;
			break;
		case 'c':
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
