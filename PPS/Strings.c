#include<stdio.h>

int main(){
    char *s;
    s = "mundo";
    printf("El string es \"%s\"\n", s);
    printf("La longitud del array s es %lu\n",sizeof(s) / sizeof(s[0]));
    return 0;
}