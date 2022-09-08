#include<stdio.h>
#include<stdlib.h>
int main()
{

    int i;
int T[3];
for(i=0;i<3;i++){
printf("veuillez saisir un nombre\n");
scanf("%d",&T[i]);
}
for(i=0;i<=4;i++)
    printf("T[%d]=%d\n",i,T[i]);
printf("**********\n");
}
