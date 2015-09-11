#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include<stdlib.h>
#include<stdio.h>
#include"ventes.h"

typedef struct _type_caisse
{
    int affaire;
    int depense;
    int economie;
}type_caisse;

typedef struct _type_compte
{
    int solde;
}type_compte;

typedef struct _type_joueur
{
    int num_joueur;
    char* nom_joueur;
    int num_jour;
    int joue_encore;
    int qte_mp;
    int qte_produit;
    int qte_vente_internet;
    int qte_vente_credit;
    FILE* fichier_achat_bien_consomation;
    FILE* fichier_production;  /*des entiers */
    FILE* fichier_carte_vie;
    FILE* fichier_vente_internet;
    FILE* fichier_vente_credit;
    FILE* fichier_vente_matiere_premiere;
    FILE* fichier_compte;
    FILE* fichier_caisse;
    FILE* fichier_achat_matiere_premiere;
    char* nom_fichier_achat_bien_consomation;
    char* nom_fichier_production;
    char* nom_fichier_carte_vie;
    char* nom_fichier_vente_internet;
    char* nom_fichier_vente_credit;
    char* nom_fichier_vente_matiere_premiere;
    char* nom_fichier_compte;
    char* nom_fichier_caisse;
    char* nom_fichier_achat_matiere_premiere;
    type_caisse caisse;
    type_compte compte;
    type_paiement_differe paiement_differe[4];
}type_joueur;

type_joueur inscription_joueur(type_joueur joueur);

#endif // JOUEUR_H_INCLUDED
