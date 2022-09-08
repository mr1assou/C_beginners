#include<stdio.h>
#include<stdlib.h>
int maximum(int *y,int n){
    int max,i;
    max=*(y+0);
    for(i=1;i<n;i++){
        if(*(y+i)>max)
            max=*(y+i);
    return max;
    }
}
int minimum(int *y,int n){
    int min,i;
    min=*(y+0);
    for(i=1;i<n;i++){
        if(*(y+i)<min)
            min=*(y+i);
    return min;
    }
}
int main()
{
    int *T,size,i;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&size);
    T=malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        printf("veuillez saisir un nombre:\n");
        scanf("%d",T+i);
    }
    printf("le maximum du tableau dans la partie dynamique est %d\n",maximum(T,size));
    printf("le minimum du tableau dans la partie dynamique est %d\n",minimum(T,size));
}

