#include <stdio.h>
#include <stdlib.h>
#include "pilhaEncadeada.h"

Pilha* criar(){
    Pilha* novaPilha = (Pilha*)malloc(sizeof(Pilha));
    novaPilha->indiceTopo = NULL;
    novaPilha->tamAtual = 0;
    novaPilha->tamMax = 4;
    return novaPilha;
}

No* pushNo(No* no, int valor){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->prox = no;
    return novoNo;
}


void pushPilha(Pilha* pilha, int valor){
    if (pilhaCheia(pilha)) {
        printf("\n>> Pilha cheia !!\n");
        return;
    }
    pilha->indiceTopo = pushNo(pilha->indiceTopo, valor);
    pilha->tamAtual++;
}

No* popNo(No* no){
    No* proxNo = no->prox;
    free(no);
    return proxNo;
}

int popPilha(Pilha* pilha){
    if(pilhaVazia(pilha)){
        return -1;
    }
    int novoIndiceTopo = pilha->indiceTopo->valor;
    pilha->indiceTopo = popNo(pilha->indiceTopo);
    pilha->tamAtual--;
    return novoIndiceTopo;
}


int pilhaVazia(Pilha* pilha){
    if(pilha->tamAtual == 0){
        printf("\n>> Pilha Vazia !!\n");
        return 1;
    }
    return 0;    
}

int pilhaCheia(Pilha* pilha){
    if (pilha->tamAtual == pilha->tamMax){
        return 1;
    }
    return 0;
}
void mostrarPilha(Pilha* pilha, char* title){
    printf("\n##### Pilha: %s #####", title);
    if(pilhaVazia(pilha)){
        return;
    }

    No* atual = pilha->indiceTopo;
    printf("\n{");
    
    while (atual != NULL) {
        printf("\n%d ", atual->valor);  
        atual = atual->prox;         
    }
    
    printf("\n}\n");
}

void buscarItemNaPilha(Pilha* pilha, int valor){
    if(pilhaVazia(pilha)){
        return;
    }
    
    No* atual = pilha->indiceTopo;
    int indice = 0;
    
    while (atual != NULL) {
        if(atual->valor == valor){
            printf("\n>> Item %d encontrado na posicao %d ..\n", valor, indice);
            return;
        }
        atual = atual->prox;
        indice++;
    }
    printf("\n>> Item %d não encontrado ..\n", valor);
    
}
