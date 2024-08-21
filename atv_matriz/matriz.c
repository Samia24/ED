#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

Matriz* criarMatriz(int lin, int col, float* elementos){
    Matriz* novaMatriz = (Matriz*) malloc(sizeof(Matriz));
    novaMatriz->linha = lin;
    novaMatriz->coluna = col;
    novaMatriz->v = (float*) malloc (lin * col * sizeof(float));

    for (int i = 0; i < lin * col; i++) {
        novaMatriz->v[i] = elementos[i];
    }

    return novaMatriz;
}

void imprimirMatriz(Matriz* matriz){
    if(matriz == NULL){
        printf("\n>> Matriz vazia !");
        return;
    }
    printf("\n[\n");
    for(int i = 0; i < matriz->linha; i++){
        for(int j = 0; j < matriz->coluna; j++){
            int indiceElemento = i * matriz->coluna + j;
            printf("%.0f ", matriz->v[indiceElemento]);
        }
        printf("\n");
    }
    printf(" ]");
}

float acessa(Matriz* matriz, int lin, int col){
    int indiceElemento;

    if(lin < 0 || lin >= matriz->linha || col < 0 || col >= matriz->coluna){
        printf("\n>> Elemento inexistente! \n");
        exit(1);
    }

    indiceElemento = lin * matriz->coluna + col;
    return matriz->v[indiceElemento];
}



void libera(Matriz* matriz){
    free(matriz->v);
    free(matriz);
}