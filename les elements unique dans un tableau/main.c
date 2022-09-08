#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[4],frq[4],i,j,cmp;
    for (i=0;i<4;i++){
        printf("entrer un nombre :\n");
        scanf("%d",&T[i]);
    }
    for (i=0;i<4;i++){
        frq[i]=-1;
    }
    for (i=0;i<4;i++){
        cmp=1;
        for (j=i+1;j<4;j++){
            if (T[i]==T[j]){
                cmp++;
                frq[j]=0;
            }
        }
            if (frq[i]!=0)
                frq[i]=cmp;         // si en fait la condition dans la boucle d'ou on va pas aller vers dernier et la boucle va etre ecraser

    }
    for (i=0;i<4;i++){
        if (frq[i]==1)
            printf("%d ",T[i]);
    }
return 0;
}

