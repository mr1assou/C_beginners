#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[3][3],i,j,s;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("veuillez saisir un nombre:\n");
                scanf("%d",&T[i][j]);
            }
        }
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                printf("%d   \t",T[i][j]);
           }
           printf("\n");
        }
        printf("voici la matrice apres la somme des lignes:\n");
        for(i=0;i<2;i++){
            s=0;
            for(j=0;j<2;j++){
                s=s+T[i][j];
            }
            T[i][2]=s;
        }
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
                printf("%d \t",T[i][j]);
            }
            printf("\n");
        }
        for(j=0;j<2;j++){
                s=0;
            for(i=0;i<2;i++){
                s=s+T[i][j];
            }
            printf("%d      ",s);
        }

return 0;
}

