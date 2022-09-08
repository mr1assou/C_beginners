#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[4],Ti[4],Tp[4],cmpp,cmpi,i;
    for (i=0;i<4;i++){
        printf("entrer un nombre :\n");
        scanf("%d",&T[i]);
        }
    cmpp=0;
    cmpi=0;
    for (i=0;i<4;i++){
        if (T[i]%2==0){
            Tp[cmpp]=T[i];
            cmpp++;
        }
        else{
            Ti[cmpi]=T[i];
            cmpi++;
        }
    }
    printf("voici le tableau des entiers pairs\n");
    for (i=0;i<cmpp;i++)
            printf("%d \n",Tp[i]);
    printf("voici le tableau des entiers impairs:\n");
    for (i=0;i<cmpi;i++)
            printf("%d \n",Ti[i]);
return 0;
    }
