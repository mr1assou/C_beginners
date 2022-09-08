#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
typedef struct{
int annee;
int mois;
int jours;
}date;
typedef struct{
int age;
char groupe[30];
}categorie;
typedef struct{
char nom[15];
char prenom[15];
int code;
date naissance;
categorie type;
}joueur;
void remplir(joueur T[max],int n){
    int i;
    for(i=0;i<n;i++){
        printf("saisir le nom du joueur:\n");
        scanf("%s",T[i].nom);
        printf("saisir le prenom du joueur:\n");
        scanf("%s",T[i].prenom);
        printf("saisir le code:\n");
        scanf("%s",&T[i].code);
        printf("****saisir la date de naissance:\n****");
        printf("saisir l'annee:\n");
        scanf("%d",&T[i].naissance.annee);
        printf("saisir mois:\n");
        scanf("%d",&T[i].naissance.mois);
        printf("saisir jours:\n");
        scanf("%d",&T[i].naissance.jours);
        T[i].type.age=2022-T[i].naissance.annee;
        if(T[i].type.age<10)
        strcpy(T[i].type.groupe,"MINEUR");
        if(T[i].type.age>10 && T[i].type.age<10)
        strcpy(T[i].type.groupe,"CADET");
        if(T[i].type.age>18)
        strcpy(T[i].type.groupe,"JUNIOR");
    }
}
void affichage(joueur T[max],int n){
        int i;
        for(i=0;i<n;i++){
        printf("joueur:%d\n",i+1);
        printf("nom:%s\n",T[i].nom);
        printf("prenom:%s\n",T[i].prenom);
        printf("code:%s\n",&T[i].code);
        printf("la date de naissance:%d/%d/%d\n",T[i].naissance.annee,T[i].naissance.mois,T[i].naissance.jours);
        printf("voila l'age:%d\n",T[i].type.age);
        printf("groupe:%s\n",T[i].type.groupe);
    }
    printf("***********\n");
}
void supprimer(joueur T[max],int *N){
         int i,j;
    T[*N].code=412;
    for(i=0;i<*N;i++){
        if(T[i].type.age>30){
        for(j=i;j<*N;j++)
        T[j]=T[j+1];
        (*N)--;
        i--;
        }
    }
}
void selectionne(joueur T[max],joueur tab[max],int n){
    int i,cmp;
    printf("VOILA LES JUNIORS:\n");
    cmp=0;
    for(i=0;i<n;i++){
        if(T[i].type.age>=18){
            tab[cmp]=T[i];
            cmp++;
        }
    }
    printf("VOICI LES JOUEURS DE TYPE JUNIOR:\n");
    affichage(tab,cmp);
}
void trier_junior(joueur tab[max],int n){
    int i,j,cmp;
    joueur tmp;
    printf("VOILA LE TRI:\n");
    cmp=0;
    for(i=0;i<n;i++){
        if(tab[i].type.age>=18)
        cmp++;
    }
    for(i=0;i<cmp;i++){
        for(j=i+1;j<cmp;j++){
            if(tab[i].type.age<tab[j].type.age && (tab[i].type.age>18 && tab[i].type.age<30) && (tab[j].type.age>18 && tab[j].type.age<30)){
                tmp=tab[i];
                tab[i]=tab[j];
                tab[j]=tmp;
            }
        }
    }
    affichage(tab,cmp);
}
void tri(joueur T[],int n){
    int i,j;
    joueur tmp;
    printf("VOILA LE TRI MINER CADET JUNIOR:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if(T[i].type.age>T[j].type.age)
            tmp=T[i];
            T[i]=T[j];
            T[j]=tmp;
        }
    }
    affichage(T,n);
}
int main()
{
    int n;
    joueur T[max];
    joueur tab[max];
    int *N=&n;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&n);
    remplir(T,n);
    system("cls");
    selectionne(T,tab,n);
    trier_junior(tab,n);
    tri(T,n);
    supprimer(T,N);
}
