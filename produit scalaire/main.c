#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[3];
    int min;
    int i;
     for (i=0;i<3;i++){
        printf("entrer nombre  T[%d] \n",i);
        scanf("%d",&T[i]);
     }
    min=T[0];

      for (i=1;i<3;i++){
        if (T[i]<min)
            min=T[i];
      }
      printf("le minimum est %d",min);
    return 0;
}
