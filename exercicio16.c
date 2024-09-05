#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "");
	
	int nTotalmerc, i;
	float valorMerc, valortotal, media;
	
	printf("Digite a quantidade de mercadorias: ");
	scanf("%d", &nTotalmerc);
	
	for (i = 0; i < nTotalmerc; i++) {
		printf("Digite o valor de cada mercadoria %d: ", i + 1);
	    scanf("%f", &valorMerc);
	    valortotal += valorMerc;
	}
	
	media = valortotal / nTotalmerc;
	
	printf("O valor em estoque: %.2f\n", valortotal);
	printf("A média de valor das mercadorias é: %.2f\n", media);
	
	return 0;
}
