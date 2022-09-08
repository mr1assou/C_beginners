#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,i,j,A[4][5],B[4][5],C[4][5];
    printf("remplir premier matrice:\n");
    for (i=0;i<4;i++){
        for (j=0;j<5;j++){
        printf("entrer un nombre:\n");
        scanf("%d",&A[i][j]);
        }
    }
//    printf("remplir deuxieme matrice:\n");
//    for (i=0;i<4;i++){
//        for (j=0;j<5;j++){
//        printf("entrer un nombre:\n");
//        scanf("%d",&B[i][j]);
//        }
//    }
//    for (i=0;i<4;i++){
//        for (j=0;j<5;j++){
//            s=A[i][j]+B[i][j];
//            C[i][j]=s;
//        }
//    }
    printf("la matrice A=\n");
    for (i=0;i<4;i++){
        for (j=0;j<5;j++){
            printf("    %d",A[i][j]);
        }
    printf("\n");
    }
//    printf("la matrice B=\n");
//    for (i=0;i<4;i++){
//        for (j=0;j<5;j++){
//            printf("    %d",B[i][j]);
//        }
//    printf("\n");
//    }
//
//    for (i=0;i<4;i++){
//        for (j=0;j<5;j++){
//            C[i][j]=A[i][j]+B[i][j];
//        }
//    }
//    printf("la matrice C=\n");
//        for (i=0;i<4;i++){
//            for (j=0;j<5;j++){
//            printf("    %d",C[i][j]);
//        }
//    printf("\n");
//    }
//



return 0;
}
