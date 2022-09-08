#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[100];
    int i,j,cmp,max;
    printf("veuillez saisir un mot:\n");
    gets(T);
    printf("la taille du mot est %d\n",strlen(T));
    int frq[strlen(T)];
    for(i=0;i<strlen(T);i++)
        frq[i]=-1;
    for(i=0;i<strlen(T);i++){
            cmp=1;
        for(j=i+1;j<strlen(T);j++){
            if(T[i]==T[j]){
                cmp++;
                frq[j]=0;
            }
        }
            if(frq[i]!=0)
                frq[i]=cmp;
    }
    for(i=0;i<strlen(T);i++)
        printf("%d  ",frq[i]);
        printf("\n");
    max=frq[0];
    for(i=1;i<strlen(T);i++){
        if(frq[i]>max)
            max=frq[i];
    }
    printf("les lettres qui se repetent beaucoup:\n");
    printf("les caracteres qui se repetent\n");
    for(i=0;i<strlen(T);i++){
        if(frq[i]==max)
            printf("%c de nombre %d\n",T[i],frq[i]);
    }
    return 0;
}
