#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nTaille=0,ni=0,nj=0;
    char cChara1, cChara2;

    printf("Veuillez entrer un caractere \n");
    scanf("%c",&cChara1);
    fflush(stdin);
    printf("Veuillez entrer un caractere \n");
    scanf("%c",&cChara2);
    fflush(stdin);
    printf("Veuillez entrer la taille du carre \n");
    scanf("%i",&nTaille);

    if(nTaille<1)
        printf("Erreur, veuillez entrer une valeur superieur ou egale a 1");

    for(ni=1; ni<=nTaille; ni++){
        for(nj=1; nj<=nTaille; nj++){
            if((ni==1||ni==nTaille) || (nj==1||nj==nTaille)){
                printf("%c",cChara1);
            }
            else{
                printf("%c",cChara2);
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;


}
