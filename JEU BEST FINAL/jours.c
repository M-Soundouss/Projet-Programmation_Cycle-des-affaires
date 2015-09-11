#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"

type_joueur jeudi(type_joueur joueur)
{
    int i;
    clock_t t;
    t = clock();
    if(joueur.joue_encore==1)
    {
    Afficher_date(joueur);
    if(joueur.num_jour==1)
    {
        joueur.compte.solde=200;
        printf("Vous avez recu un credit de 200 de la part de votre banque. \n");
    }
    if(joueur.num_jour==8 || joueur.num_jour==15 || joueur.num_jour==22 || joueur.num_jour==29)
    {
        printf("Enregistrement de vos ventes: \n");
        enregister_ventes_internet(joueur);
        for(i=0;i<4;i++)
        {
            if(joueur.num_jour==joueur.paiement_differe[i].num_enregistrement)
                enregistrer_ventes_credit(joueur,joueur.paiement_differe[i].option_paiement);
        }
        if(joueur.paiement_differe[0].active==1)
        {
            joueur.compte.solde+=joueur.paiement_differe[0].somme;
            joueur.paiement_differe[0].somme=0;
            joueur.paiement_differe[0].active=0;
        }
        if(joueur.paiement_differe[3].active==1)
        {
            joueur.compte.solde+=joueur.paiement_differe[3].somme;
            joueur.paiement_differe[3].somme=0;
            joueur.paiement_differe[3].active=0;
        }
    }
    if(joueur.num_jour==29)
    {
        for(i=0;i<4;i++)
        {
            if(joueur.num_jour==joueur.paiement_differe[i].num_enregistrement)
                enregistrer_ventes_credit(joueur,joueur.paiement_differe[i].option_paiement);
        }
        if(joueur.paiement_differe[2].active==1)
        {
            joueur.compte.solde+=joueur.paiement_differe[2].somme;
            joueur.paiement_differe[2].somme=0;
            joueur.paiement_differe[2].active=0;
        }
    printf("Fin du mois !! \n Vous devez rembourser la banque 250Dhs.\n");
    paiement(joueur,250);
    }
joueur.compte.solde=joueur.compte.solde+joueur.caisse.affaire+joueur.caisse.depense+joueur.caisse.economie;
joueur.caisse.affaire=0;
joueur.caisse.depense=0;
joueur.caisse.economie=0;
enregistrer_compte(joueur);
joueur.num_jour+=1;
while(((float)clock()-(float)t)/CLOCKS_PER_SEC<10){}
printf("Fin de journee. A bientot !!\n\n\n");
    }
return joueur;
}

type_joueur vendredi(type_joueur joueur)
{
    clock_t t;
    t = clock();
    if(joueur.joue_encore==1)
    {
    Afficher_date(joueur);
    if(joueur.num_jour==2 || joueur.num_jour==9 || joueur.num_jour==16 || joueur.num_jour==23 )
    joueur=planification(joueur);
    enregistrer_caisse(joueur);
    joueur.num_jour+=1;
    while(((float)clock()-(float)t)/CLOCKS_PER_SEC<10){}
    printf("Fin de journee. A bientot !!\n\n\n");
    }
    return joueur;
}

type_joueur samedi(type_joueur joueur)
{
    clock_t t;
    t = clock();
    if(joueur.joue_encore==1)
    {
    Afficher_date(joueur);
    if(joueur.num_jour==3 || joueur.num_jour==10 || joueur.num_jour==17 || joueur.num_jour==24 )
    joueur=achat_matiere_premiere(joueur);
    enregistrer_achat_matiere_premiere(joueur);
    joueur.num_jour++;

    printf("Fin de journee. A bientot !!\n\n\n");
    }
    while(((float)clock()-(float)t)/CLOCKS_PER_SEC<10){}
    return joueur;
}

type_joueur dimanche(type_joueur joueur)
{
    clock_t t;
    t = clock();
    int i;
    if(joueur.joue_encore==1)
    {
    Afficher_date(joueur);
    if(joueur.num_jour==4 || joueur.num_jour==11 || joueur.num_jour==18 || joueur.num_jour==25 )
    {
    for(i=0;i<4;i++)
        {
            if(joueur.num_jour==joueur.paiement_differe[i].num_enregistrement)
            enregistrer_ventes_credit(joueur,joueur.paiement_differe[i].option_paiement);
        }
    if(joueur.paiement_differe[1].active==1)
        {
            joueur.compte.solde+=joueur.paiement_differe[1].somme;
            joueur.paiement_differe[1].somme=0;
            joueur.paiement_differe[1].active=0;
        }
    printf("\n");
    printf("Vous n'avez aucune tache a effectuer aujourd'hui.\n Reposez_vous donc !! \n");
    joueur.num_jour++;
    while(((float)clock()-(float)t)/CLOCKS_PER_SEC<10){}
    printf("Fin de journee. A bientot !!\n\n\n");
    }
    }
    return joueur;
}

type_joueur lundi(type_joueur joueur)
{
    produit  Supermarche_Clara[10]={{0,"Lait","Nourriture",4},{1,"Pain","Nourriture",2},{2,"Eau","Nourriture",5},{3,"Fruits","Nourriture",10},{4,"Legumes","Nourriture",7},
{5,"Viande","Nourriture",15},{6,"Friandises","Luxe",6},{7,"Vetements","Luxe",100},{8,"Lunettes de soleil","Luxe",50},{9,"Jouet","Luxe",30}};
    clock_t t;
    t = clock();
    if(joueur.joue_encore==1)
    {
    Afficher_date(joueur);
    if(joueur.num_jour==5 || joueur.num_jour==12 || joueur.num_jour==19 || joueur.num_jour==26 )
    {
    printf("Vous disposez de %d Dhs en depenses.\n",joueur.caisse.depense);
    joueur=Achat_Supermarche_Clara(joueur,Supermarche_Clara);
    joueur.num_jour++;
    while(((float)clock()-(float)t)/CLOCKS_PER_SEC<10){}
    printf("Fin de journee. A bientot !!\n\n\n");
    }
    }
    return joueur;
}

type_joueur mardi(type_joueur joueur)
{
    clock_t t;
    t = clock();
    if(joueur.joue_encore==1)
    {
    Afficher_date(joueur);
    if(joueur.num_jour==6 || joueur.num_jour==13 || joueur.num_jour==20 || joueur.num_jour==27 )
    {
    printf("Mise a jour du stock\n");
    joueur=maj_stock(joueur);
    printf("Tirage de la carte de vie\n");
    joueur=carte_de_vie(joueur);
    if(joueur.num_jour==27)
        {
            printf("Vous devez payer le loyez. \n");
            joueur=paiement(joueur,100);
        }
    enregistrer_production(joueur);
    joueur.num_jour++;
    while(((float)clock()-(float)t)/CLOCKS_PER_SEC<10){}
    printf("Fin de journee. A bientot !!\n\n\n");
    }
    }
    return joueur;
}

type_joueur mercredi(type_joueur joueur)
{
    clock_t t;
    t = clock();
    if(joueur.joue_encore==1)
    {
    Afficher_date(joueur);
    if(joueur.num_jour==7 || joueur.num_jour==14 || joueur.num_jour==21 || joueur.num_jour==28 )
    {
        joueur=vente_internet(joueur);
        joueur=vente_credit(joueur);
        joueur.num_jour++;
        while(((float)clock()-(float)t)/CLOCKS_PER_SEC<10){}
        printf("Fin de journee. A bientot !!\n\n\n");
    }
    }
        return joueur;
}
