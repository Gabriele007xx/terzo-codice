#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int ID1,ID2,ID3,ID4,ID5,ID6,n,scelta;
	srand(time(NULL));
	ID1 = rand()%65535;
	ID2 = rand()%65535;
	ID3 = rand()%65535;
	ID4 = rand()%65535;
	ID5 = rand()%65535;
	ID6 = rand()%65535;
	printf("Gli ID dei tuoi pokemon sono: %d,%d,%d,%d,%d e %d", ID1,ID2,ID3,ID4,ID5,ID6);
	printf("\nDigitare zero per continuare, altrimenti premere qualsiasi altro numero per uscire");
	scanf("%d", &scelta);
	while(scelta==0)
	{
		n = rand()%65535;
		if(n==ID1 || n==ID2 || n==ID3 || n==ID4 || n==ID5 || n==ID6)
		printf("\nE' apparsa l'isola miraggio!");
		else
		printf("\nL'isola miraggio non c'e'");
	}


}
