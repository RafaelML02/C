#include<stdio.h>

int main(){
    int x= 0;
    int a[] = {1,2,3,4,5,6,7,8,9};
    for(int i=0; i<10; i++){
        a[i] = x++;
    }
    int *p = a;

    printf("%p\n",p+3);
    printf("%i", *(p+3));
    return 1;
}