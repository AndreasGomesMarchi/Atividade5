#include <stdio.h>
#include <stdlib.h>

int main(){
    int m=0, sb;

    while(m != 5){

        printf("\n--------------------------\n");
        printf("Menu Restaurante John Cano\n");
        printf("--------------------------\n\n");

        printf("Opcoes:\n");
        printf("[1]Hamburguer campeao da libertadores;\n");
        printf("[2]Don Fredom fritas artilheiras;\n");
        printf("[3]Paredao Fabio taysty bread;\n");
        printf("[4]Menu adicional;\n");
        printf("[5]Sair para assitir o Flusao;\n");
        printf("Escolha sua opcao: "); 
        scanf("%d", &m);

        switch(m){
            case 1:
                printf("\nVoce escolheu o prato: Hamburguer campeao da libertadores!\n\n");
                printf("Escolha um acompanhamento:\n");
                printf("[1]Suco tricolor;\n");
                printf("[2]Thiago fritas da Silva;\n");
                printf("[3]Nuggets do Assis;\n");
                printf("[4]Nada a adicionar na vitoria do flusao;\n");
                scanf("%d", &sb);

                switch (sb){
                    case 1:
                        printf("\nVoce escolheu o Hamburguer campeao da libertadores com o Suco tricolor de acompanhamento!\n\n");
                    break;

                    case 2:
                        printf("\nVoce escolheu o Hamburguer campeao da libertadores com o Thiago fritas da Silva!\n\n");
                    break;

                    case 3:
                        printf("\nVoce escolheu o Hamburguer campeao da libertadores com o Nuggets do Assis!\n\n");
                    break;

                    case 4:
                        printf("\nVoce escolheu o hamburguer campeao da libertadores sem nenhum acompanhamento!\n\n");
                    break;

                    default:
                        printf("\nOpcao invalida!\n\n");
                    break;
                
                }

            break;

            case 2:
                printf("\nVoce escolheu o prato: Don Fredom fritas artilheiras!\n\n");
                printf("Escolha um acompanhamento:\n");
                printf("[1]Suco tricolor;\n");
                printf("[2]Thiago fritas da Silva;\n");
                printf("[3]Nuggets do Assis;\n");
                printf("[4]Nada a adicionar na vitoria do flusao;\n");
                scanf("%d", &sb);

                switch (sb){
                    case 1:
                        printf("\nVoce escolheu o Don fredom fritas artilheiras com o Suco tricolor de acompanhamento!\n\n");
                    break;

                    case 2:
                        printf("\nVoce escolheu o Don fredom fritas artilheiras com o Thiago fritas da Silva!\n\n");
                    break;

                    case 3:
                        printf("\nVoce escolheu o Don fredom fritas artilheiras com o Nuggets do Assis!\n\n");
                    break;

                    case 4:
                        printf("\nVoce escolheu o Don fredom fritas artilheiras sem nenhum acompanhamento!\n\n");
                    break;

                    default:
                        printf("\nOpcao invalida!\n\n");
                    break;
                
                }

            break;

            case 3:
                printf("\nVoce escolheu o prato: Paredao Fabio taysty bread!\n\n");
                printf("Escolha um acompanhamento:\n");
                printf("[1]Suco tricolor;\n");
                printf("[2]Thiago fritas da Silva;\n");
                printf("[3]Nuggets do Assis;\n");
                printf("[4]Nada a adicionar na vitoria do flusao;\n");
                scanf("%d", &sb);

                switch (sb){
                    case 1:
                        printf("\nVoce escolheu o Paredao Fabio taysty bread com o Suco tricolor de acompanhamento!\n\n");
                    break;

                    case 2:
                        printf("\nVoce escolheu o Paredao Fabio taysty bread com o Thiago fritas da Silva!\n\n");
                    break;

                    case 3:
                        printf("\nVoce escolheu o Paredao Fabio taysty bread com o Nuggets do Assis!\n\n");
                    break;

                    case 4:
                        printf("\nVoce escolheu o Paredao Fabio taysty bread sem nenhum acompanhamento!\n\n");
                    break;

                    default:
                        printf("\nOpcao invalida!\n\n");
                    break;
                
                }
            
            break;

            case 4:
            printf("\nVoce escolheu o menu adicional!\n\n");
                printf("Escolha uma opcao do menu adicional:\n");
                printf("[1]Suco tricolor;\n");
                printf("[2]Thiago fritas da Silva;\n");
                printf("[3]Nuggets do Assis;\n");
                printf("[4]Nada a adicionar na vitoria do flusao;\n");
                scanf("%d", &sb);

                switch (sb){
                    case 1:
                        printf("\nVoce escolheu o Suco tricolor!\n\n");
                    break;

                    case 2:
                        printf("\nVoce escolheu o Thiago fritas da Silva!\n\n");
                    break;

                    case 3:
                        printf("\nVoce escolheu o Nuggets do Assis!\n\n");
                    break;

                    case 4:
                        printf("\nVoce escolheu nada para ver a vitoria do flusao!\n\n");
                    break;

                    default:
                        printf("\nOpcao invalida!\n\n");
                    break;
                
                }
            
            break;

            case 5:
                printf("\nVoce escolheu sair para ver a vitoria do flusao!\n\n");
            break;

            default:
                printf("\nOpcao invalida!\n\n");
            break;
        
        }

    }

    printf("Muito obrigado por comprar no Restaurante John Cano! Volte sempre! VITORIA FLUMINENSE!!!");
    
    return 0;
}