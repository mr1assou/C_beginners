#include<stdio.h>
#include<stdlib.h>
int main()
{
    int L,i,j,n,p;
    printf("veuillez saisir un nombre de lignes:\n");
    scanf("%d",&L);
    n=65;
    p=0;
    for(i=1;i<=L;i++){
        for(j=1;j<=i;j++){
           if( j==1 || i==L || i==j){
                printf("%c ",n);
                n+=p;
            }
            else
                printf("  ");
        }
    if(i<L)
    p++;
    if(i==L-1)
        p=1;
    n=65;
    printf("\n");
    }
}


