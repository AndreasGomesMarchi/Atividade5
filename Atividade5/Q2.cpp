#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int n, i = 1;
	
 	printf("Coloque um numero: ");
 	scanf("%d", &n);
 	
 	while(i <= 10){
 		
 		printf("\n%d X %d = %d\n", n, i, n*i );
 		i++;
 		
	 }
 	
	system("pause");
  return 0;
}

