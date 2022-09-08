#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char T[10];
    int i,cmp;
    printf("veuillez saisir une phrase:\n");
    gets(T);
    cmp=0;
    for(i=0;i<strlen(T);i++){
        if(ispunct(T[i]))
            cmp++;
    }
    printf("le nombre de ponctuation est %d",cmp);

    return 0;
}
}
