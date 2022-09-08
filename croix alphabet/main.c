#include<stdio.h>
#include<stdlib.h>
int main()
{
    int L,i,j,n,p,x,d;
    printf("saisir nombe de lignes:\n");
    scanf("%d",&L);
    n=65;
    p=4;
    x=65;
    d=65;
    for(i=1;i<=L;i++){
        for(j=1;j<=L;j++)
            if(i==j || i==L-j+1){
                printf("%c ",n);
                n+=p;
            }
            else
                printf("  ");
        if(i<L/2+1){
        x++;
        p-=2;
        n=x;
        }
        if(i>=L/2+1){
            n=++d;
            p=2;
       if(i==L-1){
            n=65;
            p=4;
       }
    }
        printf("\n");
    }
}
