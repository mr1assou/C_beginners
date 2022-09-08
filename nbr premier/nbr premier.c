#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("entrer n\n");
    scanf("%d",&n);
    if (n==1 || n==2)
        printf("nombre premier");
    while (n<0){
    printf(" veuillez entrer un nombre posotif n\n");
    scanf("%d",&n);
    }
    for (i=2;i<=n-1;i++){
        if(n%i==0){
                break;
        printf("%d n'est pas un nombre premier",n);
                }
        if(n%i!=0)
            printf("n est un nombre premier");
        break;
    }

    return 0;
}
