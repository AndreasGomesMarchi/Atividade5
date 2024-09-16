#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;

    while (n1 != n2){

        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);

        if (n1 > n2){
            printf("\n%d e maior que %d\n\n", n1, n2);
            system("pause");
            system("cls");
        }else if (n2 > n1){
            printf("\n%d e maior que %d\n\n", n2, n1);
            system("pause");
            system("cls");
        }else{
            printf("\nVoce colocou dois valores iguais, por conta disso, o sistema sera finalizado.\n\n");
        }
    }

    system("pause");
    return 0;
}