#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int i, j, n;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
	    	printf("*");
	    }
	    printf("\n");
	}
		
	return 0;	
}
