#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[1000],taille,i,n,pos;
    printf("entrer la taille du tableau:\n");
    scanf("%d",&taille);
    for (i=0;i<taille;i++){
        printf("entrer un nombre :\n");
        scanf("%d",&T[i]);
    }
    printf("entrer le nombre que vous voulez inserer\n");
    scanf("%d",&n);
    printf("entrer la position :\n");
    scanf("%d",&pos);
    if (pos>taille)
        printf("erreur la position n'existe pas:");
    else{
        for (i=taille;i>=pos;i--)
            T[i]=T[i-1];
        T[pos-1]=n;
        taille++;
        printf("le tableau apres insertion est:\n");
        for (i=0;i<taille;i++)
        printf("%d\n",T[i]);
    }
return 0;
}

