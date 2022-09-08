#include<stdio.h>
#include<stdlib.h>
void main()
{
    int T[3],C[3],i,j,estpremier;
    for (i=0;i<3;i++){
    printf("entrer un nombre n:\n");
    scanf("%d",&T[i]);
    }
    for (i=0;i<3;i++){
        estpremier=0;
        for (j=2;j<=T[i]/2;j++){
            if (T[i]%j==0)
            estpremier++;
        }
        if (estpremier==0)
            C[i]=T[i];
        else
            C[i]=NULL;
    }
    printf("les nombres premier du tableaub sont:\n");
    for (i=0;i<3;i++)
        printf("%d\n",C[i]);
}

