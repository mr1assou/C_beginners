#include<stdio.h>
#include<stdlib.h>
int *T,n;
void remplir(){
    int i;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&n);
    T=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("veuillez saisir un nombre:\n");
        scanf("%d",T+i);
    }
}
void tricroissant(){
    int tmp,i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(T+i)>*(T+j)){
                tmp=*(T+i);
               *(T+i)=*(T+j);
                *(T+j)=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",*(T+i));
    printf("\n");
}
void tridecroissant(){
    int tmp,i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(T+i)<*(T+j)){
                tmp=*(T+i);
               *(T+i)=*(T+j);
                *(T+j)=tmp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",*(T+i));
}
int main()
{
    remplir();
    tricroissant();
    tridecroissant();
}

