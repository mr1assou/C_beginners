#include<stdio.h>
#include<stdlib.h>
int main()
{
    int L,i,j,n,p,x,cmp,m,z,k;
    printf("saisir un nombre de lignes:\n");
    scanf("%d",&L);
    n=65;
    p=65;
    x=65;
    for(i=1;i<=L-1;i++){
        cmp=0;
        for(j=1;j<=L-i;j++)
        printf("  ");
        for(j=1;j<=i;j++){
            printf("%c ",n);
            n++;
        }
        for(j=2;j<=i;j++){
            printf("%c ",p);
            p--;
            cmp++;
        }
        p=x+cmp;
        n=65;
        printf("\n");
    }
    m=1;
    z=65;
    for(i=L;i>=1;i--){
        for(j=1;j<=m-1;j++)
            printf("  ");
        for(j=1;j<=2*i-1;j++){
            printf("%c ",z);
            if(j<=(2*i-1)/2)
                z++;
            if(j>(2*i-1)/2)
                z--;
        }
        z=65;
        m++;
        printf("\n");
    }
}
