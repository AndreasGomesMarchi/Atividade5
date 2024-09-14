#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "");
	int i;
	
	printf("Digite um número [1 a 7]: ");
	scanf("%d", &i);

	switch(i){
		case 1:
			printf("\nDomingo\n\n");
			break;
		
		case 2:
			printf("\nSegunda-feira!\n\n");
			break;
			
		case 3:
			printf("\nTerça-feira!\n\n");
			break;
			
		case 4:
			printf("\nQuarta-feira!\n\n");
			break;
			
		case 5:
			printf("\nQuinta-feira\n\n");
			break;
			
		case 6:
			printf("\nSexta-feira!\n\n");
			break;
			
		case 7:
			printf("\nSábado!\n\n");
			break;
			
		default:
			printf("\nNúmero inválido!\n\n");
	}
	
	system("pause");
  return 0;
}
