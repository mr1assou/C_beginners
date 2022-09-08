#include<stdio.h>
#include<stdlib.h>
void produit ( int A[][2],int B[][3], int C[][2]){
    int i,j,k,p;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                p=0;
            for(k=0;k<2;k++){
                p=p+A[i][k]*B[k][j];
            }
            C[i][j]=p;
        }
    }
    affichage(C);
}
void affichage(int C[][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d   \t",C[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,A[3][2],B[2][3],C[3][2];
    printf("remplir le premier tableau:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("saisir un nombre:\n");
            scanf("%d",&A[i][j]);
        }
    }
    printf("remplir le deuxieme tableau:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("saisir un nombre:\n");
            scanf("%d",&B[i][j]);
        }
    }
    printf("voici la matrice A=\n");
        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                printf("%d  ",A[i][j]);
            }
            printf("\n");
        }
    printf("voici la matrice B=\n");
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                printf("%d   ",B[i][j]);
            }
            printf("\n");
        }
        printf("\n\n\n");
        produit (A,B,C);

return 0;
}


