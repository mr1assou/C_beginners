#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int max=10,min=3;
    int i=0,valeuraleatoire,tentative,n;
    srand(time(NULL));
    valeuraleatoire= rand()%((max-min+1)+min));
    printf(" l'ordinateur a choisissez un nombre aleatoire\n");
    do {
            printf("entrer un nombre\n");
            scanf("%d",&n);
            if (n>valeuraleatoire)
            {
                printf("le nombre que vous saisi est plus grand\n");
//                printf("le nombre aleatoire si grand %d \n ",valeuraleatoire);
//                printf("((max-min+1)+min): %d\n ",((max-min+1)+min));
//                printf("Modulo: %d\n ",valeuraleatoire%((max-min+1)+min));
//                printf("Division: %d\n ",valeuraleatoire/((max-min+1)+min));
            }
            else
                if (n<valeuraleatoire)
                {
                    printf("le nombre que vous saisi est plus petit\n");
//                    printf("le nombre aleatoire si petit %d ",valeuraleatoire);
//                    printf("((max-min+1)+min): %d\n ",((max-min+1)+min));
//                    printf("Modulo: %d\n ",valeuraleatoire%((max-min+1)+min));
//                    printf("Division: %d\n ",valeuraleatoire/((max-min+1)+min));
                }
            else{
                printf("vous avez choisir la bonne reponse \n");
                printf("le nombre aleatoire est %d \n ",valeuraleatoire);
                break;
            }
            i++;
            }while(i<5 && n!=valeuraleatoire);
            if (i>=5)
        printf("nmbr de tentative est termine");
    return 0;
}
