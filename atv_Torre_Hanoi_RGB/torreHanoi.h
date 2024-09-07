
struct no
{
    char cor;
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
No* pushNo(No* no, char cor);
No* popNo(No* no);
void pushPilha(Pilha* pilha, char cor);
int popPilha(Pilha* pilha);
void popPushPilha(Pilha* pilhaRemover, Pilha* pilhaAdicionar);
int pilhaVazia(Pilha* pilha);
int pilhaCheia(Pilha* pilha);
char pedirDadoDaPilha();
Pilha* selecionarPilha(char pilhaChar, Pilha* pilhaR, Pilha* pilhaG, Pilha* pilhaB);
void mostrarPilha(Pilha* pilha, char title);