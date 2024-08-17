#ifndef LISTA_H

struct lista
{
    int valor;
    struct lista* prox;
};

//Protótipo das funções
typedef struct lista Lista;

Lista *inicializaLista();
Lista *insereInicio(Lista *lista, int valor);
Lista *insereFinal(Lista *lista, int valor);
Lista* remover_inicio(Lista* lista);
Lista* remover_final(Lista* lista);
int estaVazia(Lista *lista);
void imprime(Lista *lista);




#endif