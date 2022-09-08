#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
int annee;
int mois;
}model;
typedef struct{
char nom[15];
char prenom[15];
char cin[15];
char marque[15];
char carburant[15];
char etat[15];
char immatriculation[15];
int puissance;
model mod;
}vehicule;
vehicule T[15];
int n;
int annee;
char matrix[15];
char rep;
void remplir(){
    int i;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("saisir le nom de propritere:\n");
        scanf("%s",T[i].nom);
        printf("saisir le prenom de propritere:\n");
        scanf("%s",T[i].prenom);
        printf("saisir le CIN de propritere:\n");
        scanf("%s",T[i].cin);
        printf("saisir la marque:\n");
        scanf("%s",T[i].marque);
        do{
            printf("saisir le carburant:\n");
            scanf("%s",T[i].carburant);
            if(strcmp(T[i].carburant,"gasoil")!=0 && strcmp(T[i].carburant,"essence")!=0)
                printf("le type de carburant n'existe pas***\n");
        }while(strcmp(T[i].carburant,"gasoil")!=0 && strcmp(T[i].carburant,"essence")!=0);
        do{
            printf("saisir l'etat:\n");
            scanf("%s",T[i].etat);
            if(strcmp(T[i].etat,"neuf")!=0 && strcmp(T[i].etat,"occasion")!=0)
                printf("etat que vous avez saisi n'existe pas***\n");
        }while(strcmp(T[i].etat,"neuf")!=0 && strcmp(T[i].etat,"occasion")!=0);
        printf("saisir le matricule:\n");
        scanf("%s",T[i].immatriculation);
        printf("saisir le modele:\n");
        printf("saisir annee:\n");
        scanf("%d",&T[i].mod.annee);
        printf("saisir mois:\n");
        scanf("%d",&T[i].mod.mois);
    }
}
void affichage(){
    int i;
    for(i=0;i<n;i++){
        printf("vehicule   %d:\n",i+1);
        printf("nom:  %s\n",T[i].nom);
        printf("prenom:  %s\n",T[i].prenom);
        printf("cin:  %s\n",T[i].cin);
        printf("marque:  %s\n",T[i].marque);
        printf("carburant:  %s\n",T[i].carburant);
        printf("etat:  %s\n",T[i].etat);
        printf("matricule:  %s\n",T[i].immatriculation);
        printf("saisir le modele:\n");
        printf("annee:  %d\n",T[i].mod.annee);
        printf("mois:  %d\n",T[i].mod.mois);
    }
    printf("***********************\n");
}
int recherche(){
    int i,cmp;
    printf("saisir le matricule que vous chercher:\n");
    scanf("%s",matrix);
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].immatriculation,matrix)==0)
            cmp++;
    }
    if(cmp!=0)
        return 1;
    else
        return 0;
}
void ajouter (){
        int i;
        do{
        printf("voulez vous ajouter un vehicule(O/N):\n");
        scanf(" %c",&rep);
        if(rep=='O' || rep=='o'){
        printf("saisir le nom de propritere:\n");
        scanf("%s",T[n].nom);
        printf("saisir le prenom de propritere:\n");
        scanf("%s",T[n].prenom);
        printf("saisir le CIN de propritere:\n");
        scanf("%s",T[n].cin);
        printf("saisir la marque:\n");
        scanf("%s",T[n].marque);
        printf("saisir le carburant:\n");
        scanf("%s",T[n].carburant);
        printf("saisir l'etat:\n");
        scanf("%s",T[n].etat);
        printf("saisir le matricule:\n");
        scanf("%s",T[n].immatriculation);
        printf("saisir le modele:\n");
        printf("saisir annee:\n");
        scanf("%d",&T[n].mod.annee);
        printf("saisir mois:\n");
        scanf("%d",&T[n].mod.mois);
        for(i=0;i<n;i++){
            if(strcmp(T[i].nom,T[n].nom)==0 && strcmp(T[i].prenom,T[n].prenom)==0){
                T[i]=T[n];
                n--;
            }
        }
        n++;
        }
        }while(rep=='o' || rep=='O');
        affichage();
}
void arreter(){
    int i;
    printf("voici les vehicules qui seront stoper:\n");
    for(i=0;i<n;i++){
        if(2022-T[i].mod.annee>25)
            printf("nom: %s prenom: %s\n",T[i].nom,T[i].prenom);
        }
    printf("***********************\n");
}
void supprimer(){
    int i,j;
    T[n].mod.annee=2014;
    for(i=0;i<n;i++){
        if(2022-T[i].mod.annee>25){
            for(j=i;j<n;j++)
                T[j]=T[j+1];
            i--;
            n--;
        }
    }
    printf("voici le tableau apres la supression des vehicules qui depassent 25 ans:\n");
    affichage();
}
int main()
{
    int x;
    remplir();
    system("cls");
    affichage();
    ajouter();
    arreter();
    supprimer();
}

