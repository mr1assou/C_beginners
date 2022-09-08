#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[7];
    int i,max,min;
    for (i=0;i<7;i++){
        printf("entrer un nombre T[%d]\n",i);
        scanf("%d",&T[i]);
    }
    max=T[0];
    min=T[0];
    for (i=1;i<7;i++){
        if (T[i]>max)
            max=T[i];
        if (T[i]<min)
            min=T[i];
    }
    printf("le maximum est :%d\n",max);
    printf("le minimum est :%d",min);

    return 0;
}
