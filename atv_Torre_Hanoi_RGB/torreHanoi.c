#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "torreHanoi.h"


Pilha* criar(){
    Pilha* novaPilha = (Pilha*)malloc(sizeof(Pilha));
    novaPilha->indiceTopo = NULL;
    novaPilha->tamAtual = 0;
    novaPilha->tamMax = 6;
    return novaPilha;
}

No* pushNo(No* no, char cor){
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->cor = cor;
    novoNo->prox = no;
    return novoNo;
}

No* popNo(No* no){
    No* novoTopo = no->prox;
    free(no);
    return novoTopo;
}

void pushPilha(Pilha* pilha, char cor){
    if (pilhaCheia(pilha)){
        printf("\n>> Pilha Cheia !!\n");
        return;
    }

    pilha->indiceTopo = pushNo(pilha->indiceTopo, cor);
    pilha->tamAtual++;
}

int popPilha(Pilha* pilha){
    if(pilhaVazia(pilha)){
        printf("\n>> Pilha Vazia !!");
        return -1;
    }

    char removido = pilha->indiceTopo->cor;
    pilha->indiceTopo = popNo(pilha->indiceTopo);
    pilha->tamAtual--;
    return removido;
}

void popPushPilha(Pilha* pilhaRemover, Pilha* pilhaAdicionar){
    if(pilhaVazia(pilhaRemover)){
        printf("\n>> Pilha %c Vazia !!", pilhaRemover->indiceTopo->cor);
        return;
    }

    char removido = pilhaRemover->indiceTopo->cor;
    pilhaRemover->indiceTopo = popNo(pilhaRemover->indiceTopo);
    pilhaRemover->tamAtual--;

    if (pilhaCheia(pilhaAdicionar)){
        printf("\n>> Pilha %c Cheia !!\n", pilhaAdicionar->indiceTopo->cor);
        return;
    }

    pilhaAdicionar->indiceTopo = pushNo(pilhaAdicionar->indiceTopo, removido);
    pilhaAdicionar->tamAtual++;
}

int pilhaVazia(Pilha* pilha){
    if(pilha->tamAtual == 0){
        return 1;
    }
    return 0;
}

int pilhaCheia(Pilha* pilha){
    if(pilha->tamAtual == pilha->tamMax){
        return 1;
    }
    return 0;
}

char pedirDadoDaPilha(){
    char pilha;
    printf("\n> Informe a pilha (R, G ou B): ");
    scanf(" %c", &pilha);
    return toupper(pilha);
}

Pilha* selecionarPilha(char pilhaChar, Pilha* pilhaR, Pilha* pilhaG, Pilha* pilhaB){
    if (pilhaChar == 'R') {
        return pilhaR;
    } else if (pilhaChar == 'G') {
        return pilhaG;
    } else if (pilhaChar == 'B') {
        return pilhaB;
    } else {
        printf("\n>> Pilha inválida: %c", pilhaChar);
        return NULL;
    }
}

void mostrarPilha(Pilha* pilha, char title){

    printf("\n>>>>>>>>>> PILHA %c <<<<<<<<<<", title);

    if(pilhaVazia(pilha)){
        printf("\n>> Pilha %c Vazia !!\n", title);
        return;
    }

    No* noAtual = pilha->indiceTopo;
    printf("\n{");

    while(noAtual != NULL){
        printf("\n%c", noAtual->cor);
        noAtual = noAtual->prox;
    }

    printf("\n}\n");

}