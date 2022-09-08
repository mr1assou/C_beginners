#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[100],Ti[100],i;
    int n,x,cmp;
    printf("programme de distance de hamen:\n");
    do{
    printf("entrer le premier mot:\n");
    gets(T);
    printf("entrer le deuxieme mot:\n");
    gets(Ti);
    n=strlen(T);// la fonction cmp in compare le code ascii
    x=strlen(Ti);
    printf("%d : %d\n",n,x);
    if(x!=n)
        printf("impossible de calculer la distance car la taille est different.....\n");
    }while(x!=n);
    printf("on peut calculer la distance\n");
    cmp=0;
    for(i=0;i<n;i++){
        if(T[i]!=Ti[i])
            cmp++;
    }
    printf("la distance entre les deux est %d",cmp);
    return 0;
}

