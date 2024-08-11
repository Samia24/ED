#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

Ponto *novosPontos(){
    Ponto *novosPontos = (Ponto *) malloc (sizeof(Ponto));
}

void criarPontos(Ponto *novosPontos){
    printf("\nInforme o valor de x: ");
    scanf("%f", &novosPontos->x);

    printf("\nInforme o valor de y: ");
    scanf("%f", &novosPontos->y);
}

void imprimePonto(Ponto *novosPontos){
    printf("\n>> Ponto x: %.1f cm.", novosPontos->x);
    printf("\n>> Ponto y: %.1f cm.", novosPontos->y);
}

void moverPonto(Ponto *novosPontos){
    printf("\nInforme o novo valor de x: ");
    scanf("%f", &novosPontos->x);

    printf("\nInforme o novo valor de y: ");
    scanf("%f", &novosPontos->y);
}

float distanciaPonto(Ponto *novosPontos){
    if (novosPontos->x >= novosPontos->y){
        return (novosPontos->x) - (novosPontos->y); 
    }else{
        return (novosPontos->y) - (novosPontos->x);
    }
}

void limparTela(){
    system("cls");
}