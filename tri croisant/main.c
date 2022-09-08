#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[5];
    int i,tmp,j;
    for (i=0;i<5;i++){
        printf("entre T[%d]\n",i);
        scanf("%d",&T[i]);
    }
    for (i=0;i<5;i++){
            for (j=i+1;j<5;j++){
                    if (T[i]>T[j]){
                            tmp=T[i];
                            T[i]=T[j];
                            T[j]=tmp;
                    }
            }
    }
    for (i=0;i<5;i++){
            printf("T[%d]=%d\n",i,T[i]);
    }




    return 0;
}
