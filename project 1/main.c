#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//# define MAX 50;
typedef struct{
  int annee;
  int mois;
  int jours;
}date_op;
typedef struct{
    char cin[15];
    char nom[30];
    char prenom[30];
    char vaccin[30];
    date_op date;
}citoyen;
citoyen T[2],tab[2];
char Ti[16];
date_op Tu;
void lecture(){
    int i;
    for(i=0;i<2;i++){
    printf("entrer les informations de la personne numero %d:\n",i+1);
    printf("saisir le nom:\n");
    scanf("%s",T[i].nom);
    printf("saisir le prenom:\n");
    scanf("%s",T[i].prenom);
    printf("saisir CIN:\n");
    scanf("%s",T[i].cin);
    do{
    printf("saisir le type de vaccin\n");
    scanf("%s",T[i].vaccin);
    if(strcmp(T[i].vaccin,"Astrazeneca")!=0 && strcmp(T[i].vaccin,"Sinopharm")!=0)
    printf("le type de vaccin que vous avez entrer n'existe pas\n");
    }while(strcmp(T[i].vaccin,"Astrazeneca")!=0 && strcmp(T[i].vaccin,"Sinopharm")!=0);
    printf("saisir l'annee du 1er dose\n");
    scanf("%d",&T[i].date.annee);
    printf("saisir le mois du 1er dose\n");
    scanf("%d",&T[i].date.mois);
    printf("saisir le jour du 1er dose\n");
    scanf("%d",&T[i].date.jours);
    }
}
void affichage(){
    int i;
    for(i=0;i<2;i++){
    printf("nom:%s\nprenom:%s\nCIN:%s\nvaccin:%s\ndate premier dose:%d/%d/%d\n",T[i].nom,T[i].prenom,T[i].cin,T[i].vaccin,T[i].date.annee,T[i].date.mois,T[i].date.jours);
    printf("******************************\n");
    }
}
void totalvaccin(){
    int i,cmp,nbr;
    cmp=0;
    nbr=0;
    for(i=0;i<2;i++){
        if((strcmp(T[i].vaccin,"Astrazeneca")==0))
            cmp++;
        if((strcmp(T[i].vaccin,"Sinopharm")==0))
            nbr++;
    }
    printf("le nombre des personnes qui ont fait Astrazeneca est %d\n",cmp);
    printf("le nombre des personnes qui ont fait Sinopharm est %d\n",nbr);
}
void citoyenvac(){
    int i,cmp;
    printf("veuilez saisir le type de vaccin que le client veut:\n");
    scanf("%s",Ti);
    printf("les personnes qui vont le vaccin specifie pour la deuxieme dose sont:\n");
    cmp=0;
    for(i=0;i<2;i++){
        if (strcmp(T[i].vaccin,Ti)==0){
                tab[cmp]=T[i];
                cmp++;
        }
    }
    for(i=0;i<cmp;i++)
        printf("nom:%s   prenom:%s\n",tab[i].nom,tab[i].prenom);
    printf("*********************************\n");
}
void deuxdose(){
    int i,j,cmp,p,nos,res;
    for(i=0;i<2;i++){
        printf("la personne numero %d\n",i+1);
        nos=T[i].date.jours;
        res=T[i].date.mois;
            cmp=0;
        if(T[i].date.jours>15){
            ++T[i].date.mois;
            for(j=1;j<=14;j++){
                ++T[i].date.jours;
                if(T[i].date.jours>30)
                    cmp++;
            }
            printf("nom:%s\nprenom:%s\nCIN:%s\nla date du premier dose est:%d/%d/%d\nla date du deuxieme dose est:%d/%d/%d\n",T[i].nom,T[i].prenom,T[i].cin,T[i].date.annee,res,nos,T[i].date.annee,T[i].date.mois,cmp);
        }
        else{
            p=T[i].date.jours+14;
            printf("nom:%s\nprenom:%s\nCIN:%s\nladate du premier dose est:%d/%d/%d\nla date du deuxieme dose est:%d/%d/%d",T[i].nom,T[i].prenom,T[i].cin,T[i].date.annee,T[i].date.mois,T[i].date.jours,T[i].date.annee,T[i].date.mois,p);
        }
    }
}
int main()
{
    lecture();
    system("cls");
    affichage();
    totalvaccin();
    citoyenvac();
    deuxdose();
}


