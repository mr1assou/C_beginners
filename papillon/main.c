#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int L,i,j,p;
    printf("veuillez saisir le nombre de lignes:\n");
    scanf("%d",&L);
    for(i=1;i<L;i++){
        for(j=1;j<=i;j++)
            printf("%d ",j);
        for(j=1;j<=2*L-2*i;j++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    p=L;
    for(i=1;i<=L;i++){
        for(j=1;j<=p;j++)
            printf("%d ",j);
        for(j=1;j<=2*i-2;j++)
            printf("  ");
        for(j=1;j<=p;j++)
            printf("%d ",j);
        printf("\n");
        p--;
    }
}

