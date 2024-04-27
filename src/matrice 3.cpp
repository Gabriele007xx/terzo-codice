#include <iostream>
using namespace std;
int main()
{
	int matrice[3][4],i=0,j=0;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			cout<<endl<<"Indice "<<i<<j;
			cin>>matrice[i][j];
		}
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i%2!=0 && j%2!=0)
				cout<<endl<<matrice[i][j];
		}
	}
}
