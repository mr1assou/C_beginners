#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int annee;
    int mois;
    int jours;
}date_naiss;
typedef struct{
    char nom[30];
    char prenom[35];
    date_naiss date;
}stagaire;
int main(){
    stagaire st;
    printf("veuillez saisir un nom\n");
    scanf("%s",st.nom);
    printf("veuillez saisir un prenom\n");
    scanf("%s",st.prenom);
    printf("veuillez saisir la date de naissance\n");
    printf("saisir annee\n");
    scanf("%d",&st.date.annee);
    printf("saisir mois\n");
    scanf("%d",&st.date.mois);
    printf("saisir jours\n");
    scanf("%d",&st.date.jours);
    printf("nom et prenom de stagaire:%s %s \nla date de naissance:%d/%d/%d",st.nom,st.prenom,st.date.annee,st.date.mois,st.date.jours);
}

