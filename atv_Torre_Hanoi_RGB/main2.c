#include <stdio.h>
#include <stdlib.h>
#include "torreHanoi.h"

int main(){
    Pilha* r = criar();
    Pilha* g = criar();
    Pilha* b = criar();


    printf("\n>> BEM-VINDO AO JOGO TORRE DE HANOI <<\n");
    printf(">>>>> R G B <<<<<\n");
    
    int escolha = 1;

    while (escolha != 0){
        printf("\n=> Escolha o nível que deseja jogar =p");
        printf("\n 1. Nivel Basico");
        printf("\n 2. Nivel Intermediario");
        printf("\n 3. Nivel Avancado");
        printf("\n 0. Sair ..");
        printf("\n\n >> Opcao:  ");
        scanf("%d", &escolha);
        limparTela();

        if(escolha == 1){
            r = criar();
            g = criar();
            b = criar();

            pushPilha(r, 'R');
            pushPilha(r, 'G');
            pushPilha(r, 'R');
            pushPilha(r, 'G');
            pushPilha(r, 'B');
            pushPilha(r, 'B');
        }else if(escolha == 2){
            r = criar();
            g = criar();
            b = criar();

            pushPilha(r, 'B');
            pushPilha(r, 'G');
            pushPilha(r, 'R');
            
            pushPilha(g, 'R');
            pushPilha(g, 'B');
            pushPilha(g, 'G');
            
            pushPilha(b, 'G');
            pushPilha(b, 'R');
            pushPilha(b, 'B');
            
        }else if(escolha == 3){
            r = criar();
            g = criar();
            b = criar();

            pushPilha(r, 'B');
            pushPilha(r, 'B');
            pushPilha(r, 'B');
            pushPilha(r, 'B');
            pushPilha(r, 'B');
            pushPilha(r, 'B');
            
            pushPilha(g, 'R');
            pushPilha(g, 'R');
            pushPilha(g, 'R');
            pushPilha(g, 'R');
            pushPilha(g, 'R');
            pushPilha(g, 'R');
            
            pushPilha(b, 'G');
            pushPilha(b, 'G');
            pushPilha(b, 'G');
            pushPilha(b, 'G');
            pushPilha(b, 'G');
            pushPilha(b, 'G');
        }else{
            printf("\n## Satisfacao jogar com voce. Volte Sempre !!!\n");
            escolha = 0;
        }

        if (escolha == 1 || escolha == 2 || escolha == 3){
            char opcao = 's';
            int qtdMovimentos = 0;

            while (opcao == 's'){
                
                mostrarPilhas(r, g, b);

                printf("\nDe onde deseja remover?");
                char pilhaARemover = pedirDadoDaPilha();
                Pilha* pilhaRemocao = selecionarPilha(pilhaARemover, r, g, b);
                printf("\nAonde deseja adicionar?");
                char pilhaAadicionar = pedirDadoDaPilha();
                Pilha* pilhaAdicao = selecionarPilha(pilhaAadicionar, r, g, b);
                popPushPilha(pilhaRemocao, pilhaARemover, pilhaAdicao, pilhaAadicionar);
                qtdMovimentos++;
                
                if(ehVencedor(r, g, b)){    
                    printf("* Qtd de movimentos feitos: %d\n", qtdMovimentos);
                    printf("########################################\n");
                    opcao = 'n';
                }else{
                    printf("\n>> Deseja continuar? (s/n): ");
                    scanf(" %c", &opcao);
                    limparTela();
                }
                
            }
            printf("\n--> De volta ao menu principal ...\n");
        }
        
    }
    
    return 0;
}