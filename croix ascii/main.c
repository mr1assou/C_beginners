#include<stdio.h>
#include<stdlib.h>
int main()
{
    int L,i,j,x,p;
    printf("veuillez saisir nombre de lignes:\n");
    scanf("%d",&L);
    p=65;
    x=65;
    for(i=1;i<=L;i++){
        for(j=1;j<=L;j++){
            if(j==L/2+1 || i==L/2+1){
                printf("%c ",x);
                x++;
                p++;
              if(i==3 && j==5)
                p=69;
            }
            else
                printf("  ");
        }
        if(i==L/2){
            x=65;
            p=65;
        }
        x=p;
      printf("\n");

    }
}

