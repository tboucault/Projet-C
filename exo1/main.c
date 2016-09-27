#include <stdio.h>
#include <stdlib.h>

double moy(int itab[],int iele)
{
    int i;
    int imoy=0;
    for(i=1;i<iele;i++)
    {
        imoy=(itab[i]+imoy)/i;
    }
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
    int imin,imoy;
    imin=mini(itab,5);
    imoy=moy(itab,5);
    printf("min du tableau : %d\n",imin);
    printf("moy du tableau : %d\n",imoy);
}
