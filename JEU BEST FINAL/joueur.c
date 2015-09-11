#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"joueur.h"
#include"jours.h"
#include"achats.h"
#include"ventes.h"
#include"fonctions.h"

type_joueur inscription_joueur(type_joueur joueur)
{
    FILE* fichier_inscription_joueur=fopen("fichier_inscription_joueur.txt","a+");

    if(fgetc(fichier_inscription_joueur)==EOF)
    {
        printf("vous etes le joueur num 1:\n");
        fputc('a',fichier_inscription_joueur);

        /*initialisation des variables de la struucture joueur et creation des fichiers */

        joueur.num_joueur=1;
        joueur.num_jour=1;
        joueur.joue_encore=1;
        joueur.fichier_achat_bien_consomation=fopen("fichier_achat_bien_consomation1.txt","a+");
        fclose(joueur.fichier_achat_bien_consomation);
        joueur.fichier_production=fopen("fichier_production1.txt","a+");
        fclose(joueur.fichier_production);
        joueur.fichier_carte_vie=fopen("fichier_carte_vie1.txt","a+");
        fclose(joueur.fichier_carte_vie);
        joueur.fichier_vente_internet=fopen("fichier_vente_internet1.txt","a+");
        fclose(joueur.fichier_vente_internet);
        joueur.fichier_vente_credit=fopen("fichier_vente_credit1.txt","a+");
        fclose(joueur.fichier_vente_credit);
        joueur.fichier_vente_matiere_premiere=fopen("fichier_vente_matiere_premiere1.txt","a+");
        fclose(joueur.fichier_vente_matiere_premiere);
        joueur.fichier_compte=fopen("fichier_compte1.txt","a+");
        fclose(joueur.fichier_compte);
        joueur.fichier_caisse=fopen("fichier_caisse1.txt","a+");
        fclose(joueur.fichier_caisse);
        joueur.fichier_achat_matiere_premiere=fopen("fichier_achat_matiere_premiere1.txt","a+");
        fclose(joueur.fichier_achat_matiere_premiere);
    joueur.nom_fichier_achat_bien_consomation="fichier_achat_bien_consomation.txt";
    joueur.nom_fichier_production="fichier_production1.txt";
    joueur.nom_fichier_carte_vie="fichier_carte_vie1.txt";
    joueur.nom_fichier_vente_internet="fichier_vente_internet1.txt";
    joueur.nom_fichier_vente_credit="fichier_vente_credit1.txt";
    joueur.nom_fichier_vente_matiere_premiere="fichier_vente_matiere_premiere1.txt";
    joueur.nom_fichier_compte="fichier_compte1.txt";
    joueur.nom_fichier_caisse="fichier_caisse1.txt";
    joueur.nom_fichier_achat_matiere_premiere="fichier_achat_matiere_premiere1.txt";
    }
    else
    {
    if(fgetc(fichier_inscription_joueur)==EOF)
    {
        printf("vous etes le joueur num 2:\n");
        fputc('a',fichier_inscription_joueur);
        /*initialisation des variables de la struucture joueur et creation des fichiers */

        joueur.num_joueur=2;
        joueur.num_jour=1;
        joueur.joue_encore=1;
        joueur.fichier_achat_bien_consomation=fopen("fichier_achat_bien_consomation2.txt","a+");
        fclose(joueur.fichier_achat_bien_consomation);
        joueur.fichier_production=fopen("fichier_production2.txt","a+");
        fclose(joueur.fichier_production);
        joueur.fichier_carte_vie=fopen("fichier_carte_vie2.txt","a+");
        fclose(joueur.fichier_carte_vie);
        joueur.fichier_vente_internet=fopen("fichier_vente_internet2.txt","a+");
        fclose(joueur.fichier_vente_internet);
        joueur.fichier_vente_credit=fopen("fichier_vente_credit2.txt","a+");
        fclose(joueur.fichier_vente_credit);
        joueur.fichier_vente_matiere_premiere=fopen("fichier_vente_matiere_premiere2.txt","a+");
        fclose(joueur.fichier_vente_matiere_premiere);
        joueur.fichier_compte=fopen("fichier_compte2.txt","a+");
        fclose(joueur.fichier_compte);
        joueur.fichier_caisse=fopen("fichier_caisse2.txt","a+");
        fclose(joueur.fichier_caisse);
        joueur.fichier_achat_matiere_premiere=fopen("fichier_achat_matiere_premiere2.txt","a+");
        fclose(joueur.fichier_achat_matiere_premiere);
    joueur.nom_fichier_achat_bien_consomation="fichier_achat_bien_consomation.txt";
    joueur.nom_fichier_production="fichier_production2.txt";
    joueur.nom_fichier_carte_vie="fichier_carte_vie2.txt";
    joueur.nom_fichier_vente_internet="fichier_vente_internet2.txt";
    joueur.nom_fichier_vente_credit="fichier_vente_credit2.txt";
    joueur.nom_fichier_vente_matiere_premiere="fichier_vente_matiere_premiere2.txt";
    joueur.nom_fichier_compte="fichier_compte2.txt";
    joueur.nom_fichier_caisse="fichier_caisse2.txt";
    joueur.nom_fichier_achat_matiere_premiere="fichier_achat_matiere_premiere2.txt";
    }

    else
    {

    if(fgetc(fichier_inscription_joueur)==EOF)
    {
        printf("vous etes le joueur num 3:\n");
        fputc('a',fichier_inscription_joueur);
        /*initialisation des variables de la struucture joueur et creation des fichiers */

        joueur.num_joueur=3;
        joueur.num_jour=1;
        joueur.joue_encore=1;
        joueur.fichier_achat_bien_consomation=fopen("fichier_achat_bien_consomation3.txt","a+");
        fclose(joueur.fichier_achat_bien_consomation);
        joueur.fichier_production=fopen("fichier_production3.txt","a+");
        fclose(joueur.fichier_production);
        joueur.fichier_carte_vie=fopen("fichier_carte_vie3.txt","a+");
        fclose(joueur.fichier_carte_vie);
        joueur.fichier_vente_internet=fopen("fichier_vente_internet3.txt","a+");
        fclose(joueur.fichier_vente_internet);
        joueur.fichier_vente_credit=fopen("fichier_vente_credit3.txt","a+");
        fclose(joueur.fichier_vente_credit);
        joueur.fichier_vente_matiere_premiere=fopen("fichier_vente_matiere_premiere3.txt","a+");
        fclose(joueur.fichier_vente_matiere_premiere);
        joueur.fichier_compte=fopen("fichier_compte3.txt","a+");
        fclose(joueur.fichier_compte);
        joueur.fichier_caisse=fopen("fichier_caisse3.txt","a+");
        fclose(joueur.fichier_caisse);
        joueur.fichier_achat_matiere_premiere=fopen("fichier_achat_matiere_premiere3.txt","a+");
        fclose(joueur.fichier_achat_matiere_premiere);
    joueur.nom_fichier_achat_bien_consomation="fichier_achat_bien_consomation.txt";
    joueur.nom_fichier_production="fichier_production3.txt";
    joueur.nom_fichier_carte_vie="fichier_carte_vie3.txt";
    joueur.nom_fichier_vente_internet="fichier_vente_internet3.txt";
    joueur.nom_fichier_vente_credit="fichier_vente_credit3.txt";
    joueur.nom_fichier_vente_matiere_premiere="fichier_vente_matiere_premiere3.txt";
    joueur.nom_fichier_compte="fichier_compte3.txt";
    joueur.nom_fichier_caisse="fichier_caisse3.txt";
    joueur.nom_fichier_achat_matiere_premiere="fichier_achat_matiere_premiere3.txt";
    }
    else{
    if(fgetc(fichier_inscription_joueur)==EOF)
        printf("desole, pas de place disponible pour jouer \n!");
        joueur.num_joueur=0;
    }
    }
    }
    fclose(fichier_inscription_joueur);
    return joueur;
}
