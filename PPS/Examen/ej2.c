#include "ex202407.h"


int calcular_indice_tabla(char *ele, int N){
    int res = 0;
    int i = 0;

    while(ele[i] != '\0'){
        if(ele[i] != '\n')
            res += (int) ele[i];
        i++;
    }
    
    return res % N;

}
