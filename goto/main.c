#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    debut:
    printf("entrer un nombre n:\n");
    scanf("%d",&n);
    if (n<1 || n>5)
    goto debut;
    printf("bravo un bon nombre");
    return 0;
}
