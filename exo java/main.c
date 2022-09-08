#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,L,c;
printf("veuillez saisir un nombre de lignes:\n");
scanf("%d",&L);
printf("veuillez saisir u nombre de collone:\n");
scanf("%d",&c);
for(i=1;i<=L;i++){
    for(j=1;j<=c;j++){
        if((i%2!=0 && j%2!=0) || (i%2==0 && j%2==0))
            printf("%d  ",1);
        else
            printf("%d  ",0);
    }
    printf("\n");
}




return 0;
}

    return 0;
}
