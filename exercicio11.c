#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int i, n;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	do {
		printf("Valor inválido. Digite outro valor: ");
		scanf("%d", &n);
	}while (n ==0);
	
	for (i = 1; i <= n; i++) {
		printf("%d\n", i);
	}
	
	return 0;
}
