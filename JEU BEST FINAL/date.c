#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include"structures.h"
#include"fonctions.h"

type_date calculer_date(type_joueur joueur)
{
    type_date date;
    date.num_jour=joueur.num_jour;

    if(date.num_jour==1 || date.num_jour==8 || date.num_jour==15 || date.num_jour==22 || date.num_jour==29)
        date.jour="jeudi";
    if(date.num_jour==2 || date.num_jour==9 || date.num_jour==16 || date.num_jour==23)
        date.jour="vendredi";
    if(date.num_jour==3 || date.num_jour==10 || date.num_jour==17 || date.num_jour==24)
        date.jour="samedi";
    if(date.num_jour==4 || date.num_jour==11 || date.num_jour==18 || date.num_jour==25)
        date.jour="dimanche";
    if(date.num_jour==5 || date.num_jour==12 || date.num_jour==19 || date.num_jour==26)
        date.jour="lundi";
    if(date.num_jour==6 || date.num_jour==13 || date.num_jour==20 || date.num_jour==27)
        date.jour="mardi";
    if(date.num_jour==7 || date.num_jour==14 || date.num_jour==21 || date.num_jour==28)
        date.jour="mercredi";
return date;
}

void Afficher_date(type_joueur joueur)
{
    type_date date;
    date=calculer_date(joueur);
    printf("bonjour !");
    printf("Nous sommes le %s %d Fevrier 2016.\n",date.jour,date.num_jour);
}
