#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[100],Ti[100];
    int n,i,x,cmp,pos,nbr;
    printf("saisir un mot:\n");
    gets(T);
    cmp=0;
    x=0;
    for(i=0;i<strlen(T);i++){
            if(T[i]!=' '){
            Ti[cmp]=T[i];
            cmp++;
        }
        if(T[i]==' ')
            x++;
    }
    Ti[strlen(T)-x]='\0';
    puts(Ti);
    printf("veuillez sasir la position que vous voulez:\n");
    scanf("%d",&pos);
    printf("veuillez saisir le nombre d'alphabet que vous voulez voir:\n");
    scanf("%d",&nbr);
    for(i=pos-1;i<(pos-1+nbr);i++)
        printf("%c",Ti[i]);

return 0;
}

