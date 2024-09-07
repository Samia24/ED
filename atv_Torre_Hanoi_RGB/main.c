#include <stdio.h>
#include <stdlib.h>
#include "torreHanoi.h"

int main(){
    Pilha* r = criar();
    Pilha* g = criar();
    Pilha* b = criar();

    pushPilha(r, 'G');
    pushPilha(r, 'R');
    pushPilha(r, 'B');
    pushPilha(r, 'R');
    pushPilha(r, 'B');
    pushPilha(r, 'G');
    
    printf("\n--> Mostrando pilha R ... \n");
    mostrarPilha(r, 'R');
    printf("\n--> Mostrando pilha G ... \n");
    mostrarPilha(g, 'G');
    printf("\n--> Mostrando pilha B ... \n");
    mostrarPilha(g, 'B');
    
    printf("\n--> Push na pilha R ... \n");
    pushPilha(r, 'R');
    mostrarPilha(r, 'R');

    printf("\n--> Remove da pilha R e adiciona na pilha G ... \n");
    printf("\nAntes ...");
    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');
    popPushPilha(r, g);
    printf("\nDepois ...");
    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');
    
    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha R e adiciona na pilha B ... \n");
    printf("\nAntes ...");
    mostrarPilha(r, 'R');
    mostrarPilha(b, 'B');
    popPushPilha(r, b);
    printf("\nDepois ...");
    mostrarPilha(r, 'R');
    mostrarPilha(b, 'B');
    
    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha R e adiciona na pilha G ... \n");
    printf("\nAntes ...");
    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');
    popPushPilha(r, g);
    printf("\nDepois ...");
    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');

    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha R e adiciona na pilha B ... \n");
    printf("\nAntes ...");
    mostrarPilha(r, 'R');
    mostrarPilha(b, 'B');
    popPushPilha(r, b);
    printf("\nDepois ...");
    mostrarPilha(r, 'R');
    mostrarPilha(b, 'B');
    
    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha R e adiciona na pilha B ... \n");
    printf("\nAntes ...");
    mostrarPilha(r, 'R');
    mostrarPilha(b, 'B');
    popPushPilha(r, b);
    printf("\nDepois ...");
    mostrarPilha(r, 'R');
    mostrarPilha(b, 'B');
    
    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha G e adiciona na pilha B ... \n");
    printf("\nAntes ...");
    mostrarPilha(g, 'G');
    mostrarPilha(b, 'B');
    popPushPilha(g, b);
    printf("\nDepois ...");
    mostrarPilha(g, 'G');
    mostrarPilha(b, 'B');

    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha R e adiciona na pilha G ... \n");
    printf("\nAntes ...");
    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');
    popPushPilha(r, g);
    printf("\nDepois ...");
    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');

    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha B e adiciona na pilha R ... \n");
    printf("\nAntes ...");
    mostrarPilha(b, 'B');
    mostrarPilha(r, 'R');
    popPushPilha(b, r);
    printf("\nDepois ...");
    mostrarPilha(b, 'B');
    mostrarPilha(r, 'R');
    
    printf("\n-----------------------------------------------\n");

    printf("\n--> Remove da pilha B e adiciona na pilha R ... \n");
    printf("\nAntes ...");
    mostrarPilha(b, 'B');
    mostrarPilha(r, 'R');
    popPushPilha(b, r);
    printf("\nDepois ...");
    mostrarPilha(b, 'B');
    mostrarPilha(r, 'R');
    
    printf("\n-----------------------------------------------\n");

    mostrarPilha(r, 'R');
    mostrarPilha(g, 'G');
    mostrarPilha(b, 'B');

    return 0;
}