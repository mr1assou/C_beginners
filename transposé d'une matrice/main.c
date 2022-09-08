#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[4][6],T[6][4],i,j;

    for (i=0;i<4;i++){
        for (j=0;j<6;j++){
            printf("veulliez saisir un nombre:\n");
            scanf("%d",&A[i][j]);
        }
    }
    for (j=0;j<6;j++){
        for (i=0;i<4;i++){
            T[j][i]=A[i][j];
        }
    }
    printf("LA MATRICE A=\n");
    for (i=0;i<4;i++){
        for (j=0;j<6;j++){
            printf("%d    ",A[i][j]);
        }
        printf("\n");
    }
    printf(" LA MATRICE T=\n");
    for (j=0;j<6;j++){
        for (i=0;i<4;i++){
            printf("%d    ",T[i][j]);
        }
    printf("\n");
}

return 0;
}

