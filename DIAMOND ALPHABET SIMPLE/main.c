#include<stdio.h>
#include<stdlib.h>
int main()
{
    int L,i,j,n,m;
    printf("veuillez saisir un nombre de lignes:\n");
    scanf("%d",&L);
    n=65;
    for(i=1;i<=L-1;i++){
        for(j=1;j<=L-i;j++)
            printf("  ");
        for(j=1;j<=2*i-1;j++){
            printf("%c ",n);
            if(j<=(2*i-1)/2)
                n++;
            else
                n--;
        }
        n=65;
    printf("\n");
    }
    m=1;
    for(i=L;i>=1;i--){
        for(j=1;j<=m-1;j++)
            printf("  ");
        for(j=1;j<=2*i-1;j++){
            printf("%c ",n);
            if(j<=(2*i-1)/2)
                n++;
            else
                n--;
        }
        m++;
        n=65;
        printf("\n");
    }
}

