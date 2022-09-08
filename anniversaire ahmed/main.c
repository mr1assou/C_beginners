#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T[20];
    float s;
    int i;
    s=1000;
    for (i=0;i<20;i++){
        s=s+s*0.02;
        T[i]=s;
    }
    for (i=0;i<20;i++){
            printf(" la somme est %f\n",T[i]);
    }



    return 0;
}
