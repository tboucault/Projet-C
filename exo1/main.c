#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

// DS M15 LPAII 16/10/2014

/* exo 1
int add(int it[],int nel){
    int i,is=0;
    for(i=0;i<nel;i++)
        {
            is=is+it[i];
        }
    return is;
    }

void main(void)
{
    int i1=2,i2=6,i=0,n;
    int it[]={2,3,4};
    if(i1==2)
        printf("test 1 ok\n");
    else
        puts("test1 ko");
    switch(i1){
        case 1:case 3: case 5: puts("test2 OK");break;
        case 2:case 4: case 6: puts("test2 ko");break;
        default:puts("test2:autre");
        }
    printf("test3: ");
    do{
        i++;
        printf("%d",i);
        }while(i<=N);
    n=add(it,3);
    printf("\ntest4:%d\n",n);
}*/

/* exo2

void main(void)
{
    int valeur=1;
    int i=0;
    do {
        printf("Saisir valeur\n");
        scanf("%d",&valeur);
        i++;
    }while(valeur<0);
    printf("%d valeurs saisies\n",i);

}*/

/* exo3

void main(void)
{
    int chiffre,i,val;

    printf("Saisir valeur entre 1 et 9:");
    scanf("%d",&chiffre);

    for(i=chiffre;i<11;i++)
    {
        val=chiffre*10;
        printf("%d ",val);
        chiffre++;
    }
}*/
 /* exo 4 NE MARCHE PAS

void main(void)
{
    int somme,annee,i,taux;
    float valeur;

    printf("Donner la somme a emprunter:");
    scanf("%d",&somme);
    printf("Donner le taux d'interet en %:");
    scanf("%d",&taux);
    printf("Au bout decombien de temps vous commencez le remboursement:");
    scanf("%d",&annee);


        printf("%d",somme);
        printf("%d",taux);
        printf("%d",annee);
        valeur=(1+(3/100));

    printf("\nVous devrez rembourser %f euros",valeur);
}*/

/* exo 5,6,7

void affichecarre(int n);
void affichetable(int n);

void main(void)
{
    int choix;
    //affichetable(choix);
    //printf("\n");

    do{
        scanf("%d",&choix);
        affichecarre(choix);
    }while(choix>0);
}
void affichetable(int n){
    int i;
    for(i=0;i<=n;i++)
    {
        printf("%d*%d=%d\n",i,n,i*n);
    }
}
void affichecarre(int n){
    int i,j=0;
    do{
         for(i=1;i<=n;i++) // affichage des lignes
            {
                printf("*");
            }
            printf("\n");
            j++;
    }while(j<n);
}*/

/* exo 8,9,10,11

void affiche(int t[], int taille);
void miroir(int src[], int taille);
void efface(int src[], int taille);

void main(void)
{
    int choix,a,b,c,d;
    int t[]={10,11,0,13};

    printf("Quelle fonction?\n1:affiche\n2:miroir\n3:efface\n");
    scanf("%d",&choix);

    if(choix==1)
    {
        affiche(t,4);
    }
    else if(choix==2)
    {
        miroir(t,4);
    }
    else if(choix==3)
    {
        efface(t,4);
    }
    else if(choix==0)
    {
        return;
    }
    else
        printf("Choix incorrect\n");

}
void affiche(int t[], int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        printf("%d ",t[i]);
    }
}
void miroir(int src[], int taille)
{
    int i;
    int dest[4];
    for(i=0;i<taille;i++)
    {
        dest[i]=src[taille-i-1];
        printf("%d ",dest[i]);
    }
}
void efface(int src[], int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        if(src[i]!=0)
            printf("%d ",src[i]);
    }
}*/



