#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,i,j;
    printf("entrer un nmr de ligne");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for (j=1;j<=L-i;j++)
            printf("  ");
        for (j=1;j<=L;j++)
            printf("* ");

            printf("\n");


        }



    return 0;
}
