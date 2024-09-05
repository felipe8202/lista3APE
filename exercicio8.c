#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "");
	int i = 10;
	
	while(i >= 1) {
		printf("%d \n", i);
		i--;
	}
	
	return 0;
}
