#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int i;
	
	for(i = 100; i <= 110; i++) {
		printf("%d. \n", i);
	}
	
	return 0;
}
