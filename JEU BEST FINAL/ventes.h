#ifndef VENTES_H_INCLUDED
#define VENTES_H_INCLUDED
#include<stdlib.h>
#include<stdio.h>
#include"jours.h"
#include"achats.h"
#include"fonctions.h"

typedef struct type_paiement_differe
{
    int active;
    char option_paiement[100];
    int somme;
}type_paiement_differe;

#endif // VENTES_H_INCLUDED
