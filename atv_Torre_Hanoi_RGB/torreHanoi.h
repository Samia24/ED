
struct no
{
    char cor;
    struct no* prox;
};

typedef struct no No;

struct pilha
{
    No* topo;
    int tamAtual;
    int tamMax;
    int qtdElementos;
};

typedef struct pilha Pilha;

Pilha* criar();
No* pushNo(No* no, char cor);
No* popNo(No* no);
void pushPilha(Pilha* pilha, char cor);
int popPilha(Pilha* pilha);
void popPushPilha(Pilha* pilhaRemover, char pilhaRemov, Pilha* pilhaAdicionar, char pilhaAdd);
int pilhaVazia(Pilha* pilha);
int pilhaCheia(Pilha* pilha);
char pedirDadoDaPilha();
Pilha* selecionarPilha(char pilhaChar, Pilha* pilhaR, Pilha* pilhaG, Pilha* pilhaB);
int ehVencedor(Pilha* r, Pilha* g, Pilha* b);
void limparTela();
void mostrarPilhas(Pilha* r, Pilha* g, Pilha* b);