#include <stdio.h>
#include <stdlib.h>

    int o;

int max(n,m)
{
    if(n>m)
    {
        return n;
    }
    else if (m>n)
    {
        return m;
    }
    else
    {
        return o;
    }
}
void main()
{
   int valeur1,valeur2,resultat;

   printf("Entrez 2 valeurs:\n");
   scanf("%d %d",&valeur1,&valeur2);

   resultat=max(valeur1,valeur2);
   if (resultat==o)
   {
       printf("les valeurs sont egales\n");
   }
   else
   {
       printf("valeur max:%d\n",resultat);
   }

}
