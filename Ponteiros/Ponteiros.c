#include <stdio.h>

int main() {
	
	int valor = 2;
	int *p;
	p = &valor;
	
	printf(" %d, end = %p", valor, p + 3);
	
	return 0;
}