#include<stdio.h>
#include<stdlib.h>
int main()
{
    int min,s,i,j;
    double k;
    debut:
    printf("veuillez saisir un nombre MINUTES:\n");
    scanf("%d",&min);
    printf("veuillez saisir un nombre SECONDES:\n");
    scanf("%d",&s);
    if(min==0 || s==0)
        goto debut;
    printf("VOICI horloge:\n");
    for(i=min;i>=0;i--){
        for(j=s;j>=0;j--){
            printf("%d:%d\n",i,j);
            for(k=775999999;k>=0;k--){
                k--;
            }
        }
    }


}

