#include <stdio.h>
#include <stdlib.h>


void main(void)
{
 int tab[5];
 int nombre,i,a,b,c,d,e;

 printf("saisissez 5 nombres entiers:\n");
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

 tab[0]=a;
 tab[1]=b;
 tab[2]=c;
 tab[3]=d;
 tab[4]=e;

 printf("saisissez un nombre a chercher dans le tableau:\n");
 scanf("%d",&nombre);

 for(i=0;i<5;i++)
 {
     //printf("%d\n",tab[i]);

     if(tab[i]==nombre)
     {
         printf("%d se trouve bien dans le tableau dans la case %d",nombre,i+1);
         return;
     }
 }
 printf("%d ne se trouve pas dans le tableau...",nombre);
}
