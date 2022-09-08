#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,p,i,j;
    printf("entrer nmbr");
    scanf("%d",&c);
    p=c;
    for (i=1;i<=c;i++){
        for (j=1;j<=p;j++){
            printf("* ");
        }
        if (i>c)
            p++;
        else
            p--;
        printf("\n");
        }
    return 0;
}
