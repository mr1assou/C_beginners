#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void supression(char ch,char T[]){
    int i,j;
    for(i=0;i<strlen(T);i++){
        if(T[i]==ch){
            for(j=i;j<strlen(T);j++)
                T[j]=T[j+1];
        }
    }
    puts(T);
}
int main()
{
    char T[100],ch;
    int i,j;
    printf("entrer un mot:\n");
    gets(T);
    printf("entrer un charater:\n");
    ch=getchar();
    supression(ch,T);
    return 0;
}

