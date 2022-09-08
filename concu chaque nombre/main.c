#include<stdio.h>
#include<stdlib.h>
void affichage(int frq[],int T[]){
    int i;
        for(i=0;i<4;i++){
        if(frq[i]==2)
            printf("%d   ",T[i]);
    }
}
void traitement(int frq[],int T[]){
    int i,j,cmp;
    for(i=0;i<4;i++)
        frq[i]=-1;
    for(i=0;i<4;i++){
            cmp=1;
        for(j=i+1;j<4;j++){
            if(T[i]==T[j]){
                frq[j]=0;
                cmp++;
            }
        }
        if(frq[i]!=0)
            frq[i]=cmp;
    }
    affichage(frq,T);
}
int main()
{
    int T[4],frq[4],i;
    for(i=0;i<4;i++){
        printf("veuillez saisir un nombre:\n");
        scanf("%d",&T[i]);
}
    traitement(frq,T);
return 0;
}



