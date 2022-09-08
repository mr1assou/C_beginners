

int main()
{
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int x,y,z;
void saisi(){
    printf("veuillez saisir 3 nombre:\n");
    scanf("%d%d%d",&x,&y,&z);
}
int descriminant(){
    int delta;
    delta=pow(y,2)-4*x*z;
    return delta;
}
void solution (){
    int res;
    res=descriminant();
    if (x==0)
        printf("erreur\n");
    else
        if (res==0)
        printf(" la solution est %d",-y/2*x);
    else
        if (res<0)
        printf("la solution est l'ensemble vide");
    else
    if (res>0 && x!=0){
        printf("la solution  1 est %d\n",(-y+sqrt(res))/2*x);
        printf("la solution 2 est %d\n",(-y-sqrt(res))/2*x);
    }
}
int main(){
    saisi();
    printf(" le descriminant est %d\n",descriminant());
    solution();
return 0;
}



















