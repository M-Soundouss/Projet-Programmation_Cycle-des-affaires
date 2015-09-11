#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"

int main()
{
    type_joueur joueur;
    int n=0;
    char ch;
    while(n!=3)
   {
            printf("\t\t\t*************************************\n\t\t\t\tBienvenue au jeu BEST\n\t\t\t*************************************\n\n\t\t\tMenu Principal:\n\t\t\t\n\t\t\t1-Instructions.\n\t\t\t2-Jouer.\n\t\t\t3-Quitter. \n");
            scanf("%d",&n);
            if(n==2)
            {
                joueur=inscription_joueur(joueur);
                while(joueur.num_jour<30 && joueur.joue_encore==1)
                {
                    joueur=jeudi(joueur);
                    if(joueur.num_jour!=29)
                    {
                        joueur=vendredi(joueur);
                        joueur=samedi(joueur);
                        joueur=dimanche(joueur);
                        joueur=lundi(joueur);
                        joueur=mardi(joueur);
                        joueur=mercredi(joueur);
                    }

                }
                if(joueur.num_joueur==1 || joueur.num_joueur==2 || joueur.num_joueur==3)
                {
                    printf("Voici l'historique de toutes les operations du jeu:\n");
                    afficher_bilan(joueur);
                }
                getchar();
                printf("Appuiez sur une touche pour continuer : \n");
                scanf("%c",&ch);
            }
            if(n==1)
            {
                printf("Au debut du mois, la banque leur accorde une somme qui doit etre remboursee avec interet a la fin du mois \nPendant le mois les entrepreneurs doivent diriger leur entreprise tout en payant les frais personnels encourus par leur famille respective biens de consommation personnelle et en epargnant un peu d argent pour les  imprevus carte de vie \nA la fin du mois, les entrepreneurs doivent rembourser leur pret et avoir fait un bon bénéfice. \nLe cycle des affaires est represente sur 4 semaines ou les activites sont organisées par jour, comme suit \nLundi  Achat des biens de consommation personnelle \nMardi Mise a jour de leur stock  Tirage de la carte de vie imprevus et Paiement de Loyer \nMercredi  Options de vente Tirage d un nombre aleatoire entre 0 et 1000 pour decouvrir le nombre de produits vendus sur internet a 100 dhs \nVente a credit de quelques produits a 120 dhs 0 a 700 en utilisant la roue generation aleatoire pour savoir quand et combien l entrepreneur sera paye. \nJeudi  Enregistrement des ventes \nVendredi  Planification des achats depenses et Economies \nSamedi  Achat et enregistrement des achats \nDimanche  Repos\n");
                getchar();
                printf("Appuiez sur une touche pour continuer : \n");
                scanf("%c",&ch);
            }

            if(n==3)
            {
                break;

            }
   }
    return 0;
}
