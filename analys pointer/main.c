#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m=300;
    float fx=300.60;
    char cht='z';
    int *p1;
    float *p2;
    char *p3;
    p1=&m;
    p2=&fx;
    p3=&cht;
    printf("--------------\n");
    printf("m=%d\n",m);
    printf("fx=%.2f\n",fx);
    printf("%c\n",cht);
    printf("--------------\n");
    printf("adresse de m:%p\n",&m);
    printf("adresse de m:%p\n",&fx);
    printf("adresse de m:%p\n",&cht);
    printf("--------------\n");
    printf("adresse de m:%d\n",*(&m));
    printf("adresse de m:%f\n",*(&fx));
    printf("adresse de m:%c\n",*(&cht));
    printf("---------------\n");
    printf("adresse de m:%p\n",p1);
    printf("adresse de m:%p\n",p2);
    printf("adresse de m:%p\n",p3);
    printf("----------------\n");
    printf("adresse de m:%d\n",*p1);
    printf("adresse de m:%f\n",*p2);
    printf("adresse de m:%c\n",*p3);





    return 0;
}

