#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[100];
    int taille,j,i,n;
    printf("veuillez saisir la taille:\n");
    scanf("%d",&taille);
    T[taille]=-1;
    for(i=0;i<taille;i++){
        printf("veuillz saisir un nombre:\n");
        scanf("%d",&T[i]);
    }
    printf("veuillez sasir lz nombre que vous voulez supprimer:\n");
    scanf("%d",&n);
    for(i=0;i<taille;i++){
        if(T[i]==n){
            for(j=i;j<taille;j++){
                T[j]=T[j+1];
            }
            i--;
            taille--;
        }
    }
    printf("voici le tableau apres la supression:\n");
    for(i=0;i<taille;i++)
        printf("%d  ",T[i]);
    return 0;
}

