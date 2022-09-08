#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *res,*s,*p;
    p=malloc(sizeof(int));
    res=malloc(sizeof(int));
    s=malloc(sizeof(int));
    // we worked in heap;
    printf("veuillez saisir un nombre:\n");
    scanf("%d",p);
    *s=0;
    do{
        *res=*p%10;
        if(*res%2!=0)
            *s=*s + *res;
        *p=*p/10;
    }while(*res!=0);
    printf("la somme des chiffres impaires d'un nombre est %d",*s);

}
