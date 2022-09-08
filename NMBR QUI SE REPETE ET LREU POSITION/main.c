#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include<stdio.h>
#include<stdlib.h>
int main()
{
    int T[4],frq[4],i,j,cmp,x;
    for (i=0;i<4;i++){
        printf("remplir le tableau :\n");
        scanf("%d",&T[i]);
    }
    for (i=0;i<4;i++)
        frq[i]=-1;
    for (i=0;i<4;i++){
            cmp=1;
            for (j=i+1;j<4;j++){
                if (T[i]==T[j]){
                    frq[j]=0;
                    cmp++;
                }
            }
            if (frq[i]!=0)
                frq[i]=cmp;
    }
    x=0;
    for (i=0;i<4;i++){
        if (frq[i]==2){
            printf(" le nombre qui se repete est:%d\n",T[i]);
            for (j=0;j<4;j++)
            if (T[j]==T[i])
                printf(" la position est :%d\n",j+1);
        }
    }




return 0;
    }

    return 0;
}
