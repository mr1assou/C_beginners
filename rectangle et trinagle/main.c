#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,L;
    printf("entrer nmbr de ligne");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for (j=1;j<=L;j++){
            if (i==1 || i=L || j==1 || j==L || i==j || j==L-i+1 )
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
