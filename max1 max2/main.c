#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[8],i,max1,max2;
    for (i=0;i<8;i++){
        printf("entrer un nombre :\n");
        scanf("%d",&T[i]);
        }
    max1=T[0];
    max2=T[0];
    for(i=1;i<8;i++){
        if (T[i]>max1){
            max2=max1;
            max1=T[i];
        }

    }
printf(" la MAX1 est %d\n",max1);
printf(" la MAX2 est %d",max2);
return 0;
}

