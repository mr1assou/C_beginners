#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,T[10],tmp;
    int *p1,*p2;
    p1=T;
    p2=T;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&size);
    for(p1=T;p1<T+size;p1++){
        printf("veuillez saisir un nombre:\n");
        scanf("%d",p1);
    }
    for(p1=T;p1<T+size;p1++){
        for(p2=p1+1;p2<T+size;p2++){
            if(*p1<*p2){
                tmp=*p1;
                *p1=*p2;
                *p2=tmp;
            }
        }
    }
    for(p1=T;p1<T+size;p1++){
        printf("%d  ",*p1);
    }

    return 0;
}

