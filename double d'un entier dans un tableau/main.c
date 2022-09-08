#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[4],i,j,p;
    for (i=0;i<4;i++){
        printf("entrer un nombre :\n");
        scanf("%d",&T[i]);
    }
    printf("voici les nombres qui contient leur double:\n");
    for (i=0;i<4;i++){
        for (j=i+1;j<4;j++){
            if (T[i]==T[j]/2){
                printf("%d\n",T[i]);
                break;              // en met break car on une seul reponse dans le tableau  
            }
    }
}








return 0;
    }

