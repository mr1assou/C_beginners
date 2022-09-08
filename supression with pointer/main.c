#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[100],ch;
    int n;
    char *p1,*p2;
    p1=T;
    p2=T;
    printf("saisir un mot:\n");
    gets(T);
    printf("la taille du mot est %d\n",strlen(T));
    n=strlen(T);
    printf("entrer le caractere que vous voulez supprimer:\n");
    ch=getchar();
    for(p1=T;p1<T+n;p1++){
        if(*p1==ch){
            for(p2=p1;p2<T+n;p2++)
                *p2=*(p2+1);
        }
    }
    puts(T);
    return 0;
}

