#include<stdio.h>
#include<stdlib.h>
 int main()
{
    int arr1[100],arr2[100],size,res;
    int *p1,*p2;
    printf("veuillez saisir la taille du premier tableau:\n");
    scanf("%d",&size);
    printf("veuillez saisir la taille du deuxieme tabeau:\n");
    scanf("%d",&res);
    p1=arr1;
    p2=arr2;
    for(p1=arr1;p1<arr1+size;p1++){
        printf("saisir un nombre dans le premier tableau:\n");
        scanf("%d",p1);
    }
    printf("le premier tableau est :\n");
        for(p1=arr1;p1<arr1+size;p1++)
            printf("%d  ",*p1);
    printf("\n");
     for(p2=arr2;p2<arr2+res;p2++){
        printf("saisir un nombre dans le deuxieme tableau:\n");
        scanf("%d",p2);
    }
    printf("le premier tableau est :\n");
        for(p2=arr2;p2<arr2+res;p2++)
            printf("%d  ",*p2);
            printf("\n");
    printf("traitement:\n");
    for(p1=arr1+size,p2=arr2;p2<p1;p1++,p2++)
                *p1=*p2;
    for(p1=arr1;p1<arr1+res+size;p1++)
        printf("%d  ",*p1);


return 0;
}
