#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[5],i,x;
    for(i=0;i<5;i++)
        scanf("%d",&T[i]);
        x=0;
    for(i=0;i<4;i++){
        if(T[i+1]-T[i]==1)
            x++;
    }
    if(x==4)
        printf("les nombres sont successifs\n");
    else
        printf("les nombres ne sont pas successifs\n");
}
