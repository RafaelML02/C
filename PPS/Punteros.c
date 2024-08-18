#include <stdio.h> 
#include <limits.h>

int main(){
    int x;
    int *p; //Es un puntero que apunta a una direccion de memoria que contiene un entero
    x= 36;
    p = &x;
    printf("%i\n", *p);
    printf("%i\n", x);
    *p = 23; //Este quiere decir que esta apuntando a 23 y como estaba apuntando a la direccion de memoria de x, pues x pasa a ser 23
    printf("%i\n", *p);
    printf("%i\n", x);
    return 1;
}
