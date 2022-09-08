#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int T[4]={1,2,3,4};
    int i,j,k;
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            for (k=0;k<4;k++){
                if (T[i]==T[k]+T[j]&& k!=i && j!=i && j!=k) {
                    printf("%d\n",T[i]);
                    printf("!!!%d k=%d\n",T[k],k);
                    printf("....%d j=%d\n",T[j],j);
                }
            }
        }
    }





return 0;
}
