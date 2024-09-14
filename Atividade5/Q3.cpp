#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i = 1, num=0, val;
	float ma;
	
 	printf("Quantos numeros voce deseja colocar? ");
 	scanf("%d", &n);
 	
 	while(i <= n){
 		
 		printf("Coloque o numero: " );
 		scanf("%d", &val);
 		i++;
 		num = num + val;
 		
	 }
	 
	 printf("A media dos numeros que voce colocou e %.2f\n\n", ma = num/n);
 	
	system("pause");
  return 0;
}

