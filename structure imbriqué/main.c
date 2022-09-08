#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int annee;
    int mois;
    int jours;
}date_naissance;
typedef struct{
    char nom[30];
    char prenom[30];
    int age;
    int num;
    date_naissance date;
}personne;
int main()
{
    personne p1;
    printf("saisir votre nom\n");
    scanf("%s",p1.nom);
    printf("saisir votre prenom\n");
    scanf("%s",p1.prenom);
    printf("saisir votre age\n");
    scanf("%d",&p1.age);
    printf("saisir votre numero de telephone\n");
    scanf("%d",&p1.num);
    printf("veuillez saisir la date de naissance:\n");
    printf("saisir votre annee\n");
    scanf("%d",&p1.date.annee);
    printf("saisir votre mois\n");
    scanf("%d",&p1.date.mois);
    printf("saisir votre jours\n");
    scanf("%d",&p1.date.jours);
    printf("%s : %s : %d : %d : %d/%d/%d",p1.nom,p1.prenom,p1.age,p1.num,p1.date.annee,p1.date.mois,p1.date.jours);
}


