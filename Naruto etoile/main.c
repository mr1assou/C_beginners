#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for (i=1;i<=6;i++){
        for (j=1;j<=6;j++){
            if (j==1 || i==j || j==6)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");

    for (i=1;i<=6;i++){
        for (j=1;j<=6;j++){
            if (i==1 || i==3 || j==1 || j==6)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
printf("\n");

    for (i=1;i<=3;i++){
        for (j=1;j<=6;j++){
            if ( i==1|| j==1 || j==6 || i==3 )
                printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            if (j==1 || j==i )
                printf("* ");
            else
                printf("  ");
            }
            printf("\n");
    }
    printf("\n");
    for (i=1;i<=6;i++){
        for (j=1;j<=6;j++){
            if (i==6 || j==1 || j==1 || j==6)
            printf("* ");
            else
            printf("  ");

        }
        printf("\n");
    }
    printf("\n");

    for (i=1;i<=6;i++){
        for (j=1;j<=5;j++){
            if (i==1 || j==3 )
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
     printf("\n");
    for (i=1;i<=6;i++){
        for (j=1;j<=5;j++){
            if (i==1 || j==1 || j==5 || i==6)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
