#include <stdio.h>
#include <stdlib.h>

int main() {
	int * p = (int*) malloc(50 * sizeof(int));
	int n;
	
	printf("Entre com o novo tamanho de memo: \n");
	scanf("%d", &n);
	
	p = (int*) realloc(p, n * sizeof(int));
	
	if (p == NULL) {
		printf("Alocacao mal sucedida");
		exit(1);
	}
	
	
	free(p);
	return 0;
}