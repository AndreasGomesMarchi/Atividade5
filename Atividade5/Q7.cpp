#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "");
	int n, i;
	
	while(i != 0){
		
		printf("Qual valor voce deseja colocar? ");
		scanf("%d", &i);
		
		n += i;
				
		printf("\n\n");
	}
	
	printf("O soma dos valores que você colocou é %d!\n\n", n);
	
	system("pause");
	return 0;
}
