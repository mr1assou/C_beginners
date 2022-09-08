#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
int annee;
int mois;
int jours;
}edition;
typedef struct{
char titre[30];
char specialite[15];
char auteur[15];
int code;
edition id;
}livre;
void affichage(livre T[],int n){
    int i;
    for(i=0;i<n;i++){
    printf("LIVRE:%d\n",i+1);
    printf("titre:%s\n",T[i].titre);
    printf("specialite:%s\n",T[i].specialite);
    printf("auteur:%s\n",T[i].auteur);
    printf("code:%d\n",&T[i].code);
    printf("date d'edition:%d/%d/%d\n",T[i].id.annee,T[i].id.mois,T[i].id.jours);
    printf("*********************\n");
    }
}
int compare(edition x,edition y){
    if(x.annee>y.annee)
        return 1;
    if(x.annee==y.annee && x.mois>y.mois)
        return 1;
    if(x.annee==y.annee && x.mois==y.mois && x.jours>y.jours)
        return 1;
    if(x.annee<y.annee)
        return -1;
    if(x.annee==y.annee && x.mois<y.mois)
        return -1;
    if(x.annee==y.annee && x.mois==y.mois && x.jours<y.jours)
        return -1;
    if(x.annee==y.annee && x.mois==y.mois && x.jours==y.jours)
        return 0;
}
void ordre_croissant(livre T[],int n){
    int i,j;
    livre tmp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(T[i].id.annee>T[j].id.annee){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
            if(T[i].id.annee==T[j].id.annee && T[i].id.mois>T[j].id.mois){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
            if(T[i].id.annee==T[j].id.annee && T[i].id.mois==T[j].id.mois && T[i].id.jours>T[j].id.jours ){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
    affichage(T,n);
}
void affichageaut(char Ti[],livre T[],int n,livre tab[]){
    int i,cmp;
    printf("saisir le nom de l'auteur que vous chercher:\n");
    scanf("%s",Ti);
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].auteur,Ti)==0){
                tab[cmp]=T[i];
                cmp++;
        }
    }
    affichage(tab,cmp);
}
void supprimer(livre T[],char Tu[],int n){
    int i,j,cmp;
    printf("saisie le nom de l'auteur que vous voulez supprimer:\n");
    scanf("%s",Tu);
    printf("VOICI LE TABLEAU APRES LA SUPRESSION\n");
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].auteur,Tu)==0){
                cmp++;
            for(j=i;j<n;j++){
                T[j]=T[j+1];
            }
            i--;
        }
    }
    affichage(T,cmp);
}
int main()
{
    int n,i,p;
    printf("saisir le nombre des livres:\n");
    scanf("%d",&n);
    livre T[n];
    T[n].code=2362;
    edition x,y;
    livre tab[14];
    char Ti[40];
    char Tu[12];
    for(i=0;i<n;i++){
    printf("saisir le titre:\n");
    scanf("%s",T[i].titre);
    printf("saisir la specialite:\n");
    scanf("%s",T[i].specialite);
    printf("saisir l'auteur:\n");
    scanf("%s",T[i].auteur);
    printf("saisir le code:\n");
    scanf("%d",&T[i].code);
    printf("****saisir la date d'edition;****\n");
    printf("saisir annee:\n");
    scanf("%d",&T[i].id.annee);
    printf("saisir mois:\n");
    scanf("%d",&T[i].id.mois);
    printf("saisir jours:\n");
    scanf("%d",&T[i].id.jours);
    }
    system("cls");
    affichage(T,n);
//    printf("REMPLIR LES DEUX EDITIONS X:\n");
//    scanf("annee:%d",&x.annee);
//    printf("saisir mois:\n");
//    scanf("mois:%d",&x.mois);
//    printf("saisir jours:\n");
//    scanf("jours:%d",&x.jours);
//    printf("REMPLIR LES DEUX EDITIONS Y:\n");
//    printf("****saisir la date d'edition;****\n");
//    printf("saisir annee:\n");
//    scanf("annee:%d",&y.annee);
//    printf("saisir mois:\n");
//    scanf("mois:%d",&y.mois);
//    printf("saisir jours:\n");
//    scanf("jours:%d",&y.jours);
//    p=compare(x,y);
//    if(p==1)
//        printf("la date d'edition de x est superiur a la date d'edition de y\n");
//    if(p==-1)
//        printf("la date d'edition de y est superiur a la date d'edition de x\n");
//    if(p==0)
//    printf("les deux date d'esition sont egaux\n");
//    printf("********************\n");
    printf("VOICI ORDRE CROISSANT DES EDITIONS:\n");
    ordre_croissant(T,n);
    affichageaut(Ti,T,n,tab);
    supprimer(T,Tu,n);
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
int annee;
int mois;
int jours;
}edition;
typedef struct{
char titre[30];
char specialite[15];
char auteur[15];
int code;
edition id;
}livre;
void affichage(livre T[],int n){
    int i;
    for(i=0;i<n;i++){
    printf("LIVRE:%d\n",i+1);
    printf("titre:%s\n",T[i].titre);
    printf("specialite:%s\n",T[i].specialite);
    printf("auteur:%s\n",T[i].auteur);
    printf("code:%d\n",&T[i].code);
    printf("date d'edition:%d/%d/%d\n",T[i].id.annee,T[i].id.mois,T[i].id.jours);
    printf("*********************\n");
    }
}
int compare(edition x,edition y){
    if(x.annee>y.annee)
        return 1;
    if(x.annee==y.annee && x.mois>y.mois)
        return 1;
    if(x.annee==y.annee && x.mois==y.mois && x.jours>y.jours)
        return 1;
    if(x.annee<y.annee)
        return -1;
    if(x.annee==y.annee && x.mois<y.mois)
        return -1;
    if(x.annee==y.annee && x.mois==y.mois && x.jours<y.jours)
        return -1;
    if(x.annee==y.annee && x.mois==y.mois && x.jours==y.jours)
        return 0;
}
void ordre_croissant(livre T[],int n){
    int i,j;
    livre tmp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(T[i].id.annee>T[j].id.annee){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
            if(T[i].id.annee==T[j].id.annee && T[i].id.mois>T[j].id.mois){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
            if(T[i].id.annee==T[j].id.annee && T[i].id.mois==T[j].id.mois && T[i].id.jours>T[j].id.jours ){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
    affichage(T,n);
}
void affichageaut(char Ti[],livre T[],int n,livre tab[]){
    int i,cmp;
    printf("saisir le nom de l'auteur que vous chercher:\n");
    scanf("%s",Ti);
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].auteur,Ti)==0){
                tab[cmp]=T[i];
                cmp++;
        }
    }
    affichage(tab,cmp);
}
void supprimer(livre T[],char Tu[],int n){
    int i,j,cmp;
    printf("saisie le nom de l'auteur que vous voulez supprimer:\n");
    scanf("%s",Tu);
    printf("VOICI LE TABLEAU APRES LA SUPRESSION\n");
    cmp=0;
    for(i=0;i<n;i++){
        if(strcmp(T[i].auteur,Tu)==0){
                cmp++;
            for(j=i;j<n;j++){
                T[j]=T[j+1];
            }
            i--;
        }
    }
    affichage(T,cmp);
}
int main()
{
    int n,i,p;
    printf("saisir le nombre des livres:\n");
    scanf("%d",&n);
    livre T[n];
    T[n].code=2362;
    edition x,y;
    livre tab[14];
    char Ti[40];
    char Tu[12];
    for(i=0;i<n;i++){
    printf("saisir le titre:\n");
    scanf("%s",T[i].titre);
    printf("saisir la specialite:\n");
    scanf("%s",T[i].specialite);
    printf("saisir l'auteur:\n");
    scanf("%s",T[i].auteur);
    printf("saisir le code:\n");
    scanf("%d",&T[i].code);
    printf("****saisir la date d'edition;****\n");
    printf("saisir annee:\n");
    scanf("%d",&T[i].id.annee);
    printf("saisir mois:\n");
    scanf("%d",&T[i].id.mois);
    printf("saisir jours:\n");
    scanf("%d",&T[i].id.jours);
    }
    system("cls");
    affichage(T,n);
//    printf("REMPLIR LES DEUX EDITIONS X:\n");
//    scanf("annee:%d",&x.annee);
//    printf("saisir mois:\n");
//    scanf("mois:%d",&x.mois);
//    printf("saisir jours:\n");
//    scanf("jours:%d",&x.jours);
//    printf("REMPLIR LES DEUX EDITIONS Y:\n");
//    printf("****saisir la date d'edition;****\n");
//    printf("saisir annee:\n");
//    scanf("annee:%d",&y.annee);
//    printf("saisir mois:\n");
//    scanf("mois:%d",&y.mois);
//    printf("saisir jours:\n");
//    scanf("jours:%d",&y.jours);
//    p=compare(x,y);
//    if(p==1)
//        printf("la date d'edition de x est superiur a la date d'edition de y\n");
//    if(p==-1)
//        printf("la date d'edition de y est superiur a la date d'edition de x\n");
//    if(p==0)
//    printf("les deux date d'esition sont egaux\n");
//    printf("********************\n");
    printf("VOICI ORDRE CROISSANT DES EDITIONS:\n");
    ordre_croissant(T,n);
    affichageaut(Ti,T,n,tab);
    supprimer(T,Tu,n);
}
