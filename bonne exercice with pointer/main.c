#include<stdio.h>
#include<stdlib.h>
// bon exercice
int main()
{
    int T[3],tmp;
    int *p;
    p=T;
    for(p=T;p<T+3;p++){
        printf("veuilez saisir un nombre\n");
        scanf("%d",p);
    }
    for(p=T+2;p>T;p--){
        tmp=*p;
        *p=*(p-1);
        *(p-1)=tmp;
    }
    for(p=T;p<T+3;p++)
        printf("%d  ",*p);

}

