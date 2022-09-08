#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char nom[40];
    char prenom[35];
    int note[3];
}etudiant;
int main()
{
    etudiant e1[2];
    int i,s,j;
    for(j=0;j<2;j++){
    printf("saisir le nom\n");
    scanf("%s",e1[j].nom);
    printf("saisir le nom\n");
    scanf("%s",e1[j].prenom);
    printf("saisir 3 maarks\n");
    for(i=0;i<3;i++){
        scanf("%d",&e1[i].note[i]);
    }
    s=0;
    for(i=0;i<3;i++)
        s=s+e1[i].note[i];
    printf("la moyennne de l'etudiant %s %s est %d\n",e1[j].nom,e1[j].prenom,s/3);
    }
}
