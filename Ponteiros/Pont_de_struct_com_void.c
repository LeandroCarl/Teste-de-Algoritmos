#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Definindo a estrutura aluno
typedef struct aluno {
	char nome[50];
	int idade;
	long int matricula;
	char email[50];
}Aluno;

Aluno * a = (Aluno*) malloc(sizeof(Aluno));

clock_t tempo0 = clock();
void preenche(Aluno * a){
	printf("Digite o nome: \n");
	scanf("%[^\n]", a->nome);
	printf("Digite a idade: \n");
	scanf("%d", &a->idade);
	printf("Digite a matricula: \n");
	scanf("%d", &a->matricula);
	printf("Digite o email\n");
	scanf(" %[^\n]", a->email);
}
double tempo1 = (double)(clock() - tempo0) / CLOCKS_PER_SEC;

void imprime(Aluno * a){
	printf("Nome: %s\n Idade: %d \n Matricula: %d \n Email: %s", 
	a->nome,a->idade,a->matricula,a->email);
}
int main() {
	
	if(a == NULL) {
		exit(1);
	} 
	preenche(a);
	imprime(a);
	free(a);
	printf("\ntempo de execucao: %f milissegundos\n", tempo1);
	return 0;
}