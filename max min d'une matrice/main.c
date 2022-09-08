#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,j,maxL,minL,maxC,minC;
    int T[4][6]={{2,3,5,7,8,1},{0,9,3,7,1,6},{7,1,3,4,0,1},{9,8,2,4,5}};
        for (i=0;i<4;i++){
            for (j=0;j<6;j++)
                printf("%d\t",T[i][j]);
            printf("\n");
        }
        printf("\n");
        for (i=0;i<4;i++){
            maxL=T[i][0];
            minL=T[i][0];
            for(j=1;j<6;j++){
                if (T[i][j]>maxL)
                    maxL=T[i][j];
                if (T[i][j]<minL)
                    minL=T[i][j];
            }
            printf("le max de ligne %d est %d\n",i+1,maxL);
            printf("le min de ligne %d est %d\n",i+1,minL);
        }
        printf("\n");
        for (j=0;j<6;j++){
            maxC=T[0][j];
            minC=T[0][j];
            for (i=1;i<4;i++){
                if (T[i][j]>maxC)
                    maxC=T[i][j];
                if (T[i][j]<minC)
                    minC=T[i][j];
                }
        printf("le max de collone %d est %d\n",j+1,maxC);
        printf("le min de collonne %d est %d\n",j+1,minC);// erreur il faut bien concentré
        }

return 0;
}

