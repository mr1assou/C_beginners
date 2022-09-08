#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    int annee;
    int mois;
    int jours;
}date_pro;
typedef struct{
char titre[30];
char aut1[30];
char aut2[30];
char aut3[30];
char type[30];
int coderef;
date_pro date;
}production;
void affichage(production T[],int n){
    int i;
    printf("les informations des production sont:\n");
    for(i=0;i<n;i++){
        printf("titre:%s\n",T[i].titre);
        printf("auteur principale:%s\n",T[i].aut1);
        printf("directeur de la these:%s\n",T[i].aut2);
        printf("encadrant:%s\n",T[i].aut3);
        printf("le type:%s\n",T[i].type);
        printf("la date de production:%d/%d/%d\n",T[i].date.annee,T[i].date.mois,T[i].date.jours);
        printf("************************\n");
    }
}
void nombreproduction(production T[],int n){
    int i,nbr,cmp,nos;
    nbr=0;
    cmp=0;
    nos=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].type,"communication")==0)
            cmp++;
        if(strcmp(T[i].type,"these")==0)
            nbr++;
        if(strcmp(T[i].type,"publication")==0)
            nos++;
    }
    printf("le nombre du production de type 'communication' est:%d\n",cmp);
    printf("le nombre du production de type 'these' est:%d\n",nbr);
    printf("le nombre du production de type 'publication' est:%d\n",nos);
}
void rechtype(int n,char Ti[],production T[],production tab[]){
    int i,cmp;
    printf("****************************\n");
    printf("le type specifie que vous voulez 'communication' ou 'publication' ou 'these':\n");
    scanf("%s",Ti);
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].type,Ti)==0){
                    tab[cmp]=T[i];
                    cmp++;
        }
    }
    printf("les productions qui ont le meme type specifie sont:\n");
    for(i=0;i<cmp;i++)
        printf("production:%s\n",tab[i].titre);
}
void suppprod(int n,char Tu[],production T[]){
    int i,j,cmp;
    printf("*****************************\n");
    printf("saisir le nom de l'auteur que vous voulez supprimer:\n");
    scanf("%s",Tu);
    T[n].coderef=8763873;
    T[n].date.annee=8335;
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].aut1,Tu)==0 || strcmp(T[i].aut2,Tu)==0 || strcmp(T[i].aut3,Tu)==0){
            for(j=i;j<n;j++)
                T[j]=T[j+1];
                cmp++;
        }
    }
    affichage(T,n-cmp);
}
void ordrecroissant(production T[],int n){
    int i,j;
    production tmp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((T[i].date.annee>T[j].date.annee) &&(T[i].date.mois>T[j].date.mois)){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
    printf("voici les productions par ordre croisssant:\n");
    for(i=0;i<n;i++)
        printf("production:%s date:%d/%d/%d\n",T[i].titre,T[i].date.annee,T[i].date.mois,T[i].date.jours);
}
int main()
{
    int n;
    printf("veuillez saisir le nombre des productions:\n");
    scanf("%d",&n);
    int i;
    production T[20];
    production tab[n];
    char Ti[15];
    char Tu[15];
    for(i=0;i<n;i++){
        printf("saisir l'information du production numero:%d\n",i+1);
        printf("saisir le titre de la production:\n");
        scanf("%s",T[i].titre);
        printf("saisir l'auteur principale:\n");
        scanf("%s",T[i].aut1);
        printf("saisir le directeur de la these:\n");
        scanf("%s",T[i].aut2);
        printf("saisir encadrant:\n");
        scanf("%s",T[i].aut3);
        do{
        printf("saisir le type de la production:\n");
        scanf("%s",T[i].type);
        if(strcmp(T[i].type,"communication")!=0 && strcmp(T[i].type,"these")!=0 && strcmp(T[i].type,"publication")!=0)
            printf("*****le type de production que vous avez saisir n'existe pas dans notre departement*****\n");
        }while(strcmp(T[i].type,"communication")!=0 && strcmp(T[i].type,"these")!=0 && strcmp(T[i].type,"publication")!=0);
        printf("saisir le code de reference:\n");
        scanf("%d",&T[i].coderef);
        printf("saisir l'annee de production:\n");
        scanf("%d",&T[i].date.annee);
        printf("saisir le mois de la production:\n");
        scanf("%d",&T[i].date.mois);
        printf("saisir le jour de la production:\n");
        scanf("%d",&T[i].date.jours);
    }
    system("cls");
    affichage(T,n);
    nombreproduction(T,n);
    rechtype(n,Ti,T,tab);
    ordrecroissant(T,n);
     suppprod(n,Tu,T);
}
