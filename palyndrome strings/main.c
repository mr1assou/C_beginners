#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[10];
    char Ti[10];
    int x;
    printf("saisir un mot:\n");
    gets(T);
    printf("%s\n",strcpy(Ti,T));
    printf("%s\n",strrev(Ti));
    x=strcmp(T,Ti);
    if(x==0)
        printf("le mot %s est palyndrome ",T);
    else
         printf("le mot %spapan'est pas palyndrome ",T);
    return 0;
}

