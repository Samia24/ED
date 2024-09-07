#include <stdio.h>
#include <stdlib.h>
#include "torreHanoi.h"

int main(){
    Pilha* r = criar();
    Pilha* g = criar();
    Pilha* b = criar();

    printf("\n>> BEM-VINDO AO JOGO TORRE DE HANOI <<\n");
    printf(">>>>> R G B <<<<<\n");
    
    pushPilha(r, 'R');
    pushPilha(r, 'G');
    pushPilha(r, 'R');
    pushPilha(r, 'G');
    pushPilha(r, 'B');
    pushPilha(r, 'B');
    
    printf("\nDadas as pilhas ...\n");
    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');
    mostrarPilha(b, 'B');

    char opcao = 's';

    while (opcao == 's'){
        printf("\nDe onde deseja remover?");
        char pilhaARemover = pedirDadoDaPilha();
        Pilha* pilhaRemocao = selecionarPilha(pilhaARemover, r, g, b);
        printf("\nAonde deseja adicionar?");
        char pilhaAadicionar = pedirDadoDaPilha();
        Pilha* pilhaAdicao = selecionarPilha(pilhaAadicionar, r, g, b);
        popPushPilha(pilhaRemocao, pilhaAdicao);
        
        printf("\n---------- PILHAS ----------\n");
        mostrarPilha(r, 'R');
        mostrarPilha(g, 'G');
        mostrarPilha(b, 'B');

        printf("\n>> Deseja continuar? (s/n): ");
        scanf(" %c", &opcao);
    }

    printf("\n>> Satisfacao jogar com voce. Volte Sempre !!\n");
    
    

       

    return 0;
}