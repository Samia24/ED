#ifndef MATRIZ_H

struct matriz{
    int linha;
    int coluna;
    float* v;
};

typedef struct matriz Matriz;
Matriz* criarMatriz(int lin, int col, float* elementos);
void imprimirMatriz(Matriz* matriz);
float acessa(Matriz* matriz, int lin, int col);
void libera(Matriz* matriz);

#endif

