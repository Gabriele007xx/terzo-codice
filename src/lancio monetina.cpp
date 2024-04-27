#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;
int main ()
{
	int T,C,lanci,i,Pt,Pc,a;
	srand(time(NULL));
	
	cout<<"BENVENUTO NEL PROGRAMMA DEL LANCIO DELLA MONETA\n";
	system("pause");
	system("cls");
	cout<<"quanti lanci vuoi fare?";
	cin>>lanci;
	
	 for(i=0;i<lanci;i++)
	 {	 
		a=rand()%2;
		  if (a==0){		  
	      T++;}
	         else
	         C++;
	        
     }
    
	
	Pt=(100*T)/lanci;
	Pc=(100*C)/lanci;
	
	cout<<"testa e' uscita ";
	cout<<T;
	cout<<"volte";
	
	cout<<"\n\ncroce e' uscita ";
	cout<<C;
	cout<<"volte";
	
	cout<<"\n\nin percentuale testa e'uscita nel  ";
	cout<<Pt;
	
	cout<<"\n\nin percentuale croce e'uscita nel ";
	cout<<Pc;
	
	return 0;
}	

