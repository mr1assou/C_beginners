#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
int annee;
int mois;
int jours;
}date_athlete;
typedef struct{
int temps;
char distance[15];
char termine[15];
}score;
typedef struct{
int codeid;
char nom[15];
char prenom[15];
date_athlete date;
score scr;
}athlete;
void affichage(athlete T[],int n){
        int i;
        for(i=0;i<n;i++){
        printf("athlete %d:\n",i+1);
        printf("nom:%s\n",T[i].nom);
        printf("prenom:%s\n",T[i].prenom);
        printf("annee:%d/%d/%d\n",T[i].date.annee,T[i].date.mois,T[i].date.jours);
        printf("temps:%d\n",T[i].scr.temps);
        printf("distance:%s\n",T[i].scr.distance);
        printf("etat:%s\n",T[i].scr.termine);
        }
    printf("***********************\n");
}
void calcul(athlete T[],int n){
    int i,cmp,nbr;
    nbr=0;
    cmp=0;
    for(i=0;i<n;i++){
        if( strcmp(T[i].scr.distance,"400m")==0)
                cmp++;
        if( strcmp(T[i].scr.distance,"3000m")==0)
                nbr++;
    }
    printf("les nombres des athletes participant a 400m est:%d\n",cmp);
    printf("les nombres des athletes participant a 3000m est:%d\n",nbr);
    printf("***************************\n");
}
void supp(athlete T[],int n){
    int i,j,cmp;
    cmp=0;
    printf("LA SUPRESSION DE NON +400\n");
    T[n].codeid=3852;
    for(i=0;i<n;i++){
        if(strcmp(T[i].scr.termine,"non")==0){
            for(j=i;j<n;j++)
            T[j]=T[j+1];
            cmp++;
            i--;
        }
    }
    printf("voici les atlhletes qui ont terminer la course apres la supression des athletes qui ont quitter la course:\n");
    affichage(T,n-cmp);
}
void chercher_400(athlete T[],int n,athlete tab[]){
    int i,cmp;
    printf("RECHERCHE ATHLETE 400+oui\n");
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].scr.termine,"oui")==0 && strcmp(T[i].scr.distance,"400m")==0){
                tab[cmp]=T[i];
                cmp++;
            }
        }
    affichage(tab,cmp);
}
void ordre_croissant(athlete T[],int n){
    int i,j,cmp;
    printf("VOICI ORDRE CROISSANT:\n");
    athlete tmp;
    cmp=0;
    for(i=0;i<n;i++){
         if(strcmp(T[i].scr.distance,"400m")==0 && strcmp(T[i].scr.termine,"oui")==0)
            cmp++;
    }
    for(i=0;i<cmp;i++){
        for(j=i+1;j<cmp;j++){
            if(T[i].scr.temps>T[j].scr.temps){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
     affichage(T,cmp);
}
int main()
{
    int n,i;
    printf("saisir le nombre des athletes:\n");
    scanf("%d",&n);
    athlete T[50];
    athlete tab[50];
    for(i=0;i<n;i++){
        printf("saisir les informations d'athlete numero %d\n",i+1);
        printf("saisir le nom:\n");
        scanf("%s",T[i].nom);
        printf("saisir le prenom:\n");
        scanf("%s",T[i].prenom);
        printf("****saisir la date de naissance:****\n");
        printf("saisir l'annee:\n");
        scanf("%d",&T[i].date.annee);
        printf("saisir le mois:\n");
        scanf("%d",&T[i].date.mois);
        printf("saisir le jour:\n");
        scanf("%d",&T[i].date.jours);
        printf("*****saisir le score :******\n");
        printf("saisir le temps:\n");
        scanf("%d",&T[i].scr.temps);
        do{
        printf("saisir la distance:\n");
        scanf("%s",T[i].scr.distance);
        if((strcmp(T[i].scr.distance,"400m")!=0) && ((strcmp(T[i].scr.distance,"3000m")!=0)))
           printf("******la distance que vous avez saisir n'existe pas dans notre competition*******\n");
        }while(strcmp(T[i].scr.distance,"400m")!=0 && strcmp(T[i].scr.distance,"3000m")!=0);
        do{
        printf("saisir est ce que athlete termine la  course OUI/NON:\n");
        scanf("%s",T[i].scr.termine);
        if(strcmp(T[i].scr.termine,"oui")!=0 && strcmp(T[i].scr.termine,"non")!=0)
            printf("la reponse que vous avez saisi n'existe pas\n");
        }while(strcmp(T[i].scr.termine,"oui")!=0 && strcmp(T[i].scr.termine,"non")!=0);
    }
    system("cls");
    affichage(T,n);
    calcul(T,n);
    supp(T,n);
    chercher_400(T,n,tab);
    ordre_croissant(T,n);
    printf("\n\n\n");
}
