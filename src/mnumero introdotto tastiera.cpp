#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,n=0;
	scanf("%d", &a);
	if (a%2==0)
	{
		printf("il numero e' pari");	
	}
	else
	{
		a = a - 1; 
	}
	while(a!=n)
	{
		n = n + 2;
		printf("\n %d", n);
	}
	
}
