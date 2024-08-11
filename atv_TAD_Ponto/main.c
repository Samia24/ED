#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"


int main(){
    Ponto *pontos = novosPontos();

    char menu[] = "\n\n>>>>> Sistema de Pontos <<<<<\n1 - Criar pontos\n2 - Mover pontos \n3 - Calcular distância entre os pontos \n4 - Mostrar pontos \n\n0 - Encerrar \n\n>> Opção: ";
    int opcao = 0;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0){

        if(opcao == 1){
            limparTela();
            criarPontos(pontos);
            printf("\n> Pontos criados com sucesso ! <");
        }else if(opcao == 2){
            limparTela();
            moverPonto(pontos);
            printf("\n> Pontos alterados com sucesso ! <");
        }else if (opcao == 3){
            limparTela();
            float distancia = distanciaPonto(pontos);
            printf("\n>> A distância entre x(%.1f) e y(%.1f) é %.1fcm.", pontos->x, pontos->y, distancia);
        }else if(opcao == 4){
            limparTela();
            imprimePonto(pontos);
        }else{
            limparTela();
            printf("\n>> Escolha uma opção válida !");
        }
        printf("%s", menu);
        scanf("%d", &opcao);
        limparTela();    
    }
    printf("\n>> Sistema encerrado.\n");

    
}