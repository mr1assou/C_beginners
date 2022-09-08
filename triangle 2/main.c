#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,l,j;
    printf("entrer un nmbr:");
    scanf("%d",&l);
    for (i=1;i<=l;i++){
        for (j=1;j<=l-i;j++)
            printf("  ");
        for (j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
