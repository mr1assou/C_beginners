#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,L,i,j;
    printf("entrer un nmbr :");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for (j=1;j<=L-i;j++)
            printf("  ");
        for (j=1;j<=2*i-1;j++)
            printf("* ");

        printf("\n");
    }
    p=L+1;
     for (i=2;i<=L;i++){
        for (j=1;j<=i-1;j++)
            printf("  ");
        for (j=1;j<=2*p-1;j++)
            printf("* ");
            printf("\n");
            if (i<L)
                p--;
            else
                p++;
        }





    return 0;
}
