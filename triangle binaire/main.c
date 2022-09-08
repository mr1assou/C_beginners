#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,L;
    printf("entrer un nmbr de ligne");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for (j=1;j<=i;j++){
                if (j%2!=0)
                printf("1 ");
                else
                printf("0 ");
        }
        printf("\n");

    }
    return 0;
}
