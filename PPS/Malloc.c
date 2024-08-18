#include<stdlib.h>
#include<stdio.h>

#define N 5

int main(){
    int *p;
    int ** q;
    p = (int *) malloc(N * sizeof(int));
    q = (int **) malloc(N * sizeof(int*));
    free(p);
    free(q);
}