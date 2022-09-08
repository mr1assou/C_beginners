#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
typedef struct{
char nom[30];
char prenom[35];
char ville[45];
int numerotel;
}personne;
void recherche(char Ti[],personne T[]){
    int i;
    printf("les personnes qui habitent a %s\n",Ti);
    for(i=0;i<2;i++){
        if (strcmp(T[i].ville,Ti)==0)
            printf("%s  %s\n",T[i].nom,T[i].prenom);
    }
}
int main()
{
    personne T[2];
    char Ti[100];
    int i,x;
    for(i=0;i<2;i++){
        printf("------------\n");
        printf("veuillez saisir un nom\n");
        scanf("%s",T[i].nom);
        printf("saisir un prenom\n");
        scanf("%s",T[i].prenom);
        printf("saisir la ville\n");
        scanf("%s",T[i].ville);
        printf("saisir le numero de telephone\n");
        scanf("%d",&T[i].numerotel);
    }
    do{
    x=0;
    printf("veuillez saisir la ville que vous voulez chercher\n");
    scanf("%s",Ti);
    for(i=0;Ti[i]!='\0';i++){
        if(Ti[i]<65 || Ti[i]>122)
        x++;
        }
    }while(x!=0);
    system("cls");
    recherche(Ti,T);
}

