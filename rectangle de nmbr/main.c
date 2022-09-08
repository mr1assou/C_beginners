#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,L,c;
    printf("entrer nmbr de lignes et des collones");
    scanf("%d%d",&L,&c);
    for (i=1;i<=L;i++){
    for (j=1;j<=c;j++){
            printf("%d ",i);
    }
    printf("\n");
}
    return 0;
}
