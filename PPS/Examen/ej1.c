#include "ex202407.h"

FILE *argumentos_y_entrada(int argc, char **argv){
    switch (argc) {
        case 1:
            return stdin;
        case 2: {
            FILE *aux = fopen(argv[1], "r");
            if (aux == NULL) {
                return NULL;
            }
            return aux;
        }
        default:
            return NULL;
    }
}





