#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,l;
    printf("entrer un ligne");
    scanf("%d",&l);
    for (i=1;i<=l;i++){
        for (j=1;j<=5;j++){
                if (i==1 || j==1 )
                printf("- ");
                else
                    printf("  ");
        }
        printf("\n");
    }
    return 0;
}
