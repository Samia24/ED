#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha* minhaPilha = criar();
    printf("\n##### PUSH'S #####");
    printf("\nInserindo primeiro valor.. "); 
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    push(minhaPilha, 2);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "N");
    
    printf("\n\nInserindo segundo valor.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    push(minhaPilha, 10);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\nInserindo terceiro valor.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    push(minhaPilha, 31);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\nInserindo quarto valor.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    push(minhaPilha, 1);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\nDeve mostrar Pilha Cheia.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    push(minhaPilha, 200);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\n-------------------------------------------\n");

    printf("\n##### Buscando Item na Pilha #####");
    buscarItemNaPilha(minhaPilha, 10);
    buscarItemNaPilha(minhaPilha, 12);

    printf("\n\n-------------------------------------------\n");

    printf("\n##### POP'S #####");
    printf("\nRemovendo primeiro valor.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    pop(minhaPilha);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\nRemovendo segundo valor.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    pop(minhaPilha);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\nRemovendo terceiro valor.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    pop(minhaPilha);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\nRemovendo quarto valor.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    pop(minhaPilha);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");
    
    printf("\n\nDeve mostrar Pilha Vazia.. ");
    printf("\n> Pilha ANTES.. ");
    mostrarPilha(minhaPilha, "Numeros");
    pop(minhaPilha);
    printf("\n> Pilha ATUAL.. ");
    mostrarPilha(minhaPilha, "Numeros");

    return 0;
}