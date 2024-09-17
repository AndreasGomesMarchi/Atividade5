#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, x;
    srand( (unsigned)time(NULL) );
    x = 1 + (rand() % 10);

    printf("--------------------------------------\nSEJA BEM VINDO AO JOGO DA ADIVINHACAO!\n--------------------------------------\n\n");
    
    printf("Digite um numero qualquer, entre 1 e 10, e tente adivinhar o valor!!!\nVamos comecar?\n\n");

    while(i != x){

        printf("Digite um numero: ");
        scanf("%d", &i);

        if(i > x){
            printf("O seu numero e maior! Tente novamente!\n\n");
        }else if(i < x){
            printf("O seu numero e menor! Tente novamente!\n\n");
        }
    }

    printf("VOCE ACERTOU!!!! VOCE E UMA LENDA MESMO, PARABENS!!!!\n\n");

    system("pause");
    return 0;
}