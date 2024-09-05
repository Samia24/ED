#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* criar(){
    Pilha* novaPilha = (Pilha*)malloc(sizeof(Pilha));
    novaPilha->indiceTopo = MAX;
    return novaPilha;
}
void push(Pilha* pilha, int valor){
    if(estaCheia(pilha)){
        printf("\n\n>> Nao eh possível adicionar.. \nPilha Cheia !!\n");
        return;
    }
    printf("\n\n>> Topo antes: %d\n", pilha->indiceTopo);
    pilha->indiceTopo--;
    pilha->itens[pilha->indiceTopo] = valor;
    printf("\n>> Topo atual: %d\n", pilha->indiceTopo);
}

int pop(Pilha* pilha){
    if(estaVazia(pilha)){
        printf("\n-> Nao eh possivel remover.. ");
        return -1;
    }

    printf("\n\n>> Topo antes: %d\n", pilha->indiceTopo);
    int item = pilha->itens[pilha->indiceTopo];
    pilha->indiceTopo++;
    printf("\n>> Topo atual: %d\n", pilha->indiceTopo);
    return item;
}

int buscarItemNaPilha(Pilha* pilha, int valor){

    for(int i = pilha->indiceTopo; i < MAX; i++){
        if(pilha->itens[i] == valor){
            printf("\n> Item %d encontrado na posicao: %d !!", valor, i);
            return i;
        }
    }

    printf("\n> Item %d nao encontrado !!", valor);
    return -1;
}

int estaVazia(Pilha* pilha){
    if(pilha->indiceTopo == MAX){
        return 1;
    }
    return 0;
}

int estaCheia(Pilha* pilha){
    if(pilha->indiceTopo == 0){
        return 1;
    }
    return 0;
}
void mostrarPilha(Pilha* pilha, char* title){
    printf("\n> Pilha: %s <", title);

    if(estaVazia(pilha)){
        printf("\n>> Lista Vazia !!");
    }

    printf("\n[");
    for(int i = pilha->indiceTopo; i < MAX; i++){
        printf("%d ", pilha->itens[i]);
    }
    printf("]");
}