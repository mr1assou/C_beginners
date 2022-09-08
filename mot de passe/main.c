#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mt,i;
    char rep,tmp;

    printf("veuillez entrer mot de passe:\n");
    scanf("%d",&mt);
    i=1;
    while (mt!=1200 && i<3){
    printf("veuillez entrer mot de passe:\n");
    scanf("%d",&mt);
    i+=1;
    }
    if (mt==1200){
        printf("bienvenue dans votre compte\n");
    }
    if (mt!=1200){
    printf("compte bloque\n");
    printf("Vous voulez passer un quiz (Oui/Non):\n");
    scanf(" %c",&rep);

        if(rep=='n')
            printf("Au revoir\n");
        if(rep=='o'){
            printf("quelle est la capitale du MAROC:\n");
            scanf(" %c",&tmp);
        }
            if (tmp='rabat')
                // prk je peux pas mettre == au lieu de = comme l'exemple d'avant de scannf un seul caractere
                printf("correct, bien");
            else
                printf("desole, incorrect");

    }
    return 0;
}
