#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define N 10

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

typedef struct type_paiement_differe
{
    int active;
    char* option_paiement;
    int somme;
    int num_enregistrement;
}type_paiement_differe;

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
    type_caisse caisse;
    type_compte compte;
    type_paiement_differe paiement_differe[4];
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
    int somme_depenses;
    int somme_affaires;
    int somme_economie;
    int chiffre_affaire;
}type_joueur;

typedef struct _produit
{
    int     code_produit;
    char    nom_produit[20];
    char    type_produit[20];
    int     prix_produit;
}produit;

typedef struct _type_date
{
    int num_jour;
    char* jour;
}type_date;

typedef struct enr_achat_bien_consomation
{
    int code_produit;
    char* nom_produit;
    int qte;
    int prix_total;
    type_date date;
}enr_achat_bien_consomation;

typedef struct enr_production
{
    int qte;
    type_date date;
}enr_production;

typedef struct enr_achat_vente  /*ventes_internet & achat_mp */
{
    int qte;
    int prix_total;
    type_date date;
}enr_achats_ventes;

typedef struct enr_ventes_credit
{
    int qte;
    int prix_total;
    char* option_vente;
    type_date date;
}enr_ventes_credit;

typedef struct enr_caisse
{
    type_caisse caisse;
    type_date date;
}enr_caisse;

typedef struct enr_compte
{
    type_compte compte;
    type_date date;
}enr_compte;

#endif // STRUCTURES_H_INCLUDED
