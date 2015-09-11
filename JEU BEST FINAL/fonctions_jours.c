#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"

type_joueur maj_stock(type_joueur joueur)
{
    int qte;
    printf("Vous avez %d unites de matiere premiere.\nCombien voulez-vous utiliser pour la production de votre produit?\n",joueur.qte_mp);
    scanf("%d",&qte);
    while(qte>joueur.qte_mp)
    {
        printf("Erreur. Entrez de nouveau la quantite de matiere premiere a utiliser en production: ");
        scanf("%d",&qte);
    }
    joueur.qte_mp=joueur.qte_mp-qte;
    joueur.qte_produit=joueur.qte_produit+qte;
    printf("Votre nouveau stock de matiere premiere est de %d unites.\n",joueur.qte_mp);
    printf("Votre nouveau stock de produits est de %d unites.\n",joueur.qte_produit);

    return joueur;
}

type_joueur vente_internet(type_joueur joueur)
{
    printf("Vente sur internet: \nVous avez %d unites de produit.\n",joueur.qte_produit);
    joueur.qte_vente_internet=generateur_nbr_aleatoire(0,joueur.qte_produit);
    if(joueur.qte_vente_internet!=0)
    {
        joueur.qte_produit=joueur.qte_produit-joueur.qte_vente_internet;
        joueur.compte.solde=joueur.compte.solde+(joueur.qte_vente_internet*100);
        printf("Vous avez vendu %d unites de produit sur internet.\n",joueur.qte_vente_internet);
        printf("Votre stock de produits est de %d unites.\nVotre solde en banque est de %dDhs.\n",joueur.qte_produit,joueur.compte.solde);
    }
    else
        printf("Pas de vente sur internet!\n");
    return joueur;
}

type_joueur vente_credit(type_joueur joueur)
{
    printf("Vente a credit: \nVous avez %d unites de produit.\n",joueur.qte_produit);
    joueur.qte_vente_credit=generateur_nbr_aleatoire(0,joueur.qte_produit);
    if(joueur.qte_vente_credit!=0)
    {
        printf("%d unites de produits vont etre vendus a credit selon le modele de la roue.\n",joueur.qte_vente_credit);
        joueur=roue(joueur,joueur.qte_vente_credit*120);
        joueur.qte_produit=joueur.qte_produit-joueur.qte_vente_credit;
    }
    else
        printf("Pas de vente a credit!\n");
    return joueur;
}

type_joueur planification(type_joueur joueur)
{
    int n=0;
    printf("Vous disposez de %dDhs dans votre compte, comment voulez vous utiliser cet argent ? \n",joueur.compte.solde);
    printf("Entrez la somme que vous voulez placer en 'Affaire': ");
    scanf("%d",&n);
    while(joueur.compte.solde<n)
    {
        printf("Erreur. Entrez de nouveau la somme que vous voulez placer en 'Affaire': ");
        scanf("%d",&n);
    }
    joueur.caisse.affaire=n;
    joueur.compte.solde-=n;
    printf("Entrez la somme que vous voulez placer en 'Depenses': ");
    scanf("%d",&n);
    while(joueur.compte.solde<n)
    {
        printf("Erreur. Entrez de nouveau la somme que vous voulez placer en 'Depenses': ");
        scanf("%d",&n);
    }
    joueur.caisse.depense=n;
    joueur.compte.solde-=n;
    joueur.caisse.economie=joueur.compte.solde;
    joueur.compte.solde=0;
    joueur.somme_affaires+=joueur.caisse.affaire;
    joueur.somme_depenses+=joueur.caisse.depense;
    joueur.somme_economie+=joueur.caisse.economie;
    printf("La somme placee en 'Economie' est donc: %d\n",joueur.caisse.economie);
    return joueur;
}

type_joueur achat_matiere_premiere(type_joueur joueur)
{
    int qte;
    printf("Vous disposez de %d dans 'Affaires'.\n",joueur.caisse.affaire);
    printf("Vous pouvez acheter de la matiere premiere a %d Dhs.\n",prix_mp);
    qte=joueur.caisse.affaire/prix_mp;
    joueur.qte_mp+=qte;
    joueur.caisse.affaire=joueur.caisse.affaire-(qte*prix_mp);
    printf("La quantite de matiere premiere achetee est: %d\n",qte);
    printf("Le reste dans 'Affaire' est: %d Dhs.\n",joueur.caisse.affaire);
    return joueur;
}

void afficher_produits(produit *T)
{
    int i;
    printf("Voici les produits disponibles au Supermarche: \n");
    for(i=0;i<N;i++)
    {
        printf("Code du produit: %d\n",T[i].code_produit);
        printf("Nom du produit: %s\n",T[i].nom_produit);
        printf("Type du produit: %s\n",T[i].type_produit);
        printf("Prix produit: %d\n",T[i].prix_produit);
        printf("**************************************************\n");
    }
}

type_joueur achat_produit(type_joueur joueur,produit *T,int code,int qte)
{
    enr_achat_bien_consomation enregistrement;
    enregistrement.code_produit=code;
    enregistrement.nom_produit=T[code].nom_produit;
    enregistrement.qte=qte;
    enregistrement.prix_total=T[code].prix_produit*qte;
    enregistrement.date=calculer_date(joueur);
    if(enregistrement.prix_total>joueur.caisse.depense)
    {
        printf("Argent insuffisant.\n");
    }
    else
    {
    joueur.caisse.depense=joueur.caisse.depense-enregistrement.prix_total;
    enregistrer_achat_bien_consomation(joueur,enregistrement);
    printf("Achat effectué \n");
    }
    return joueur;
}

type_joueur Achat_Supermarche_Clara(type_joueur joueur,produit *T)
{
    int n,i;
    int code;
    int qte;
    printf("Bienvenue au Supermarché de Clara !! \n");
    afficher_produits(T);
    while(joueur.caisse.depense>T[0].prix_produit || joueur.caisse.depense>T[1].prix_produit ||joueur.caisse.depense>T[2].prix_produit ||joueur.caisse.depense>T[3].prix_produit ||joueur.caisse.depense>T[4].prix_produit ||joueur.caisse.depense>T[5].prix_produit ||joueur.caisse.depense>T[6].prix_produit ||joueur.caisse.depense>T[7].prix_produit ||joueur.caisse.depense>T[8].prix_produit ||joueur.caisse.depense>T[9].prix_produit)
    {
        printf("Vous pouvez encore acheter : \n");
        for(i=0;i<N;i++)
    {
        n=joueur.caisse.depense/T[i].prix_produit;
        printf(" %d  %s de code %d\n",n,T[i].nom_produit,T[i].code_produit);

    }
    printf("Entrez le code du produit que vous voulez acheter : ");
    scanf("%d",&code);
    printf("Entrez la quantité du produit que vous voulez acheter : ");
    scanf("%d",&qte);
    joueur=achat_produit(joueur,T,code,qte);
    }
    return joueur;
}
