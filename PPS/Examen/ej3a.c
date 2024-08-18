#include "ex202407.h"

struct tabla_s *crear_tabla_vacia(int tam){
   int i = 0;
   struct tabla_s *res = (struct tabla_s *) malloc (sizeof(struct tabla_s));
   
   if(res == NULL)
    exit(71);
   
   res->tamanno = tam;
   res->array_tabla = (char **) malloc (tam * sizeof(char *));
   
   if(res->array_tabla == NULL){
        free(res); 
        exit(71);
    }

    for (i=0; i<tam; i++){
        res->array_tabla[i] = NULL;
    }

    return res;
}
