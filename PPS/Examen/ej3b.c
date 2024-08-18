#include "ex202407.h"


struct tabla_s *mostrar_e_insertar_lineas(FILE *fp, struct tabla_s *ptabla){
    int aux;
    char lineas[81];
    int size = ptabla->tamanno;

    while(fgets(lineas, sizeof(lineas), fp) != NULL){
        fputs(lineas, stdout);

        if(strcmp(lineas, "\n") != 0){

            if(lineas[strlen(lineas) - 1] == '\n') 
                lineas[strlen(lineas) - 1] = '\0';
            
            aux = calcular_indice_tabla(lineas, size);

            if(ptabla->array_tabla[aux] != NULL){
                fputs(lineas, stderr);
                fputs("\n", stderr); 
            } 
            else{
                ptabla->array_tabla[aux] = (char *)malloc((strlen(lineas) + 1) * sizeof(char));
                if (ptabla->array_tabla[aux] == NULL) 
                    exit(71);
                
                strcpy(ptabla->array_tabla[aux], lineas);
            }
        }
    }
    return ptabla;
}

