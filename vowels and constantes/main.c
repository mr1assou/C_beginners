#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char T[20],Ti[20];
    int i,cmp,cnst,vo;
    printf("saisir un mot:\n");
    gets(T);
    cnst=0;
    vo=0;
    for(i=0;i<strlen(T);i++){
        if(T[i] =='a' || T[i]=='e' || T[i]=='i' || T[i]=='o' || T[i]=='u' || T[i]=='A' || T[i]=='E' || T[i]=='I' || T[i]=='O' || T[i]=='U')
            vo++;
        if(((T[i]>='a' && T[i]<='z') || (T[i]>='A' && T[i]<='Z')) && (T[i] !='a' && T[i]!='e' && T[i]!='i' && T[i]!='o' && T[i]!='u' && T[i]!='A' && T[i]!='E' && T[i]!='I' && T[i]!='O' && T[i]!='U'))
            cnst++;
    }
    printf("le nombre des voyelles %d\n",vo);
    printf("le nombres des constantes est %d\n",cnst);
    return 0;
}

