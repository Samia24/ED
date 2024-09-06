#include <stdio.h>
#include <stdlib.h>
#include "pilhaEncadeada.h"

int main(){
    printf("\n--- Inicializando a pilha ---\n");
    Pilha* novaPilha = criar();
    printf("\n--- Tentando remover item da pilha ---\n");
    popPilha(novaPilha);
    printf("\n--- Adicionando item na pilha ---\n");
    pushPilha(novaPilha, 12);
    printf("\n--- Mostrando a pilha ---\n");
    mostrarPilha(novaPilha, "Num");
    printf("\n--- Adicionando item na pilha ---\n");
    pushPilha(novaPilha, 3);
    printf("\n--- Mostrando a pilha ---\n");
    mostrarPilha(novaPilha, "Num");
    printf("\n--- Adicionando item na pilha ---\n");
    pushPilha(novaPilha, 10);
    printf("\n--- Mostrando a pilha ---\n");
    mostrarPilha(novaPilha, "Num");
    printf("\n--- Removendo item da pilha ---\n");
    popPilha(novaPilha);
    printf("\n--- Mostrando a pilha ---\n");
    mostrarPilha(novaPilha, "Num");
    printf("\n--- Buscando valor na pilha ---\n");
    buscarItemNaPilha(novaPilha, 20);
    printf("\n--- Buscando valor na pilha ---\n");
    buscarItemNaPilha(novaPilha, 12);


    return 0;
}