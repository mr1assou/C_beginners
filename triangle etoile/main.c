#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,i,j;
    printf("entrer un nmbr de ligne");
    scanf("%d",&l);
    for (i=1;i<=l;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}
