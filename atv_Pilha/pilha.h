#define MAX 4

struct pilha
{
    int indiceTopo;
    int itens[MAX];
};

typedef struct pilha Pilha;

Pilha* criar();
void push(Pilha* pilha, int valor);
int pop(Pilha* pilha);
int estaVazia(Pilha* pilha);
int estaCheia(Pilha* pilha);
void mostrarPilha(Pilha* pilha, char* title);
int buscarItemNaPilha(Pilha* pilha, int valor);