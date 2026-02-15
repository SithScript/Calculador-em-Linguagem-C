#include <stdio.h>

int main(){

float num1, num2;
char op, stop;

while(stop != 'n'){
	
	printf("Digite o primeiro numero: ");
		scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
			scanf("%f", &num2);
		
	printf("Digite a operacao desejada (/, +, -, *)\t" );		
				scanf(" %c", &op);
		
switch (op){
	
case '/':
	printf("Resultado: %.6f\n", num1 / num2);
			break;
			
case '+':
		printf("Resultado: %.6f\n", num1 + num2);
				break;
	
		printf("Resultado: %.6f\n", num1 - num2);
					break;
	
case '*':
		printf("Resultado: %.6f\n", num1 * num2);
				break;						
	}
		printf("Deseja fazer uma nova operacao? (s/n)\t");
				scanf(" %c", &stop);
	}

return 0;

}



