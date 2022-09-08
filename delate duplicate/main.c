#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[100],ch;
    int i,cmp,j;
    printf("saisir un mot:\n");
    gets(T);
    printf("entrer un caractere que vous voulez supprimer:\n");
    scanf("%c",&ch);
    cmp=strlen(T);
    for(i=0;i<cmp;i++){
        if(T[i]==ch){
            for(j=i;j<strlen(T);j++)
                T[j]=T[j+1];
                cmp--;
        }
    }
    puts(T);

    return 0;
}

