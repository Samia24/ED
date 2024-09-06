

struct no
{
    int valor;
    struct no* prox;
};

typedef struct no No;

struct pilha
{
    No* indiceTopo;
    int tamAtual;
    int tamMax;
};

typedef struct pilha Pilha;


Pilha* criar();
No* pushNo(No* no, int valor);
void pushPilha(Pilha* pilha, int valor);
No* popNo(No* no);
int popPilha(Pilha* pilha);
int pilhaVazia(Pilha* pilha);
int pilhaCheia(Pilha* pilha);
void mostrarPilha(Pilha* pilha, char* title);
void buscarItemNaPilha(Pilha* pilha, int valor);