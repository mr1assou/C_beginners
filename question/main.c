#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,L,j;
    printf("entrer un nmbr de lignes");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for (j=1;j<=i;j++)
            printf("%d ",j);
          for (j=1;j<=L-i;j++){
            printf("  ");
        }
        for (j=1;j<=L-i;j++){
            printf("  ");
        }
        for (j=1;j<=i;j++)
            printf("%d ",i-j+1);
        printf("\n");
        }
    return 0;
}
