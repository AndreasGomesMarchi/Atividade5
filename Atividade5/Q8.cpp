#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, soma=0;

    while(i >= 0){

        printf("Coloque o valor que voce deseja somar: ");
        scanf("%d", &i);

        if(i >=0){

            soma = soma + i;

        }else{
            printf("\n\nVoce colocou um numero negativo, por conta disso, o programa somara os valores que voce colocou e sera finalizado.\n\n");
        } 
    }

    system("pause");

    printf("\n\nA soma dos valores foi igual a %d", soma);

    return 0;
}