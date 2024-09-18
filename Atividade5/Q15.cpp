#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float raiz, n;
    int i;

    printf("Escolha uma opcao:\n");
    printf("[1]Exibir mensagem;\n");
    printf("[2]Calcular quadrado de um numero;\n");
    printf("[3]Calcular cubo de um numero;\n");
    printf("Qual opcao voce deseja: ");
    scanf("%d", &i);

    switch (i){
        case 1:
            printf("\nOla, voce escolheu a primeira opcao, entao aqui esta a mensagem exibida!\n\n");
        break;

        case 2:
            printf("\nVoce escolheu a segunda mensagem!\n\n");

            printf("Digite um numero que voce deseja ver a raiz quadrada: ");
            scanf("%f", &n);

            raiz = sqrt(n);

            printf("\nA raiz do numero que voce colocou e %.5f\n\n", raiz);

        break;

        case 3:
            printf("\nVoce escolheu a terceira mensagem!\n\n");

            printf("Digite um numero que voce deseja ver a raiz cubica: ");
            scanf("%f", &n);

            raiz = cbrt(n);

            printf("\nA raiz cubica do valor que voce colocou e %.5f\n\n", raiz);

        break;
    
        default:
            printf("\nOpcao invalida!\n\n");
        break;

    }

 system("pause");
 return 0;
}