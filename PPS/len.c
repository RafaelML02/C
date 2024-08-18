#include<stdio.h>
#include<stddef.h>

int aux(int arg[], size_t len){
    
    int x = 0;
    for(int i=0; i<len; i++){
        arg[i] = x++;
        printf("%i\n", arg[i]);
    }
}

int main(){
    int x;
    scanf("%i", &x);
    int abc[x];
    aux(abc,x);
    return 1;
}