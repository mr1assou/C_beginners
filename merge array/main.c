#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[4],Ti[4],V[8],i,j,cmp;
    for (i=0;i<4;i++){
        printf("saisir un nombre:\n");
        scanf("%d",&T[i]);
    }
    for (i=0;i<4;i++){
        printf("saisir un nombre");
        scanf("%d",&Ti[i]);
    }
    for(i=0;i<4;i++)
            V[i]=T[i];
    cmp=4;
        do{
            for(i=0;i<4;i++){
                V[cmp]=T[i];
            }
             cmp++;
        }while(cmp<8);
    for(i=0;i<8;i++)
        printf("%d\n",V[i]);
    return 0;
    }

