#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"

#define prix_mp 40

type_joueur inscription_joueur(type_joueur joueur);
void profil_joueur(type_joueur joueur);

type_date calculer_date(type_joueur joueur);
void Afficher_date(type_joueur joueur);

void Reposez_vous(int i);
double generateur_nbr_aleatoire (int borne_min, int borne_max);
type_joueur roue(type_joueur joueur,int paiement);
type_joueur paiement(type_joueur joueur,int somme);
type_joueur carte_de_vie(type_joueur joueur);
void afficher_produits(produit *T);
type_joueur achat_produit(type_joueur joueur,produit *T,int code,int qte);
type_joueur Achat_Supermarche_Clara(type_joueur joueur,produit *T);

type_joueur maj_stock(type_joueur joueur);
type_joueur vente_internet(type_joueur joueur);
type_joueur vente_credit(type_joueur joueur);
type_joueur planification(type_joueur joueur);
type_joueur achat_matiere_premiere(type_joueur joueur);

void enregistrer_achat_bien_consomation(type_joueur joueur, enr_achat_bien_consomation enr);
void enregistrer_production(type_joueur joueur);
void enregistrer_ventes_internet(type_joueur joueur);
void enregistrer_ventes_credit(type_joueur joueur,char* option_vente);
void enregistrer_achat_matiere_premiere(type_joueur joueur);
void enregistrer_caise(type_joueur joueur);
void enregistrer_compte(type_joueur joueur);
void enregistrer_carte_vie(type_joueur joueur,char* carte);

void lire_fichier(char* nom_fichier);

void afficher_bilan(type_joueur joueur);

type_joueur lundi(type_joueur joueur);
type_joueur mardi(type_joueur joueur);
type_joueur mercredi(type_joueur joueur);
type_joueur jeudi(type_joueur joueur);
type_joueur vendredi(type_joueur joueur);
type_joueur samedi(type_joueur joueur);
type_joueur dimanche(type_joueur joueur);

#endif // FONCTION_H_INCLUDED
