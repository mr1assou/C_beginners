#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,L;
    printf("entrer un nmbr");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for (j=1;L-i;j++)
            printf("  ");
        for (j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }

    return 0;
}
