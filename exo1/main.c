#include <stdio.h>
#include <stdlib.h>

double prod(int itab[], int iele)
{
    int i;
    double iprod=1;
    for(i=0;i<iele;i++)
    {
        iprod=itab[i]*iprod;
    }
    return iprod;
}
double moy(int itab[],int iele)
{
    int i;
    double imoy=0;
    for(i=1;i<iele;i++)
    {
        imoy=(itab[i]+imoy);
    }
    imoy=imoy/iele;
    return imoy;
}
int mini(int itab[],int iele)
{
    int i;
    int imin;
    imin=itab[0];
    for(i=1;i<iele;i++)
    {
        if(itab[i]<imin)
        {
            imin=itab[i];
        }
    }
    return imin;
}

void main(void)
{
    int itab[5]={2,5,6,1,10};
    int imin;
    double imoy,iprod;
    imin=mini(itab,5);
    imoy=moy(itab,5);
    iprod=prod(itab,5);
    printf("minimum du tableau : %d\n",imin);
    printf("moyenne du tableau : %f\n",imoy);
    printf("produit du tableau : %f\n",iprod);
}
