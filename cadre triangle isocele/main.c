#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,i,j;
    printf("entrer un nmbr");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for (j=1;j<=L-i;j++)
        printf("  ");
        for (j=1;j<=2*i-1;j++){
            if (j==2*i-1 || j==1 || i==L)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }



    return 0;
}
