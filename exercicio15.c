#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int i, soma = 0, cont = 0;
	
	for (i = 15; i <= 100; i++) {
		soma += i;
		cont++;
	}
	
	float media = (float)soma / cont;
	
	printf("A m�dia aritm�tica dos n�meros �: \n%.2f.\n", media); 
	
	return 0;
}
