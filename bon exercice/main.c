#include<stdio.h>
#include<stdlib.h>
// bon exercice
int main()
{
    int T[3],i,tmp;
    for(i=0;i<3;i++){
        printf("veuillez saisir un nobre\n");
        scanf("%d",&T[i]);
    }
    for(i=2;i>0;i--){
        tmp=T[i];
        T[i]=T[i-1];
        T[i-1]=tmp;
    }
    for(i=0;i<3;i++)
        printf("%d  ",T[i]);
}

