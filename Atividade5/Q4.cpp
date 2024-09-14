#include <stdio.h>
#include <stdlib.h>

int main(){
	float m, d, e, p, c;
	int i;
	
	printf("Quantos reais voce deseja converter? ");
	scanf("%f", &m);
	
	printf("Qual moeda voce deseja converter?\n\n");
	printf("[1]Dolar\n");
	printf("[2]Euro\n");
	printf("[3]Peso\n");
	scanf("%d", &i);
	
	
	
	switch(i){
		case 1:
			c = m / 5.56;
			printf("\nConvertendo para dolar, voce tem %.2f$\n\n", c);
			break;
		
		case 2:
			c = m / 6.16;
			printf("\nConvertendo para euro, voce tem %.2fE$\n\n", c);
			break;
			
		case 3:
			c = m / 0.0058; 
			printf("\nConvertendo para peso argentino, voce tem %.2fE$\n\n", c);
			break;
			
		default:
			printf("Valor invalido!\n\n");
	}
	
	system("pause");
  return 0;
}
