#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[10];
    float s,m;
    int i,nbr;
    debut:
    for (i=0;i<10;i++){
        printf("entrer la note:\n");
        scanf("%f",&T[i]);
    }
    s=0;
     for (i=0;i<10;i++){
            s=s+T[i];
     }
     m=s/10;
     nbr=0;
      for (i=0;i<10;i++){
            if (T[i]>m)
           nbr+=1;
      }
      printf("le nombre d'étudiant supérieur a la moyenne est: %d",nbr);
    goto debut;
    return 0;
}
