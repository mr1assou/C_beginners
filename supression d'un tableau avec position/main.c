#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[100],i,pos,taille;
    printf("entrer la taille du tableau:\n");
    scanf("%d",&taille);
    for (i=0;i<taille;i++){
        printf("entrer un nombre :\n");
        scanf("%d",&T[i]);
    }
    printf("entrer la position que vous voulez supprimer:\n");
    scanf("%d",&pos);
    for (i=pos;i<taille;i++) // en programmation c'est a dire les indices du tableau
            T[i-1]=T[i];
        taille--;
    printf("le tableau apres supression");
    for (i=0;i<taille;i++)
        printf("%d\n",T[i]);



return 0;
}

