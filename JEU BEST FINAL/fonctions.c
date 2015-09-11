#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"

void Reposez_vous(int i)    /*Pause l'application pour i seconds*/
{
    clock_t start,end;
    start=clock();
    while(((end=clock())-start)<=i*CLOCKS_PER_SEC);
}

double generateur_nbr_aleatoire (int borne_min, int borne_max)
{
srand (time (NULL));
return ( rand()%(borne_max-borne_min+1) + borne_min);
}

type_joueur roue(type_joueur joueur,int paiement)
{
    int de;
    printf("Lancement du de:\n");
    de=generateur_nbr_aleatoire(1,6);
    while(de==6)
    {
    printf("La valeur obtenue est 6, relancement du de.\n");
    de=generateur_nbr_aleatoire(1,6);
    }
    printf("La valeur obtenue est: %d\n",de);
    switch(de)
    {
        case 1: {printf("La totalité est payee ce Jeudi\n");
                 joueur.paiement_differe[0].active=1;
                 joueur.paiement_differe[0].somme=paiement;
                 joueur.paiement_differe[0].option_paiement="Totalite ce jeudi";
                 joueur.paiement_differe[0].num_enregistrement=joueur.num_jour+1;
                 break;
                }
        case 2: {printf("Seulement la moitie est payee a la fin de la semaine\n");
                 joueur.paiement_differe[1].active=1;
                 joueur.paiement_differe[1].somme=paiement/2;
                 joueur.paiement_differe[1].option_paiement="Moitie en fin de semaine";
                 joueur.paiement_differe[1].num_enregistrement=joueur.num_jour+4;
                break;
                }
        case 3: {printf("La totalite est payee a la fin du mois\n");
                 joueur.paiement_differe[2].active=1;
                 joueur.paiement_differe[2].somme+=paiement;
                 joueur.paiement_differe[2].option_paiement="Totalite en fin du mois";
                 joueur.paiement_differe[2].num_enregistrement=29;
                 break;
                }
        case 4: {printf("La moitie est payee ce Jeudi\n");
                 joueur.paiement_differe[3].active=1;
                 joueur.paiement_differe[3].somme=paiement/2;
                 joueur.paiement_differe[3].option_paiement="Moitie ce jeudi";
                 joueur.paiement_differe[3].num_enregistrement=joueur.num_jour+1;
                break;
                }
        case 5: {printf("Pas de paiement !!\n");
                break;
                }
     }
     return joueur;
}

type_joueur paiement(type_joueur joueur,int somme)
{
    int qte;
    int epargne=joueur.caisse.affaire+joueur.caisse.depense+joueur.caisse.economie;
    joueur.caisse.affaire=0;
    joueur.caisse.depense=0;
    while((somme>epargne) && (joueur.joue_encore==1))
        {
            printf("L'argent en caisse est insuffisant pour payer les frais.\n");
            if(joueur.qte_mp==0)
            {
                printf("Vous n'avez plus de matiere permiere a vendre dans votre stock.\n Vous avez perdu !! \n");
                joueur.joue_encore=0;
            }
            else
                {
                    printf("Vous avez encore de la matiere premiere dans votre stock. \nCombien voulez-vous vendre a 'CHez Henry le Grossiste' a 20dhs ?\n");
                    scanf("%d",&qte);
                    while(qte>joueur.qte_mp)
                        {
                            printf("Erreur. Entrez un nouveau nombre\n");
                            scanf("%d",&qte);
                        }
                    joueur.qte_mp=joueur.qte_mp-qte;
                    epargne=epargne+qte*20;
                }

        }
    epargne=epargne-somme;
    joueur.caisse.economie=epargne;
    if(joueur.joue_encore==1)
        printf("Paiement effectue avec succes.\nVotre solde en 'Economie est %d.\n",joueur.caisse.economie);
     return joueur;
}

type_joueur carte_de_vie(type_joueur joueur)
{
    int num=0;
    int gain=0;
    int perte=0;
    char* carte;
    num=generateur_nbr_aleatoire(1,9);
    switch(num)
    {
    case 1: { perte=30;
              printf("Vous avez des impots a payer. Les frais sont de %d\n",perte);
              carte="Vous avez des impots a payer. Les frais sont de 30";
                enregistrer_carte_vie( joueur, carte);

              break;
            }

    case 2: { printf("Felicitations !! Vous avez gagne au loto. Vous recevez 100Dhs.\n");
                carte="Felicitations !! Vous avez gagne au loto. Vous recevez 100Dhs.";
                enregistrer_carte_vie( joueur, carte);
              gain=100;
              break;
            }

    case 3: { printf("Vous avez ete victime d'un cambriolage. Vous perdez toutes vos economies. \n");
                carte="Vous avez ete victime d'un cambriolage. Vous perdez toutes vos economies.";
              enregistrer_carte_vie( joueur, carte);
              joueur.caisse.economie=0;
              break;
            }

    case 4: { printf("Payez les frais de scolarite de votre enfant qui s'elevent a 20Dhs. \n");
                carte="Payez les frais de scolarite de votre enfant qui s'elevent a 20Dhs.";
              enregistrer_carte_vie( joueur, carte);
              perte=20;
              break;
            }

    case 5: { printf("Vous avez recu une subvention du gouvernement. Vous recevez 50Dhs. \n");
                carte="Vous avez recu une subvention du gouvernement. Vous recevez 50Dhs";
              enregistrer_carte_vie( joueur, carte);
              gain=50;
              break;
            }
    case 6: { printf("Pour votre fidelite, votre fournisseur 'Chez Harry le Grossiste' vous offre un cheque de 30Dhs. \n");
                carte="Pour votre fidelite, votre fournisseur 'Chez Harry le Grossiste' vous offre un cheque de 30Dhs.";
              enregistrer_carte_vie( joueur, carte);
              gain=30;
              break;
            }

    case 7: { printf("Votre enfant est malade. Payez les frais du docteur: %d \n",perte);
                carte="Votre enfant est malade. Payez les frais du docteur:50";
                              enregistrer_carte_vie( joueur, carte);

              perte=50;
              break;
            }

    case 8: { printf("Votre ami vous paie enfin ses dettes. Vous recevez 30Dhs\n");
                carte="Votre ami vous paie enfin ses dettes. Vous recevez 30Dhs";
                              enregistrer_carte_vie( joueur, carte);

              gain=30;
              break;
            }

    case 9: { printf("Votre site internet a besoin d'une maintenance. Vous devez payer 10Dhs. \n");
                carte="Votre site internet a besoin d'une maintenance. Vous devez payer 10Dhs.";
                              enregistrer_carte_vie( joueur, carte);

              perte=10;
              break;
            }
    }
    if(gain!=0)
        joueur.compte.solde=joueur.compte.solde+gain;
    if(perte!=0)
        joueur=paiement(joueur,perte);

        return joueur;
}
