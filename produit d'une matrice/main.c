#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include<stdio.h>
#include<stdlib.h>
int main ()
{
    int Ti[3][2],i,j,k,p;
    int A[3][4]={{2,3,5,7},{0,9,3,7},{7,1,3,4}};
    int B[4][2]={{5,6},{4,7},{2,0},{0,1}};
        for (i=0;i<3;i++){
            for (j=0;j<2;j++){
                    p=0;
                for (k=0;k<4;k++){
                    p=p+A[i][k]*B[k][j];
                }
                Ti[i][j]=p;
            }
        }
    for (i=0;i<4;i++){
        for (j=0;j<2;j++){
            printf("%d \t",Ti[i][j]);
        }
    printf("\n");
    }
return 0;
}


    return 0;
}
