#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char adn_ali[]="kxsuhhgdygdeygchccccchdCATA";
    char adn_anass[]="fgsfaijcnjrgrejgijgi";
    char adn_mehdi[]="aaaaahbdhbhdb";
    char adn_sara[]="dejfjbhbfhvrfhvehvfh";
    char *adn_coupable="CATA";
    if(strstr(adn_mehdi,adn_coupable)!='\0')
        printf("mehdi est le coupable");
    else
        if(strstr(adn_ali,adn_coupable)!='\0')
        printf("ali est le coupable");
    else
        if(strstr(adn_anass,adn_coupable)!='\0')
        printf("anass est le coupable");
    else
        if(strstr(adn_sara,adn_coupable)!='\0')
        printf("sara est le coupable");




    return 0;
}
