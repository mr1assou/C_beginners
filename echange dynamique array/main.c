#include<stdio.h>
#include<stdlib.h>
void tricroissant(int n, int *x){
    int tmp,i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(x+i)>*(x+j)){
                tmp=*(x+i);
               *(x+i)=*(x+j);
                *(x+j)=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",*(x+i));
    printf("\n");
}
void tridecroissant(int n, int *x){
    int tmp,i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(x+i)<*(x+j)){
                tmp=*(x+i);
               *(x+i)=*(x+j);
                *(x+j)=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",*(x+i));
}
int main()
{
    int n,i,*T;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&n);
    T=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("veuillez saisir un nombre:\n");
        scanf("%d",T+i);
    }
    tricroissant(n,T);
    tridecroissant(n,T);
}

