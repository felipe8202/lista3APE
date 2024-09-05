#include <stdio.h>
#include <locale.h>

int main () {
    
    setlocale(LC_ALL, "");
    
	float valor1, valor2;
	float divisao;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor2);
	
	
	while(valor2 == 0) {
		scanf("%f", &valor2);
	}
	
	divisao = valor1 / valor2;
	
	printf("A divisão do primeiro valor pelo segundo é: %.2f\n", divisao);
	
	return 0;
}
