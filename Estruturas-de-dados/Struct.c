#include <stdio.h>

//Definindo a estrutura aluno
struct aluno {
	char nome[50];
	int idade;
	long int matricula;
	char email[50];
};

int main() {
	struct aluno a; //precisa-se declarar uma variável do tipo struct, nesse caso, "a"
	printf("Digite o nome do aluno: \n");
	scanf("%[^\n]", a.nome);
	printf("Digite a idade: \n");
	scanf("%d", &a.idade);
	printf("Digite a matricula: \n");
	scanf("%d", &a.matricula);
	printf("Digite o email\n");
	scanf(" %[^\n]", a.email);
	return 0;
}