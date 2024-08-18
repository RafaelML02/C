#include "ex202407.h"

void mostrar_tabla(struct tabla_s *ptabla){
    int i;
    
    for(i = 0; i < ptabla->tamanno; i++){
        if(ptabla->array_tabla[i] != NULL) 
            printf("%s\n", ptabla->array_tabla[i]);
    }
}
