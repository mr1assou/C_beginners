#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  T[20];
float s;
int i;
s=1000;
for (i=0;i<20;i++){
    s=s+s*0.02; // si on mis , l'ordinateur ecrase la ligne et passe a l'autre ligne
    T[i]=s;
    printf("la somme de cette année est :%.2f\n",s);
}

    return 0;
}
