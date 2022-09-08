#include<stdio.h>
#include<stdlib.h>
void echange(int *x, int *y){
    int z,tmp;
    if(*x * *y>0){
        z=*x;
        *x=*y;
        *y=z;
    }
    if(*x * *y <0){
        tmp=*x;
        *x=*x + *y;
        *y=tmp * *y;
    }
}
int main()
{
    int a,b;
    printf("veuillez saisir premier un nombre:\n");
    scanf("%d",&a);
    printf("veuillez saisir deuxieme un nombre:\n");
    scanf("%d",&b);
    echange(&a,&b);
    printf(" la valeur de a=%d et la valeur de b=%d",a,b);
    return 0;
}

