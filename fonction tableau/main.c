#include<stdio.h>
#include<stdlib.h>
int somme(int T[]){
    int i,s;
    s=0;
    for(i=0;i<10;i++)
    s=s+T[i];
    return s;
}
int produit(int T[]){
    int i,m;
    m=1;
    for(i=0;i<10;i++)
    m=m*T[i];
    return m;
}
void moyenne(int T[]){
    int nos;
    nos=somme(T);
    printf("la moyenne est %d",nos/10);
}
void pn( int T[]){
    int i;
    printf("les nombres negatifs sont:\n");
    for(i=0;i<10;i++){
        if (T[i]<0)
            printf("%d ",T[i]);
    }
    printf("\n");
    printf("les nombres positifs sont:\n");
    for(i=0;i<10;i++){
        if (T[i]>0)
            printf("%d ",T[i]);
    }

}
int main()
{
    int T[10],i;
    for(i=0;i<10;i++){
        printf("veuilez saisir un nombre:\n");
        scanf("%d",&T[i]);
    }
    printf("la somme est %d\n",somme(T));
    printf("le produit est %d\n",produit(T));
    moyenne(T);
    pn(T);

return 0;
}
{
// Use IntelliSense to learn about possible attributes.
// Hover to view descriptions of existing attributes.
// For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
"version": "0.2.0",
"configurations": [


    {
        "name": "(gdb) Launch",
        "type": "cppdbg",
        "request": "launch",
        "program": "${workspaceFolder}/bin/main",
        "args": [],
        "stopAtEntry": false,
        "cwd": "${workspaceFolder}",
        "environment": [],
        "externalConsole": true,
        "MIMode": "gdb",
        "miDebuggerPath": "/usr/bin/gdb",
        "setupCommands": [
            {
                "description": "Enable pretty-printing for gdb",
                "text": "-enable-pretty-printing",
                "ignoreFailures": true
            }
        ]
    }
]

}