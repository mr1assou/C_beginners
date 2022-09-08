#include<stdio.h>
#include<stdlib.h>
void ligne(int T[][3]){
    int i,j,maxL,minL;
    for(i=0;i<3;i++){
        maxL=T[i][0];
        minL=T[i][0];
        for(j=1;j<3;j++){
            if(T[i][j]>maxL)
                maxL=T[i][j];
            if(T[i][j]<minL)
                minL=T[i][j];
        }
        printf("le maximum de ligne %d est %d\n",i+1,maxL);
        printf("le minimum de ligne %d est %d\n",i+1,minL);
    }
}
void collone(int T[][3]){
    int i,j,maxC,minC;
        for(j=0;j<3;j++){
            maxC=T[0][j];
            minC=T[0][j];
            for(i=1;i<3;i++){
                if(T[i][j]>maxC)
                    maxC=T[i][j];
                if(T[j][i]<minC)
                    minC=T[i][j];
        }
        printf("la max de colloone %d est %d \n",j+1,maxC);
        printf("la min de colloone %d est %d \n",j+1,minC);
    }
}
int main()
{
    int T[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("veuillez saisir un nombre:\n");
            scanf("%d",&T[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",T[i][j]);
        }
        printf("\n");
    }
    ligne(T);
    collone(T);
return 0;
}


