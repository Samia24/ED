#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    Lista *lista = inicializaLista();

    imprime(lista);
    printf("\n--> Inserindo valores no início da lista (10, 2 e 6)...\n");
    lista = insereInicio(lista, 10);
    lista = insereInicio(lista, 2);
    lista = insereInicio(lista, 6);
    imprime(lista);
    printf("\n--> Inserindo valores no final da lista (25)...\n");
    lista = insereFinal(lista, 25);
    imprime(lista);
    printf("\n--> Removendo valor no final da lista (25)...\n");
    lista = remover_final(lista);
    imprime(lista);
    printf("\n--> Removendo valor no início da lista (6)...\n");
    lista = remover_inicio(lista);
    imprime(lista);


    return 0;
}