#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[100];
    int i;
    printf("veuillez saisir un mot:\n");
    gets(T);
    for(i=0;i<strlen(T);i++){
        if(T[i+1]-T[i]>=0 && T[i+1]-T[i]<=31)
           break;
        else
            printf("%c",T[i]);
    }
        return 0;
}
