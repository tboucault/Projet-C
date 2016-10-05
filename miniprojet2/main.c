#include <stdio.h>
#include <stdlib.h>

int ispgm(FILE*,FILE*);
int main (void)
 {
     printf ("Debut  du  programme  du  TP  Image \n");
     FILE  *Image_Origine = NULL ,*Image_Nouvelle = NULL ;
     char Tab [100];
     char format[3];
     int i,j=0;
     int largeur,longueur,intensite;
     Image_Origine  =  fopen ("Z:\\Projet-C\\miniprojet2\\bin\\Debug\\lm1test.pgm", " r"); // ouverture fichier source
     Image_Nouvelle  =  fopen ("Z:\\Projet-C\\miniprojet2\\bin\\Debug\\lm1new.pgm", " w+"); // ouverture/création fichier destination
     // Verification de l’ ouverture des fichiers
     if (( Image_Origine != NULL )&&( Image_Nouvelle != NULL ))
        {
            printf("ouverture ok\n");

            // verification s'il s'agit bien d'un fichier pgm:
            if(ispgm(Image_Origine,Image_Nouvelle)==1) // si fichier pgm, on continu
            {
                for(i=0;i<100;i++)
                {
                    fgets ( Tab ,100 , Image_Origine );
                    fputs ( Tab , Image_Nouvelle );
                }

                // Recup  de  largeur , longueur  et intensite  de  l’ image  ( variables  a  declarer )
                // Recopie  dans  le  fichier  destination
                // Creation  d’ un  tab  dynamique  de  la  longueur  d’ une  ligne  ( variable  a  declarer )
                // Algo
                /*for (...)
                {
                    // On  recopie  toute  la ieme  ligne  dans le tableau
                    // on  inverse  la  ligne  dans  Tab
                    // on  recopie  Tab  dans  le  fichier  de  destination
                }*/
                // Puis  on   ferme   les  fichiers
                fclose ( Image_Origine );
                fclose ( Image_Nouvelle );
            }
            else // erreur pas fichier pgm donc on stop le programme
            {
                printf("Erreur, ce n'est pas un fichier .pgm");
                return 0;
            }
        }
        else
        {
            //  On   affiche  un   message  d’ erreur  si  pb  d’ ouverture  des  fichiers
            printf ("Impossible  douvrir  une  ( ou  les  deux )  image  ( s)\n");
        }
        printf ("Fin  du  programme  du  TP  Image \n");
        return  0;
}
int ispgm(FILE* img_src,FILE* img_dest)
{
    char format[3];
    fgets ( format , sizeof format, img_src ); // on extrait la premiere ligne du fichier qui contient le format
    fputs ( format , img_dest );

    if((format[0]=='P')&&(format[1]=='2')) //P2=fichier pgm
        return 1; //fichier pgm
    else
        return 0; //pas fichier pgm
}
