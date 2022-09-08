#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,p,j,c;
    printf("entrer un nmbr c");
    scanf("%d",&c);
    p=1;
    for (i=1;c*2-1;i++){
        for (j=1;j<=p;j++){
        printf("* ");
        }
        if (i<c)
        p++;
        else
        p--;

        printf("\n");
    }

    return 0;
}
