#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "");
	float nota1, nota2, media;
	char novocalculo;
	
	do{
		
        do {
	    	printf("Nota da primeira avalia��o: ");
	    	scanf("%f", &nota1);
    	if(nota1 < 0 || nota1 > 10){
	    	printf("Nota inv�lida.\n");
	       }		
    	}while(nota1 < 0 || nota1 > 10);
	
    	do {
	    	printf("Nota da segunda avalia��o: ");
	    	scanf("%f", &nota2);
    	if(nota2 < 0 || nota2 > 10){
	    	printf("Nota inv�lida. \n");
	       }	
    	}while(nota2 < 0 || nota2 > 10);
	
	 media = (nota1 + nota2) / 2;
	 printf("A m�dia do aluno �: %.2f.\n", media);
	
	 printf("Novo c�lculo (S/N)? ");
        getchar(); 
        novocalculo = getchar();
	}while(novocalculo == 'S' || novocalculo == 's');
	

	
	return 0;
}
