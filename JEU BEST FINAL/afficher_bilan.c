#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"

void afficher_bilan(type_joueur joueur)
{
    lire_fichier(joueur.nom_fichier_achat_bien_consomation);
    printf("Voici la liste de la production de ce mois: \n \n");
    lire_fichier(joueur.nom_fichier_production);
    printf("Voici les cartes de vies que vous avez recu pendant ce mois: \n \n");
    lire_fichier(joueur.nom_fichier_carte_vie);
    printf("voici la liste des Ventes Internet de ce mois: \n \n");
    lire_fichier(joueur.nom_fichier_vente_internet);
    printf("Voici la liste des Ventes Credit de ce mois");
    lire_fichier(joueur.nom_fichier_vente_credit);
    printf("Voici la liste des quantites de matiere premiere que vous avez decider de revendre pendant ce mois: \n \n");
    lire_fichier(joueur.nom_fichier_vente_matiere_premiere);
    printf("Voici l etat de votre compte pendant ce mois: \n \n");
    lire_fichier(joueur.nom_fichier_compte);
    printf("Voici l etat de votre caisse pendant ce mois: \n \n");
    lire_fichier(joueur.nom_fichier_caisse);
    printf("Voici la liste des quantites de matire premiere que vous avez acheter pendant ce mois: \n \n");
    lire_fichier(joueur.nom_fichier_achat_matiere_premiere);
    profil_joueur(joueur);
}
