#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L,i,j;
printf("entrer un nmbr: ");
scanf("%d",&L);
for (i=1;i<=L-1;i++){
    for(j=1;j<=i;j++){
        if (i==j || (j==1 && i%2!=0) || (i==L-1 && j==2)|| j==L)
            printf("* ");
        else
            printf("  ");
    }
    for (j=1;j<=L*2-i*2;j++){
        printf("  ");
    }
    for (j=1;j<=i;j++){
        if(((i>=1 && i<=L) && j==1) || (i==L && j%2!=0) || (i==L-2 && j==L-2) || (i==L-1 && j==L-2) )
            printf("* ");
        else
            printf("  ");
    }
        printf("\n");
}
    for (i=1;i<=L;i++){
        for (j=1;j<=L;j++)
           if ((i==1 && j%2!=0) || (i==L-j+1) || (j==1 && i%2!=0) || (i==L-3 && j==L-3))
                printf("* ");
            else
                printf("  ");
        for (j=1;j<=L;j++)
            if ((i==j || (i==1 && j%2!=0)) || (j==L-1 && i==L-3 ) || (j==L && i==L-2) )
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}
