#include <iostream>
using namespace std;
int main()
{
	int i=1,media,n[61];
	do
	{
		cout<<endl<<"Dammi il vaore misurato ";
		cin>>n[i];
		i++;
	}
	while(i!=61);
	i=1;
	media=(n[i]+n[i]+n[i+1])/3;
	n[i]=media;
	i++;
	do
	{
		media=(n[i]+n[i-1]+n[i+1])/3;
		media=n[i];
		i++;
	}
	while(i!=59);
	media=(n[i]+n[i]+n[i-1])/3;
	n[60]=media;
	i=1;
	do
	{
		cout<<endl<<"Il valore numero "<<i<<"e'>> "<<n[i];
		i++;
	}
	while(i!=61);
	
}
