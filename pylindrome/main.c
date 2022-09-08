#include <stdio.h>
#include <stdlib.h>

int main()
{
      int r=0,i,n,p;
        printf("entrer un nombre\n");
        scanf("%d",&n);
        p=n;
        do{
        r=r*10+n%10;
        n=n/10;
        }while (n!=0);
        // car n change donc il va prendre dernier valeur
        if (r==p)
            printf("nmbr est palindrome");
        else
            printf("nmbr n'est pas palindrome");
    return 0;
}
