#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,p;
    n=1;
    for(i=1;i<=4;i++){
            p=n;
        for(j=1;j<=4;j++){
            printf("%d  ",p);
            p+=i;
        }
        n++;
        printf("\n");
    }
}


