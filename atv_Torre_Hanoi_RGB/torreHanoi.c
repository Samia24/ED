#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "torreHanoi.h"


Pilha* criar(){
    Pilha* novaPilha = (Pilha*)malloc(sizeof(Pilha));
    novaPilha->topo = NULL;
    novaPilha->tamAtual = 0;
    novaPilha->tamMax = 10;
    novaPilha->qtdElementos = 0;
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

    pilha->topo = pushNo(pilha->topo, cor);
    pilha->tamAtual++;
    pilha->qtdElementos++;
}

int popPilha(Pilha* pilha){
    if(pilhaVazia(pilha)){
        printf("\n>> Pilha Vazia !!");
        return -1;
    }

    char removido = pilha->topo->cor;
    pilha->topo = popNo(pilha->topo);
    pilha->tamAtual--;
    pilha->qtdElementos--;
    return removido;
}

void popPushPilha(Pilha* pilhaRemover, char pilhaRemov, Pilha* pilhaAdicionar, char pilhaAdd){
    if(pilhaVazia(pilhaRemover)){
        printf("\n>> Pilha %c Vazia !!", pilhaRemov);
        return;
    }

    if (pilhaCheia(pilhaAdicionar)){
        printf("\n>> Pilha %c Cheia !!\n", pilhaAdd);
        return;
    }

    char removido = pilhaRemover->topo->cor;
    pilhaRemover->topo = popNo(pilhaRemover->topo);
    pilhaRemover->tamAtual--;
    pilhaRemover->qtdElementos--;

    pilhaAdicionar->topo = pushNo(pilhaAdicionar->topo, removido);
    pilhaAdicionar->tamAtual++;
    pilhaAdicionar->qtdElementos++;
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

int ehVencedor(Pilha* r, Pilha* g, Pilha* b) {
    No* noR = r->topo;
    No* noG = g->topo;
    No* noB = b->topo;

    int contR = 0, contG = 0, contB = 0;

    
    while (noR != NULL) {
        if (noR->cor != 'R') {
            return 0;  
        }
        contR++;
        noR = noR->prox;
    }

    while (noG != NULL) {
        if (noG->cor != 'G') {
            return 0;  
        }
        contG++;
        noG = noG->prox;
    }

    while (noB != NULL) {
        if (noB->cor != 'B') {
            return 0;  
        }
        contB++;
        noB = noB->prox;
    }

    if (contR == r->qtdElementos && contG == g->qtdElementos && contB == b->qtdElementos) {
        limparTela();
        mostrarPilhas(r, g, b);
        printf("\n########################################");
        printf("\n>> PARABENS !! VOCE VENCEU =) <<\n");
        return 1;  
    }

    return 0;  
}

void mostrarPilhas(Pilha* r, Pilha* g, Pilha* b){
    printf("\n---------------- PILHAS ----------------\n");

    No* noR = r->topo;
    No* noG = g->topo;
    No* noB = b->topo;


    printf("  PILHA R    PILHA G    PILHA B\n\n");

    while (noR != NULL || noG != NULL || noB != NULL) {
        if (noR != NULL) {
            printf("    %c      ", noR->cor);
            noR = noR->prox;
        } else {
            printf("           ");  
        }

        if (noG != NULL) {
            printf("    %c      ", noG->cor);
            noG = noG->prox;
        } else {
            printf("           ");
        }

        if (noB != NULL) {
            printf("    %c      ", noB->cor);
            noB = noB->prox;
        } else {
            printf("           ");
        }

        printf("\n");
    }

    printf("----------------------------------------\n");
    printf("Qtd de elementos por pilha: \n");
    printf("> Pilha R: %d    Pilha G: %d    Pilha B: %d \n", r->qtdElementos, g->qtdElementos, b->qtdElementos);
    printf("----------------------------------------\n");
    printf("*Limite das pilhas: 10 elementos\n");
}

void limparTela(){
    system("cls");
}