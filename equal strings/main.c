#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[30],Ti[30];
    int i,j,cmp;
    printf("entrer un mot:\n");
    gets(T);
    do{
    printf("entrer un mot:\n");
    gets(Ti);
    if(strlen(T)!=strlen(Ti))
        printf("la taille de deuxieme mot est different au premier mot:\n");
    }while(strlen(T)!=strlen(Ti));
    cmp=0;
    for(i=0;i<strlen(T);i++){
        if(T[i]!=Ti[i])
            cmp++;
    }
    if(cmp==0)
        printf("two strings are equal");
    else
        printf("two strings are note equal");
    return 0;
}

