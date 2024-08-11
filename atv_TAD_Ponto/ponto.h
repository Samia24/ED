#ifndef PONTO_H

typedef struct ponto
{
    float x;
    float y;
}Ponto;

//Protótipos das funções

Ponto *novosPontos();
void criarPontos(Ponto *novosPontos);
void imprimePonto(Ponto *novosPontos);
void moverPonto(Ponto *novosPontos);
float distanciaPonto(Ponto *novosPontos);
void limparTela();



#endif