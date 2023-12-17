#include <stdio.h>
#include <stdlib.h>

//Definindo a estrutura aluno
struct aluno {
	char nome[50]; // 20 bytes 
	int idade; // 4 bytes 
	long int matricula; // 4 bytes 
	char email[50]; // 50 bytes
};
//Alocação dinâmica da struct, pois a variável é um ponteiro
int main() {
	struct aluno *a = (struct aluno*) malloc(sizeof(struct aluno)); 
	if (a == NULL){
		exit(1);
	}
	printf("Digite o nome do aluno: \n");
	scanf("%[^\n]", a->nome);
	printf("Digite a idade: \n");
	scanf("%d", &a->idade);
	printf("Digite a matricula: \n");
	scanf("%d", &a->matricula);
	printf("Digite o email\n");
	scanf(" %[^\n]", a->email);
	free(a);
	return 0;
	
	
}