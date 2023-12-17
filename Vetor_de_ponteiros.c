#include <stdio.h>
#include <stdlib.h>

int main() {
	int linhas=3, colunas=3, i, j;

	//alocando vetor de ponteiros
	
	int **matriz = (int **) malloc(linhas * sizeof(int *));
	
	//alocando cada linha da matriz
	
	for (i = 0; i < linhas; i++) {
		
		matriz[i] = (int *) malloc(colunas * sizeof(int));
	
	}
}