#include<stdio.h>
#include<stdlib.h>

struct node{
    int valor;
    struct node *siguiente;
};

void main(){
struct node *cadena;
cadena = (struct node*) malloc (sizeof(struct node));
cadena->valor = 5;
cadena->siguiente = NULL;
}