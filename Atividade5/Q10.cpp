#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, m=0, n=0;

    while(i != 0){
        printf("Qual e a idade da pessoa? ");
        scanf("%d", &i);

        if(i >= 18){
            m++;
        }else if(i > 0){
            n++;
        }
    }

    printf("\nO numero de pessoas que possui mais de 18 anos e %d\n\n", m);
    printf("O numero de pessoas que possuem menos de 18 anos e %d\n\n", n);

    system("pause");
    return 0;
}