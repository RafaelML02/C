#include<stdio.h>
#include<stdlib.h>

struct x{
    int a;
    int b;
};

int main(){
    struct x aux;
    aux.a = 2;
    aux.b = 5;
    printf("%i\n", aux.a);
    printf("%i\n", aux.b); 

    struct x *p;
    p = (struct x*) malloc(sizeof(struct x));
    p-> a = 20;
    printf("%i\n", p->a);
    return 0;
}