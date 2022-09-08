#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,s;
    s=1;
    for (i=1;i<=8;i++){
    printf("entrer un nombre n:\n");
    scanf("%d",&n);
    if (n<0)
    break;
    s=s*n;
    }
    printf("la somme est %d",s);


    return 0;
}
