#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L=6,c=7,i,j;
    for (i=1;i<=L;i++){
        for (j=1;j<=c;j++){
            if ( (i==1 && (j==2 || j==3 || j==5 || j==6)) || i==2 && (j==1 || j==4 || j==7) || (j==i-2)
                || (i==3 && j==7) || (i==4 && j==6) || (i==5 && j==5)  )
                printf("* ");
            else
                printf("  ");
        }
            printf("\n");
    }
    return 0;
}
