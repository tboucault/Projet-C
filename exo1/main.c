#include <stdio.h>
#include <stdlib.h>

int cube(int nombre)
{
    return nombre*nombre*nombre;
}

void main()
{
    int nombreEntre = 0, resultat = 0;
    printf("Entrez un nombre... ");
    scanf("%d", &nombreEntre);
    resultat = cube(nombreEntre);
    printf("Le cube de %d est %d\n", nombreEntre,resultat);

}
