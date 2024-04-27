#include <stdio.h> 
#include <time.h>
#include <stdlib.h>

struct orologio{
int hh,mm,ss;}; 

void tick (struct orologio *o); 

main(int argc, char *argv[]) 
{ 
struct tm *orario; //orario di sistema 

int sec_prec = 0; //ultimo secondo letto 
int ss = 1, mm = 0, hh = 0; //secondi minuti e ore 
struct orologio o; 

time_t tempo; //tempo calendario di sistema 

//lettura timer 

printf("Inserisci il tempo del timer nel formato [hh:mm:ss] : "); 
scanf("%d:%d:%d",&o.hh,&o.mm,&o.ss); 

//o.hh = hh; 
//o.mm = mm; 
//o.ss = ss; 

do 
{ 
system("cls"); 

//registra tempo calendario di sistema 

time(&tempo); 

//calcola il tempo come ora locale 

orario = localtime(&tempo); 

printf("%d:%d:%d", o.hh, o.mm, o.ss); 

sec_prec = orario->tm_sec; //salva lo stato precedente 

//continua a leggere il tempo finchè non passa un secondo 

while (sec_prec == orario->tm_sec){ 
time(&tempo); 
orario = localtime(&tempo); 
} 

tick(&o); 

}while ((o.ss >= 0 && o.mm >= 0 && o.hh >= 0)); 
} 

void tick (struct orologio *o) 
{ 
o->ss --; 
if (o->ss < 0){ 
o->ss = 59; 
o->mm--; 
if (o->mm < 0){ 
o->mm = 59; 
o->hh--; 
} 
}  
}
