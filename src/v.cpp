#include <iostream>
using namespace std;
int main()
{
	int n[10],j=0,i=0,c=1,temp,min;
	do
	{
		cout<<endl<<"Dammi elemento numero "<<c<<": ";
		cin>>n[i];
		i++;
		c++;
	}
	while(i!=10);
	i=0;
	c=1;	
	  	
	for(i=0; i<10-1; i++)
	{
		min = i;

		for(j=i+1; j<10; j++)
  		if(n[j] < n[min]) 
    		min = j;

		temp=n[min];
		n[min]=n[i];
		n[i]=temp;
	}
	i=0;
	c=1;
	do
	{
		cout<<endl<<"Elemento numero "<<c<<" e' "<<n[i];
		i++;
		c++;
	}
	while(i!=10);
		 
}

