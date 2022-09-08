#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,i,j,tmp;
    printf("veuillez saisir la taille du premier tableau:\n");
    scanf("%d",&x);
    printf("veuillez saisir la taille du deuxieme tableau:\n");
    scanf("%d",&y);
    int T[x],Ti[y],U[x+y];
    for(i=0;i<x;i++){
        printf("saisir un nombre:\n");
        scanf("%d",&T[i]);
    }
    for(i=0;i<x;i++)
        U[i]=T[i];
    for(i=0;i<y;i++){
        printf("saisir un nombre:\n");
        scanf("%d",&Ti[i]);
    }
    for(i=0;i<y;i++)
       U[x+i]=Ti[i];
        printf("array after merge:\n");
    for(i=0;i<x+y;i++){
        for(j=i+1;j<x+y;j++){
            if (U[i]<U[j]){
                tmp=U[i];
                U[i]=U[j];
                U[j]=tmp;
            }
        }
    }
    printf("voici le tableau trier:\n");
    for(i=0;i<x+y;i++)
        printf("%d  ",U[i]);


    return 0;
}
