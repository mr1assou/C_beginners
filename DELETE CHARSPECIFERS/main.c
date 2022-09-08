#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[30];
    int i,j,taille;
    printf("saisir un mot:\n");
    gets(T);
    taille=strlen(T);
    for(i=0;i<taille;i++){
        if((T[i]<'a' && T[i]>'Z') || T[i]<'A' || T[i]>'z'){
           for(j=i;j<taille;j++){
            T[j]=T[j+1];
           }
        i--;
        taille--;
        }
    }
    puts(T);

    return 0;
}

