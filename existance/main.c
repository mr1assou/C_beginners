#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[10];
    int n,i,x;
    printf("entrer le nombre que vous chercher:\n");
    scanf("%d",&n);
    for (i=0;i<10;i++){
        printf("entrer le nombre :");
        scanf("%d",&T[i]);
    }
    x=0;
     for (i=0;i<10;i++){
            if (n==T[i]){
            x+=1;

            }

     }
     printf("le nombre de repetition est %d",x);
    return 0;
}
