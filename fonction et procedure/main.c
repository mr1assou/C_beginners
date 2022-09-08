#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct service
 {
int id_ser;
char libelle[10] ;
char dep [10] ;
}service;
typedef struct employe
 {
int cnss;
char nom [15];
char prenom[15];
char adresse[15];
int cin;
service s;
}employe;

void affiche(employe e ){
printf("%d",e.cnss);
printf("%d",e.note);
printf("%s",e.adresse);
printf("les informations de service est:");
printf("%d",e.s.id_ser);
printf("%d",e.s.adresse);
printf("%s",e.s.dep);
}
void recherche (int cnss,employe)
if (cnss==e.cnss)
    printf("%s",e.nom);
    printf("le service de cnss est");
    printf("%d",e.id_ser);
    printf("%d",e.s.adresse);
    printf("%s",e.s.dep);
    }
else
    ("l'employé que vous cherche est absent");
    }
void ajouter(employe e){
    printf("entrer le nom");
    scanf("%s",e.nom);
    printf("entrer le prenom");
    scanf("%s",e.prenom);
    printf("entrer cnss");
    scanf("%d",e.cnss);
    printf("entrer adresse");
    scanf("%s",e.adresse);
    printf("entrer cin");
    scanf("%d",e.cin);
    print("veuillez entrer le service");
    scanf("%d",e.s.id_ser);
    printf("entrer libellé");
    scanf("%s",e.s.lib);
    printf("veuillez entrer departement");
    scanf("%s",e.s.dep);

int main(){
    int E[20];
    int i,cnss;
    for (i=0;i<20;i++){
        ajouter E[i];
        }
    printf("entrer cnss employer:");
    scanf("%d",cnss);
    while(cnss!=E[i].cnss){
    printf("entrer cnss employer:");
    scanf("%d",cnss);
    }
    for (i=0;i<20;i++){
        rechercher(cnss,E[i]);
    }for  (i=0;i<20;i++){
        affiche (E[i]);
    }
    "cls"
}



}
return 0;
