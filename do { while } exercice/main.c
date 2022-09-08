#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s;
    char rep;
    do{
            printf("entrer un nbr");
            scanf("%d",&n);
            for (i=1;i<=10;i++){
            printf("%d*%d=%d\n",i,n,n*i);
            }
            printf("voulez vous continuer");
            scanf(" %c",&rep);
    }while(rep=='o' || rep=='O');
    printf("pas de chance");

}
