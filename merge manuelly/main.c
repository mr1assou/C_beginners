#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[30],Ti[30];
    int i,j,x;
    printf("veuillez entrer un mot:\n");
    gets(T);
    printf("veuillez entrer un deuxieme mot:\n");
    gets(Ti);
    printf("%d\n",strlen(Ti));
    printf("%d\n",strlen(T));
    x=strlen(Ti)+strlen(T);
    for(i=0,j=strlen(Ti);i<strlen(T);i++,j++){
            Ti[j]=T[i];
    }
    //because size of Ti change that why we write x before analys
    Ti[x]='\0';
    puts(Ti);
    return 0;
}

