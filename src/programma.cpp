#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
	int lanci,testa=0,croce=0,p_c,p_t,i,n;
	srand(time(NULL));
	cout<<"Progamma per lanciare una monetina quante volte vuoi tu.Quante volte devo tirare la moneta? ";
	cin>>lanci;
	for(i=0;i<lanci;i++)
	{
		n=rand()%2;
		if(n==0)
		{
			testa++;
			cout<<"\nE' uscito testa!";
		}
		else
		{
			croce++;
			cout<<"\nE' uscito croce";
		}
	}
	p_t=100*testa/lanci;
	p_c=100-p_t;
	cout<<endl<<"Ho lanciato la moneta "<<lanci<<" volte ed e' uscito testa "<<testa<<" volte, mentre e' uscito croce "<<croce<<" volte."<<"Testa e' il "<<p_t<<"% dei casi mentre croce il "<<p_c<<"%";
}
