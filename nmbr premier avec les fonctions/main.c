#include<stdio.h>
#include<stdlib.h>
void premier (int n){
    int i,x;
    x=0;
    for(i=2;i<n-1;i++){   // dans le cas de 2 on a une boucle vide car le pc va ecraser la boucle
        if (n%i==0)
            x++;
    }
    if (x==0)
        printf("le nombre %d est premier\n",n);
    else
        printf("le nombre %d n'est pas premier\n",n);
}
int main()
{
    int n;
    printf("veuillez saisir un nombre:\n");
    scanf("%d",&n);
    premier(n);

return 0;
}














