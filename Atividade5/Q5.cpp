#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "");
	int i;
	
	printf("Digite um n�mero [1 a 7]: ");
	scanf("%d", &i);

	switch(i){
		case 1:
			printf("\nDomingo\n\n");
			break;
		
		case 2:
			printf("\nSegunda-feira!\n\n");
			break;
			
		case 3:
			printf("\nTer�a-feira!\n\n");
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
			printf("\nS�bado!\n\n");
			break;
			
		default:
			printf("\nN�mero inv�lido!\n\n");
	}
	
	system("pause");
  return 0;
}
