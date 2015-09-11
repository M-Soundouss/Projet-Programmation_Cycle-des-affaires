#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"


void lire_fichier(char* nom_fichier)
{
    char ligne[100];
    FILE* fichier=fopen(nom_fichier,"r");

    while(fgets(ligne,100, fichier) != NULL)
    {
        puts(ligne);
    }
    printf("\n \n \n");
    fclose(fichier);
}
