#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


Lista *inicializaLista(){
    return NULL;
}

Lista *insereInicio(Lista *lista, int valor){
    Lista *novoValor = (Lista *) malloc (sizeof(Lista));
    novoValor->valor = valor;
    novoValor->prox = lista;
    return novoValor;
}

Lista *insereFinal(Lista *lista, int valor){
    if (estaVazia(lista)) {
        return insereInicio(lista, valor);
    }

    Lista* novoValor = (Lista*)malloc(sizeof(Lista));
    novoValor->valor = valor;

    Lista* ultimo = lista;
    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    ultimo->prox = novoValor;
    novoValor->prox = NULL;

    return lista;
}

Lista* remover_inicio(Lista* lista){
    // Verifica se a lista está vazia
    if (estaVazia(lista)) {
        printf("!!! Lista Vazia !!!\n\n");
        return lista;
    }

    //Se não estiver vazia, o próximo receberá o próximo elemento do primeiro, removerá o primeiro e retornará esse próximo.
    Lista* proximo = lista->prox;
    free(lista);

    return proximo;
}

Lista* remover_final(Lista* lista) {
    if (estaVazia(lista)) {
        printf("!!! Lista Vazia !!!\n\n");
        return lista;
    }

    // Se a lista tiver apenas um elemento
    if (lista->prox == NULL) {
        free(lista);
        return NULL;
    }

    // Encontrar o penúltimo elemento
    Lista* penultimo = lista;
    while (penultimo->prox->prox != NULL) {
        penultimo = penultimo->prox;
    }

    // Remover o último elemento
    free(penultimo->prox);
    penultimo->prox = NULL;

    return lista;
}

void imprime(Lista *lista){
    Lista *p;
    int i = 1;
    printf("\n>>> IMPRIMINDO A LISTA <<<\n");
    if (estaVazia(lista)) {
        printf("\n!!! Lista Vazia !!!\n\n");
        return;
    }
    for(p = lista; p != NULL; p = p->prox){
        printf("\n> %dº item: %d\n", i, p->valor);
        i++;
    }
}

int estaVazia(Lista *lista){
    if (lista == NULL){
        return 1;
    }
    return 0;
}