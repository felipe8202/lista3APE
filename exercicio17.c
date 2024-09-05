#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "");
	
	char resp = 'S';
	int cont = 0;
	float valorMerc = 0, valortotal = 0, media;
	
	do {
		printf("Digite o valor de cada mercadoria : ");
	    scanf("%f", &valorMerc);
	    
	    valortotal += valorMerc;
	    cont++;
	    
	    printf("Mais mercadorias (S/N)? ");
	    scanf(" %c", &resp);
	    
	} while (resp == 'S' || resp == 's');
	
	if (cont > 0) {
		media = valortotal / cont;
		
		printf("Valor total do estoque: %.2f\n", valortotal);
		printf("Média do valor das mercadorias: %.2f\n", media);
	} else {
		printf("Nenhuma mercadoria cadastrada. \n");
	}
	
	return 0;
}
