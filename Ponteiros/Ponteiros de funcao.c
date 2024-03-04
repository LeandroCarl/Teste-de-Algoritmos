#include <stdio.h>


int multi(int a, int b) {
	return a*b;
}

int calcula(int x, int y, int (*operacao)(int, int)) {
	return (*operacao)(x, y);
}


int main(void) {
	int resultado = calcula(5, 3, multi);
	printf("Resultado: %d", resultado);
	
	return 0;
	
}