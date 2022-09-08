#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c,L,j;
    printf("entrer ligne et collone");
    scanf("%d%d",&L,&c);
    for (i=1;i<=L;i++){
        for (j=1;j<=c;j++){
            if (i==1 || j==1 || j==c || j==c/2)
                printf("* ");
            else
                printf("  ");
        }
    printf("\n");

        for (j=1;j<=L*2;j++)
            printf("  ");
        for (j=1;j<=c;j++){
            if ( ((j==1 || j==c)&&i!=1) || (i==1 &&(j>1 && j<c) ) || i==L/2     )
                printf("* ");
            else
                printf("  ");
        }
    printf("\n");

}
    return 0;
}
