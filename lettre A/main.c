#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,L;
    printf("entrer un nmbr:\n");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
            for (j=1;j<=L-i;j++)
            printf("  ");
            for (j=1;j<=i;j++)
                printf("* ");
            printf("\n");
      for (j=1;j<=L;j++)
            printf("  ");
            for (j=1;j<=i;j++)
                printf("* ");
            printf("\n");
    }


    return 0;
}
