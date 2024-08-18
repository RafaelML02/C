#include<stdio.h>
#define N 10 //Tener en cuenta que es asi como se define una constante

int main(){
    int x = 0;
    int array[N];
    for(int i=0 ; i<N; i++){
        array[i] = x++; 
    }
    for(int i=0 ; i<N; i++){
        printf("%i\n", array[i]); 
    }
    return 1;
}