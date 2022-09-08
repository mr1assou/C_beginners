#include<stdio.h>
#include<stdlib.h>
void signe(int a,int b){
    if (a*b>0)
        printf("ils ont le meme signe");
    else
        printf("ils ont le signe different");
}
int minimum (int a,int b){
    int min;
        if (a<b)
            min=a;
        else
            min=b;
        return min;
}
int maximum (int a,int b){
    int max;
        if (a<b)
            max=b;
        else
            max=a;
        return max;
}
int main()
{
    int a,b;
    printf("veuillez saisir un nombre:\n");
    scanf("%d",&a);
    printf("veuillez saisir un nombre:\n");
    scanf("%d",&b);
    printf("\n");
    signe(a,b);
    printf("\n");
    printf(" le minimum est %d\n",minimum(a,b));
    printf(" le maximum est %d",maximum(a,b));
return 0;
}
//question pourquoi quand je declare la fonction remplir le programme donne une valeur aleatoire:

