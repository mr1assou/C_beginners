#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    float *p,s,m;
    printf("veuillez saisir la taille du tableau:\n");
    scanf("%d",&n);
    p=malloc(n*sizeof(float));
    if(p==NULL)
        exit(0);
    else{
    for(i=0;i<n;i++){
        printf("veuillez saisir un nombre T[%d]:\n",i+1);
        scanf("%f",p+i);
        }
    s=0;
    for(i=0;i<n;i++)
        s=s+ *(p+i);
    printf("la somme des nombres est %.f\n",s);
    printf("la moyenne est %.2f",s/n);
    free(p);
    }
}

