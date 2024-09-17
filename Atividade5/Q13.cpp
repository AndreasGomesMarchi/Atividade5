#include <stdio.h>
#include <stdlib.h>

int main(){
   int senha = 0000, susu, i = 6;

   while(i > 0){

        printf("-----------------\n");
        printf("    BANCO UCB    \n");
        printf("-----------------\n");

        printf("seja bem-vindo ao banco UCB. Por favor, coloque seu usuario e senha (Lembre-se que a senha possui 4 digitos):\n\n");

        printf("Usuario: usuario\n");
        printf("Senha: ");
        scanf("%d", &susu);

        if(susu == senha){
            printf("\nOla novamente, usuario!\nComo podemos ajuda-lo hoje?\n\n");
            printf("[1] - Pagar\n");
            printf("[2] - depositar\n\n");
            i=0;
        }else {
            i--;
            printf("Seu usuario ou senha esta errado, voce tem mais %d chances!\n\n", i); 
            system("pause");
            system("cls");
        }

   }

 return 0;
}