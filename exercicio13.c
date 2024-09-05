#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int i, j, n;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= 10; j++){
	    	printf("%d x %d = %d\n", i, j, i * j);
		}
		
		printf("\n");
	}
	
	return 0;
}
