#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float a,b;
    printf("entrer un operateur:\n");
    scanf("%c",&op);
    while (op!='+' && op!='-' && op!='*' && op!='/'){
    printf("entrer un operateur:\n");
    scanf("%c",&op);
    }
    printf("entrer a et b:\n");
    scanf("%f%f",&a,&b);
    if(op='+')
        printf("la somme est:%f",a+b);
    else if (op=='-')
        printf("la soustraction est:%f",a-b);
    else if(op=='*')
        printf("la multiplication est:%f",a*b);
    else if(op=='/')
        printf("la division est:%f",a/b);

    return 0;
}
