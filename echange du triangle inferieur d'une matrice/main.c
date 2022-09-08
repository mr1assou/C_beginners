#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,j,T[5][5],A[5][5];
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("veulliez saisir un nombre:\n");
            scanf("%d",&T[i][j]);
        }
    }
    printf("A=\n");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("%d  \t",T[i][j]);
            }
        printf("\n");
        }
    for (j=0;j<5;j++){
        for (i=0;i<5;i++){
                if (i!=j)
             A[j][i]=T[i][j];
            }
        printf("\n");
        }
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            printf("%d  \t",A[i][j]);
        }
        printf("\n");
    }
return 0;
}
