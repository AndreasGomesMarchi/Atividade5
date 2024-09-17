#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, count = 0;

    printf("Coloque aqui o numero inteiro que deseja: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    // Exibe o número de dígitos
    printf("O numero possui %d digito(s).\n", count);

    return 0;

}