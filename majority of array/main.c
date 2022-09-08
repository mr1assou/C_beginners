#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,T[8],frq[8],cmp,max,nbr;
    for(i=0;i<8;i++){
        printf("veuillez saisir un nombre:\n");
        scanf("%d",&T[i]);
    }
    for(i=0;i<8;i++)
        frq[i]=-1;
    for(i=0;i<8;i++){
            cmp=1;
        for(j=i+1;j<8;j++){
            if (T[i]==T[j]){
                frq[j]=0;
                cmp++;
            }
        }
            if (frq[i]!=0)
            frq[i]=cmp;
    }
    nbr=0;
    for(i=0;i<8;i++){
        if (frq[i]>=4)
            nbr++;
   }
    if (nbr!=0)
        printf("There are  Majority Elements in the given array.");
    else
        printf("There are no Majority Elements in the given array.");

return 0;
}

