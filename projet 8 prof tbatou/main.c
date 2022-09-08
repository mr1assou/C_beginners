#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
typedef struct{
int id_ser;
char libelle[15];
char dep[10];
}service;
typedef struct{
char nom[15];
char prenom[15];
char adresse[15];
char cin[15];
char cnss[15];
service ser;
}employe;
void remplir(employe T[max],int n){
    int i;
    for(i=0;i<n;i++){
    printf("veuillez saisir le nom:\n");
    scanf("%s",T[i].nom);
    printf("veuillez saisir le prenom:\n");
    scanf("%s",T[i].prenom);
    printf("veuillez saisir adresse:\n");
    scanf("%s",T[i].adresse);
    printf("veuillez saisir libille:\n");
    scanf("%s",T[i].ser.libelle);
    printf("veuille saisir departement:\n");
    scanf("%s",T[i].ser.dep);
    printf("veuillez saisir CIN:\n");
    scanf("%s",T[i].cin);
    printf("veuillez saisir la cnss:\n");
    scanf("%s",T[i].cnss);
    printf("veuillez saisir ID_SER:\n");
    scanf("%d",&T[i].ser.id_ser);
    }
}
void affichage(employe T[max],int n){
    int i;
    for(i=0;i<n;i++){
    printf("employe %d;",i+1);
    printf("nom:%s\n",T[i].nom);
    printf("prennnom:%s\n",T[i].prenom);
    printf("adresse:%s\n",T[i].adresse);
    printf("libelle:%s\n",T[i].ser.libelle);
    printf("departement:%s\n",T[i].ser.dep);
    printf("CIN:%s\n",T[i].cin);
    printf("CNSS:%s\n",T[i].cnss);
    printf("ID_SER:%d\n",T[i].ser.id_ser);
    }
}
void recherche(employe T[max],char Ti[],int n){
    int i;
    printf("saisir la CNSS de l'employee que vous chercher:\n");
    scanf("%s",Ti);
    printf("VOILA LES PERSONNES SPECIFIE:\n");
    for(i=0;i<n;i++){
        if((strcmp(T[i].cnss,Ti)==0)){
            printf("nom:%s\n",T[i].nom);
            printf("prennnom:%s\n",T[i].prenom);
            printf("adresse:%s\n",T[i].adresse);
            printf("departement:%s\n",T[i].ser.dep);
            printf("libelle:%s\n",T[i].ser.libelle);
        }
    }
}
void ajouter(employe T[max],int *N){
    printf("veuillez saisir le nom:\n");
    scanf("%s",T[*N].nom);
    printf("veuillez saisir le prenom:\n");
    scanf("%s",T[*N].prenom);
    printf("veuillez saisir adresse:\n");
    scanf("%s",T[*N].adresse);
    printf("veuillez saisir libille:\n");
    scanf("%s",T[*N].ser.libelle);
    printf("veuille saisir departement:\n");
    scanf("%s",T[*N].ser.dep);
    printf("veuillez saisir CIN:\n");
    scanf("%s",T[*N].cin);
    printf("veuillez saisir la cnss:\n");
    scanf("%s",T[*N].cnss);
    printf("veuillez saisir ID_SER:\n");
    scanf("%d",&T[*N].ser.id_ser);
        (*N)++;
}
int main()
{
    int n;
    employe T[max];
    char Ti[10];
    int *N=&n;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&n);
    remplir(T,n);
    system("cls");
    affichage(T,n);
    printf("*******************\n");
    recherche(T,Ti,n);
    printf("*******************\n");
    ajouter(T,N);
    ajouter(T,N);
    affichage(T,n);

}
