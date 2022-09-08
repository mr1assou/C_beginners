#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
typedef struct{
int annee;
int mois;
}date;
typedef struct{
char nom[15];
int code;
float prix;
int quantite;
date date_pro;
date date_exp;
}produit;
void remplir(produit T[max],int n){
    int i;
    for(i=0;i<n;i++){
        printf("saisir le nom de produit:\n");
        scanf("%s",T[i].nom);
        printf("saisir le code:\n");
        scanf("%d",&T[i].code);
        printf("saisir le prix:\n");
        scanf("%f",&T[i].prix);
        printf("saisir la quantite:\n");
        scanf("%d",&T[i].quantite);
        printf("saisir la date de production:******\n");
        printf("saisir l'annee:\n");
        scanf("%d",&T[i].date_pro.annee);
        printf("saisir le mois:\n");
        scanf("%d",&T[i].date_pro.mois);
        printf("saisir la date d'expiration:******\n");
        printf("saisir l'annee:\n");
        scanf("%d",&T[i].date_exp.annee);
        printf("saisir le mois:\n");
        scanf("%d",&T[i].date_exp.mois);
    }
    printf("\n");
}
void affichage(produit T[max],int n){
    int i;
    printf("*******************\n");
    for(i=0;i<n;i++){
        printf("PRODUIT NUMERO:%d\n",i+1);
        printf("nom:%s\n",T[i].nom);
        printf("code:%d\n",T[i].code);
        printf("prix:%.2f\n",T[i].prix);
        printf("quantite:%d\n",T[i].quantite);
        printf("date de production:%d/%d\n",T[i].date_pro.annee,T[i].date_pro.mois);
        printf("date d'exiparation:%d/%d\n",T[i].date_exp.annee,T[i].date_exp.mois);
    }
}
int compare(date x,date y){
    int n;
    if(x.annee>y.annee)
        return 1;
    if(x.annee==y.annee && x.mois>y.mois)
        return 1;
    if(x.annee<y.annee)
        return -1;
    if(x.annee==y.annee && x.mois<y.mois)
        return -1;
    if(x.annee==y.annee && x.mois==y.mois)
        return 0;
}
void afficher(produit T[max],int n,date reference,produit tab[max]){
    int i,cmp,x;
    printf("saisir la Date de reference:\n");
    printf("saisir l'anne:\n");
    scanf("%d",&reference.annee);
    printf("saisir le mois:\n");
    scanf("%d",&reference.mois);
    cmp=0;
    for(i=0;i<n;i++){
        x=compare(T[i].date_exp,reference);
        printf("x=%d\n",x);
        if(compare(T[i].date_exp,reference)==-1){
            tab[cmp]=T[i];
            cmp++;
        }
    }
    if(cmp!=0)
    affichage(tab,cmp);
    else
        printf("il n'ya pas des produits qui sont perimées\n");
}
void ajouter(produit T[],int n){
        printf("saisir le nom de produit:\n");
        scanf("%s",T[n].nom);
        printf("saisir le code:\n");
        scanf("%d",&T[n].code);
        printf("saisir le prix:\n");
        scanf("%f",&T[n].prix);
        printf("saisir la quantite:\n");
        scanf("%d",&T[n].quantite);
        printf("saisir la date de production:******\n");
        printf("saisir l'annee:\n");
        scanf("%d",&T[n].date_pro.annee);
        printf("saisir le mois:\n");
        scanf("%d",&T[n].date_pro.mois);
        printf("saisir la date d'expiration:******\n");
        printf("saisir l'annee:\n");
        scanf("%d",&T[n].date_exp.annee);
        printf("saisir le mois:\n");
        scanf("%d",&T[n].date_exp.mois);
        n++;
        affichage(T,n);
    }
void supprimer(produit T[],int n,date reference){
    int i,j;
    T[n].date_exp.annee=232;
    for(i=0;i<n;i++){
        if(compare(T[i].date_exp,reference)==-1){
            for(j=i;j<n;j++)
                T[j]=T[j+1];
            i--;
            j--;
        }
    }
    affichage(T,n);
}
void main()
{
    produit T[max];
    produit tab[max];
    int n;
    date reference;
    date x,y;
    printf("saisir la taille du tableau:\n");
    scanf("%d",&n);
    remplir(T,n);
    11afficher(T,n,reference,tab);
    printf("ajouter:\n");
    ajouter(T,n);
    supprimer(T,n,reference);
 }
