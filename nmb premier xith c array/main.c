#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,estpremier,cmp,x;
    printf("entrer un nmbr:\n");
    scanf("%d",&n);
    x=2;
    cmp=0;
        do{
           estpremier=0;
        for(i=2;i=x/2;i++) {
                if (x%i==0){
                    estpremier++;
                }
        }

        if (estpremier==0){
            printf("%d",x);
            cmp++;
        }
        x++;
    }while(cmp<n);

return 0;
}


