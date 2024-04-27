#include <iostream>
using namespace std;
int main()
{
	int i,tabella[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	i=1;
	do
	{
		cout<<endl<<"Mese "<<i<<" ha "<<tabella[i]<<" giorni";
		i++;	
	}
	while(i!=13);
}
