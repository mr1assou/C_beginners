#include<stdio.h>
#include<stdlib.h>
int main()
{
    int L,i,j,p,x;
    printf("veuillez saisir nombre de lignes:\n");
    scanf("%d",&L);
    p=65;
    x=p;
    for(i=1;i<=L;i++){
        for(j=1;j<=L;j++){
            printf("%c ",x);
            x++;
        }
        p++;
        x=p;
        printf("\n");

    }



}

