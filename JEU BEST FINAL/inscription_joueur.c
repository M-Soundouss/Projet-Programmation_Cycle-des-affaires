#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"

type_joueur inscription_joueur(type_joueur joueur)
{
    int i;
    FILE* fichier_inscription_joueur=fopen("fichier_inscription_joueur.txt","a+");

    if(fgetc(fichier_inscription_joueur)==EOF)
    {
        printf("Vous etes le joueur numero 1:\n");
        fputc('a',fichier_inscription_joueur);

        /*initialisation des variables de la struucture joueur et creation des fichiers */

        joueur.num_joueur=1;
        joueur.num_jour=1;
        joueur.joue_encore=1;
        joueur.qte_mp=0;
        joueur.qte_produit=0;
        joueur.qte_vente_internet=0;
        joueur.qte_vente_credit=0;
        joueur.caisse.affaire=0;
        joueur.caisse.depense=0;
        joueur.caisse.economie=0;
        joueur.compte.solde=0;
        joueur.somme_affaires=0;
        joueur.somme_depenses=0;
        joueur.somme_economie=0;
        for(i=0;i<4;i++)
        {
            joueur.paiement_differe[i].active=0;
            joueur.paiement_differe[i].somme=0;
            joueur.paiement_differe[i].num_enregistrement=0;
        }
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
    joueur.nom_fichier_achat_bien_consomation="fichier_achat_bien_consomation1.txt";
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
        printf("Vous etes le joueur numero 2:\n");
        fputc('a',fichier_inscription_joueur);
        /*initialisation des variables de la struucture joueur et creation des fichiers */

        joueur.num_joueur=2;
        joueur.num_jour=1;
        joueur.joue_encore=1;
        joueur.qte_mp=0;
        joueur.qte_produit=0;
        joueur.qte_vente_internet=0;
        joueur.qte_vente_credit=0;
        joueur.caisse.affaire=0;
        joueur.caisse.depense=0;
        joueur.caisse.economie=0;
        joueur.compte.solde=0;
        for(i=0;i<4;i++)
        {
            joueur.paiement_differe[i].active=0;
            joueur.paiement_differe[i].somme=0;
            joueur.paiement_differe[i].num_enregistrement=0;
        }
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
    joueur.nom_fichier_achat_bien_consomation="fichier_achat_bien_consomation2.txt";
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
        printf("Vous etes le joueur numero 3:\n");
        fputc('a',fichier_inscription_joueur);
        /*initialisation des variables de la struucture joueur et creation des fichiers */

        joueur.num_joueur=3;
        joueur.num_jour=1;
        joueur.joue_encore=1;
        joueur.qte_mp=0;
        joueur.qte_produit=0;
        joueur.qte_vente_internet=0;
        joueur.qte_vente_credit=0;
        joueur.caisse.affaire=0;
        joueur.caisse.depense=0;
        joueur.caisse.economie=0;
        joueur.compte.solde=0;
        for(i=0;i<4;i++)
        {
            joueur.paiement_differe[i].active=0;
            joueur.paiement_differe[i].somme=0;
            joueur.paiement_differe[i].num_enregistrement=0;
        }
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
    joueur.nom_fichier_achat_bien_consomation="fichier_achat_bien_consomation3.txt";
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

void profil_joueur(type_joueur joueur)
{
    int somme_depenses=joueur.somme_depenses;
    int somme_affaires=joueur.somme_affaires;
    int somme_economie=joueur.somme_economie;
    int somme=somme_depenses+somme_affaires+somme_economie;
    if(somme_depenses*100/somme<20 && somme_economie*100/somme>20 && somme_economie*100/somme<35)
    {
        printf("Votre profil correspond à celui de SIMONE la sage:\n\t-Veut developper son commerce.\n\t-Pense qu'il est important d'economiser.\n\tFait attention a ne pas depenser plus que ce que son commerce lui permet.\n");
    }
    else if(somme_economie*100/somme>60 )
    {
        printf("Votre profil correspond à celui de LOUIS l'econome:\n\t-Adore economiser.\n\t-Depense aussi peu que possible.\n");
}
else if(somme_depenses*100/somme>60 )
    {
        printf("Votre profil correspond à celui de DIDI la depensière:\n\t-Adore depenser pour elle meme.\n\t-Pense qu'economiser est une perte d'energie.\n\tSon affaire doit lui rapporter autant que possible.\n");
    }
else if(somme_affaires*100/somme>80)
    {
        printf("Votre profil correspond à celui de AMINA l'affairiste:\n\t-N'economise pas.\n\t-Adore les affaires.\n\tOublie les dépenses de sa famille.\n");
    }
    else{
        printf("Votre profil ne correspond à aucun des profil docummentes");

    }
}

