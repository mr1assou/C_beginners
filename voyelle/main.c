#include <stdio.h>
#include <stdlib.h>

int main()
{
     int T[5];
     int i,s,p;
     for (i=0;i<5;i++){
        printf("entrer note T[%d]:\n",i);
        scanf("%d",&T[i]);
     }
     s=0;
     p=1;
      for (i=0;i<5;i++){
            s=s+T[i];
            p=p*T[i];
      }
      printf("la somme est %d\n",s);
      printf("la moyenne est %d\n",s/5);
    printf("le produit est %d",p);
    return 0;
}
