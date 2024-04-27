#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=0, nf=0, c=0;
	scanf("%d", &nf);
	if(nf%2!=0)
	{
		nf=nf-1;
	}
	nf=nf/2;
	while(c!=nf)
	{
		n = n + 2;
		c = c + 1;
		printf("\n%d", n);
		
	}
	
}
