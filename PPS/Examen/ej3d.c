#include "ex202407.h"

void reiniciar_y_liberar_array_de_tabla(struct tabla_s *ptabla) {
    int i;
    int size = ptabla->tamanno;
    
    ptabla->tamanno = 0;

    for(i = 0; i<size; i++) {
        if (ptabla->array_tabla[i] != NULL) 
            free(ptabla->array_tabla[i]);
    }

    free(ptabla->array_tabla);
    ptabla->array_tabla = NULL;
}

