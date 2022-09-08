#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,i,j;
    printf("entrer un nmbr de colonne");
    scanf("%d",&c);
    for (i=1;i<=c;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=1;i<=c;i++){
        for (j=1;j<=i;j++){
            if (i==1 || j==1 || i==c-j+1)
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
