#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[10];
    int i;
    for (i=0;i<10;i++){
        printf("entrer le nombre \n");
        scanf("%f",&T[i]);
    }
     for (i=0;i<10;i++){
            T[i]=0;
     }
     for (i=0;i<10;i++){
        printf("T[%d]=%d\n",i,T[i]);
     }

    return 0;
}
