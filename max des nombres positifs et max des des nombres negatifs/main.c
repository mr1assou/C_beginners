#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,T[4],tmp,Tp[4],Tn[4],cmpp,cmpn;
    for(i=0;i<4;i++){
        printf("veuillez saisir un nombre:\n");
        scanf("%d",&T[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
                if (T[i]>T[j]){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
    cmpp=0;
    cmpn=0;
    for(i=0;i<4;i++){
        if (T[i]>0){
            Tp[cmpp]=T[i];
                cmpp++;
        }
        if (T[i]<0){
            Tn[cmpn]=T[i];
                cmpn++;
        }
    }
    for(i=0;i<cmpp;i++){
        if (Tp[i]>0)
            printf("%d  ",Tp[i]);
        }
    }
    for(i=0;i<cmpn;i++){
        if (Tn[i]<0)
            printf("%d  ",Tn[i]);

    }


return 0;
}


