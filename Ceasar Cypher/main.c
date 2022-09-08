#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char T[15];
int n,p;
void math(){
    int i;
    printf("saisir un mot:\n");
    gets(T);
    printf("saisir un nombre:\n");
    scanf("%d",&n);
    for(i=0;i<strlen(T);i++){
        if(T[i]<'A' || (T[i]>'Z' && T[i]<'a') || T[i]>'z')
            T[i]=T[i];
        else{
            T[i]=T[i]+n;
            if(T[i]>'Z' && T[i]<'a'){
                p=T[i]-'Z';
                T[i]='A'+p-1;
            }
            if(T[i]>'z'){
                p=T[i]-'z';
                T[i]='a'+p-1;
            }
        }
    }
    printf("voila le tableau apres operation:\n");
    puts(T);
}
int main(){
    math();
    return 0;
}
