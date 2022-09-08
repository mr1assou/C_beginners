#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[100],Ti[100][100];
    int i,j,k,cmp;
    printf("saisir un mot:\n");
    gets(T);
    cmp=0;
    for(i=0;i<strlen(T);i++){
        if(T[i]=='\0' || T[i]==' ')
            cmp++;
    }
    printf("le compteur est %d\n",cmp);
    j=0;
    k=0;
    for(i=0;i<strlen(T);i++){
        if(T[i]!=' ' && T[i]!='\0'){
                Ti[k][j]=T[i];
                j++;
    }
        if(T[i]==' ' || T[i]=='\0'){
                Ti[k][j]='\0';
                k++;
                j=0;
            }
    }
    for(i=0;i<cmp;i++){
        for(j=0;j<Ti[j]!='\0';j++){
            printf("%c ",Ti[i][j]);
        }
    printf("\n");
    }
}


