#include <stdio.h>
#include <stdlib.h>

int main()
{
  float r1,r2,r3,resultats,resultatp=0;
  int choix=0;

  printf("Montage serie (tapez 1) ou parallele (tapez 2)\n");
  scanf("%d",&choix);

      printf("saisir r1:\n");
      scanf("%f",&r1);
      printf("saisir r2:\n");
      scanf("%f",&r2);
      printf("saisir r3:\n");
      scanf("%f",&r3);

      if (choix==1){
    resultats=(r1+r2+r3);
    printf("La resistance equivalente est:%f",resultats);
    }
    else if(choix==2){
    resultatp=(r1*r2*r3)/(r1*r2+r1*r3+r2*r3);
    printf("La resistance equivalente est:%f",resultatp);
    }

}
