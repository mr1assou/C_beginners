#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int annee;
    int mois;
    int jours;
}date_naissance;
typedef struct{
    char nom[30];
    char prenom[40];
    int num;
    date_naissance date;
}personne;
int main()
{
    personne T[3];
    int i;
    for(i=0;i<3;i++){
        printf("remplir les informations de la personne %d:\n",i+1);
        printf("------------------\n");
        printf("saisir un nom\n");
        scanf("%s",T[i].nom);
        printf("saisir un prenom\n");
        scanf("%s",T[i].prenom);
        printf("saisir votre numero de telephone\n");
        scanf("%d",&T[i].num);
        printf("saisir annee\n");
        scanf("%d",&T[i].date.annee);
        printf("saisir mois\n");
        scanf("%d",&T[i].date.mois);
        printf("saisir jours\n");
        scanf("%d",&T[i].date.jours);
    }
    for(i=0;i<3;i++){
        printf("%s : %s : %d : %d/%d/%d\n",T[i].nom,T[i].prenom,T[i].num,T[i].date.annee,T[i].date.mois,T[i].date.jours);
    }
}

