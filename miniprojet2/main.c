#include <stdio.h>
#include <stdlib.h>

int ispgm(FILE*,FILE*);
int read_size(char[],char[],char[]);
void main (void)
 {
     char tab [100];
     char format[3];
     char longueur[3];
     char largeur[3];
     char contenu[10];
     FILE  *Image_Origine = NULL ,*Image_Nouvelle = NULL ;
     //Image_Origine  =  fopen ("C:\\Users\\Cyralik\\Documents\\GitHub\\Projet-C\\miniprojet2\\bin\\Debug\\lm1test.pgm", " r"); // ouverture fichier source
    // Image_Nouvelle  =  fopen ("C:\\Users\\Cyralik\\Documents\\GitHub\\Projet-C\\miniprojet2\\bin\\Debug\\lm1new.pgm", " w+"); // ouverture/création fichier destination
     Image_Origine  =  fopen ("Z:\\Projet-C\\miniprojet2\\bin\\Debug\\lm1test.pgm", " r"); // ouverture fichier source
     Image_Nouvelle  =  fopen ("Z:\\Projet-C\\miniprojet2\\bin\\Debug\\lm1new.pgm", " w+"); // ouverture/création fichier destination

     printf ("Debut  du  programme  du  TP  Image \n");
     // Verification de l’ ouverture des fichiers
     if (( Image_Origine != NULL )&&( Image_Nouvelle != NULL ))
        {
            printf("   - Ouverture fichiers: OK\n");

            if(ispgm(Image_Origine,Image_Nouvelle)==1) // si fichier pgm, on continu
            {
                    printf("   - Fichier .pgm reconnu\n");

                    fgets ( tab , 100 , Image_Origine );
                    sscanf(tab,"%s",&contenu);
                    fgets ( tab , 100 , Image_Origine );
                    sscanf(tab,"%s",&contenu);

                    while(contenu[0]=='#') //si ligne de commentaire, on saute de ligne
                    {
                        fgets ( tab , 100 , Image_Origine );
                        sscanf(tab,"%s",&contenu);
                    }
                    read_size(tab);
                   // fgets ( tab , 100 , Image_Origine );
                    //sscanf(tab,"%s",&contenu);
                    printf("coucou\n");

                    //fgets ( tab , 100 , Image_Origine );


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
                printf("   - Erreur, ce n'est pas un fichier .pgm");
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

    if((format[0]=='P')&&(format[1]=='2')) //P2=fichier pgm
        return 1; //fichier pgm
    else
        return 0; //pas fichier pgm
}
int read_size(char tab[], char longueur[], char largeur[])
{
     int i=0,j=0,k=0,l=0,m=0;
     char c;

    //lecture de la taille du tableau
    do{
        c=tab[i++];
    }while(c!=' ');// detection de l'espace entre longueur et largeur
    do{
        c=tab[l++];
    }while(c!='\n');// detection fin de largeur

    for(j=0;j<i-1;j++)
    {
        longueur[j]=tab[j];//stockage longueur (valeur avant l'espace)
    }
    for(k=i;k<l-1;k++)
    {
        largeur[m]=tab[k];//stockage largeur (valeur apres l'espace)
        m++;
    }
    plongueur=&longueur;
    plargeur=&largeur;
}
