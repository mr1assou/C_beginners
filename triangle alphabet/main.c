#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,L,j,n;
    printf("entrer un nmbr de lignes");
    scanf("%d",&L);
n=65;
for (i=1;i<=L;i++){
    for (j=1;j<=i;j++)
        printf("%c ",n);
        printf("\n");
}
    return 0;
}
