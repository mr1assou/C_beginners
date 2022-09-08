#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c,l,j;
    printf("entrer ligne:\n");
    scanf("%d",&l);
    printf(" entrer colonne:\n");
    scanf("%d",&c);
    for (i=1;i<=l;i++){
        for (j=1;j<=c;j++){
                printf("* ");
                }
            printf("\n");
        }



    return 0;
}
