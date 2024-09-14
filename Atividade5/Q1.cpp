#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
 int n, total = 1;
 
 printf("Qual e o valor que voce deseja fatorar? ");
 scanf("%d", &n);
 
 while(n != 1){
 	total *= n;
	n--;
 	
 }
 
 printf("%d\n\n", total);
 
	system("pause");
  return 0;
}

