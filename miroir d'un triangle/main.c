#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,L,j;
    printf("entrer un nmbr");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
       for (j=1;j<=L-i;j++)
         printf("  ");
        for (j=1;j<=i;j++)
                printf("* ");
        for (j=1;j<=L-i;j++)
            printf("  ");
        for (j=1;j<=i;j++)
            printf("* ");

        printf("\n");

    }
    printf("\n");
    for (i=1;i<=L;i++){
        for (j=2;j<=L-i;j++){
            printf("  ");
        }
        for (j=1;j<=i;j++){
            printf("  ");
        }
    }
    return 0;
}
