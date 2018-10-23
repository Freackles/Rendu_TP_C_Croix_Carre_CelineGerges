#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nTaille=0,ni=0,nj=0;
    char cChara;

    printf("Veuillez entrer un caractere \n");                                   //On demande le caractere que veut l'utilisateur pour la croix
    scanf("%c",&cChara);                                                         //On récupère le caractère qu'il a saisi
    printf("Veuillez entrer la taille de la croix \n");                          //On demande la taille que veut l'utilisateur pour la croix
    scanf("%i",&nTaille);                                                        //On récupère la taille

    if(nTaille<1)
        printf("Erreur, veuillez entrer une valeur superieur ou egale a 1");     //On fait en sorte que la croix ai une taille minimale possible pour l'affichage

    for(ni=1; ni<=nTaille; ni++){                                                //On forme la boucle pour la position sur les lignes puis on y place un caractère ou un espace selon les données
        for(nj=1; nj<=nTaille; nj++){
            if(ni==nj || nj==(nTaille-(ni-1))){
                printf("%c",cChara);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;


}
