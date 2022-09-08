#include<stdio.h>
#include<stdlib.h>
void supprimer(int n,int T[],int *p3){
    int x,*p1=T,*p2=T;
    for(p1=T;p1<T+n;p1++){
        if(*p1==*p3){
            for(p2=p1;p2<T+n;p2++)
                *p2=*(p2+1);
            p1--;
            T+n --;
        }
    }
    printf("VOICI LE TABLEAU APRES LA SUPRESSION:\n");
    for(p1=T;p1<T+n;p1++)
        printf("%d  ",*p1);
}
int main()
{
    int T[12],n,x;
    int *p1=T,*p2=T,*p3=&x;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&n);
    for(p1=T;p1<T+5;p1++){
        printf("saisir un nombre");
        scanf("%d",p1);
    }
    T[n]=-1;
    printf("veuillez saisir le nombre que vous voulez supprimer\n");
    scanf("%d",p3);
    supprimer(n,T,p3);
}

