#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char T[100];
    int i;
    printf("saisir un mot:\n");
    gets(T);
    for(i=0;i<strlen(T);i++){
        if(T[i]>=65 && T[i]<=90){
            printf("%c",tolower(T[i]));
        }
        else
            if(T[i]>=97 && T[i]<=122)
            printf("%c",toupper(T[i]));
        else
            printf(" ");
        }
return 0;
}

