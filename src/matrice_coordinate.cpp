#include <iostream>
using namespace std;
int main()
{
	int n,m,x,y,i,j,num;
	cout<<"Dammi il numero delle righe della matrice";
	cin>>n;
	cout<<"Dammi il numero delle colonne della matrice";
	cin>>m;
	int mat[n][m];
	cout<<"\nCariamento matrice...";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<"Dammi l'elemento con indice "<<i<<j<<": ";
			cin>>mat[n][m];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(mat[i][j]>mat[i+1][j])
			{
				num=mat[i][j];
				x=i;
				y=i;
			}
			else
			{
				num=mat[i+1][j];
				x=i;
				y=i;
			}
		}
	}
	cout<<"\nL'elemento piu' grande della matrice e' "<<num<<" situato a "<<x<<" "<<y;

}
	
