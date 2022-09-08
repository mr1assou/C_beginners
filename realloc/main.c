#include<stdio.h>
#include<stdlib.h>
int main()
{
   int i,*p,size,s,x;
   char rep;
   printf("veuillez saisir la taille du tableau:\n");
   scanf("%d",&size);
   p=malloc(size*sizeof(int));
   for(i=0;i<size;i++){
        printf("saisir un nombre:\n");
        scanf("%d",p+i);
   }
   s=0;
   for(i=0;i<size;i++)
        s=s+*(p+i);
    printf("voila la somme du tableau: %d\n",s);
    printf("voila la moyenne %d\n",s/size);
    printf("voulez ajouter des cases au tableau:\n");
    scanf(" %c",&rep);
    if(rep=='o' || rep=='O'){
            do{
            printf("le nombre de cases que vous voulez ajoutez\n");
            scanf("%d",&x);
            p=realloc(p,(size+x)*sizeof(int));
            for(i=size;i<=size+(x-1);i++){
                printf("entrer le nombre que vous voulez ajouter:\n");
                scanf("%d",p+i);
            }
            size=size+x;
            printf("VOILA TOUTE LE TABLEAU:\n");
            for(i=0;i<size;i++)
                printf("%d   ",*(p+i));
            s=0;
            for(i=0;i<size;i++)
                s=s+*(p+i);
            printf("voila la somme du tableau: %d\n",s);
            printf("voila la moyenne %d\n",s/size);
            printf("voulez ajouter des cases au tableau:\n");
            scanf(" %c",&rep);
            }while(rep=='o' || rep=='O');
    }
}
