#include <iostream>
using namespace std;
int main()
{
	int tabella[3][4],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<"Dammi un numero";
			cin>>tabella[i][j];
		}
		
	}
	for(i=0;i<3;i++)
	{
		cout<<endl;
		for(j=0;j<4;j++)
		{
			cout<<tabella[i][j]<< "\t";	
		}
	}
	
	
} 
