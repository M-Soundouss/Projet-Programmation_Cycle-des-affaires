#ifndef ACHATS_H_INCLUDED
#define ACHATS_H_INCLUDED
#include<stdlib.h>
#include<stdio.h>
#include"jours.h"
#include"ventes.h"
#include"fonctions.h"

typedef struct _produit
{
    int     code_produit;
    char    nom_produit[20];
    char    type_produit[20];
    int     prix_produit;
}produit_supermarcher_clara;

typedef struct enr_achat_bien_consomation
{
    int code_produit;
    char* nom_produit;
    int qte;
    int prix_total;
}enr_achat_bien_consomation;

#endif // ACHATS_H_INCLUDED
