#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"


int main(){

    float elementos[12] = {
        10, 5, 3,
        4, 22, 8,
        2, 17, 45,
        12, 39, 21
    };

    Matriz* novaMatriz = criarMatriz(4, 3, elementos);
    imprimirMatriz(novaMatriz);
    float elemento = acessa(novaMatriz, 1, 2);
    printf("\n\n>> Elemento: %.0f\n", elemento);
    libera(novaMatriz);
    
    return 0;
}


