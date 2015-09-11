#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"

void enregistrer_achat_bien_consomation(type_joueur joueur,enr_achat_bien_consomation enr)
{
    FILE* fichier=fopen(joueur.nom_fichier_achat_bien_consomation,"a+");
    enr.date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d, vous avez achete %d unites de %s a %d\n",enr.date.jour,enr.date.num_jour,enr.qte,enr.nom_produit,enr.prix_total);
    fclose(fichier);
}

void enregistrer_production(type_joueur joueur)
{
    FILE* fichier=fopen(joueur.nom_fichier_production,"a+");
    type_date date;
    date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d vous avez produit %d unites\n",date.jour,date.num_jour,joueur.qte_produit);
    fclose(fichier);
}

void enregister_ventes_internet(type_joueur joueur)
{
    FILE* fichier=fopen(joueur.nom_fichier_vente_internet,"a+");
    enr_achats_ventes enr;
    enr.qte=joueur.qte_vente_internet;
    enr.prix_total=joueur.qte_vente_internet*100;
    enr.date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d, vous avez vendu %d unites sur Internet à %d\n",enr.date.jour,enr.date.num_jour,enr.qte,enr.prix_total);
    fclose(fichier);
}

void enregistrer_ventes_credit(type_joueur joueur,char* option_vente)
{
    FILE* fichier=fopen(joueur.nom_fichier_vente_credit,"a+");
    enr_ventes_credit enr;
    enr.qte=joueur.qte_vente_credit;
    enr.prix_total=joueur.qte_vente_credit*100;
    enr.date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d, vous avez vendu %d unites a credit a %d, avec l option %s\n",enr.date.jour,enr.date.num_jour,enr.qte,enr.prix_total,option_vente);
    fclose(fichier);
}

void enregistrer_achat_matiere_premiere(type_joueur joueur)
{
    FILE* fichier=fopen(joueur.nom_fichier_achat_matiere_premiere,"a+");
    enr_achats_ventes enr;
    enr.qte=joueur.qte_mp;
    enr.prix_total=joueur.qte_vente_credit*40;
    enr.date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d, vous avez achete %d unites de mp a %d\n",enr.date.jour,enr.date.num_jour,enr.qte,enr.prix_total);
    fclose(fichier);
}

void enregistrer_caisse(type_joueur joueur)
{
    FILE* fichier=fopen(joueur.nom_fichier_caisse,"a+");
    enr_caisse enr;
    enr.caisse=joueur.caisse;
    enr.date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d, l etat de votre caisse: Affaire: %d Depenses: %d Economie: %d\n",enr.date.jour,enr.date.num_jour,enr.caisse.affaire,enr.caisse.depense,enr.caisse.economie);
    fclose(fichier);
}

void enregistrer_compte(type_joueur joueur)
{
    FILE* fichier=fopen(joueur.nom_fichier_compte,"a+");
    enr_compte enr;
    enr.compte=joueur.compte;
    enr.date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d, l etat de votre compte est: %d\n",enr.date.jour,enr.date.num_jour,enr.compte.solde);
    fclose(fichier);
}

void enregistrer_carte_vie(type_joueur joueur,char* carte)
{
    FILE* fichier=fopen(joueur.nom_fichier_carte_vie,"a+");
    type_date date=calculer_date(joueur);
    fprintf(fichier,"Le %s %d, vous avez recu une carte de vie: %s",date.jour,date.num_jour,carte);
    fclose(fichier);
}
