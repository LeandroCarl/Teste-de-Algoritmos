#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno * recebe_dados(void){
    Aluno *estudante = (Aluno*) malloc(sizeof(Aluno));
    if(estudante == NULL){
        printf("Erro de memoria!");
        exit(1);
    }
    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", estudante->nome);
    printf("\nInforme a matricula: ");
    scanf("%d", &estudante->matricula);
    printf("\nInforme o IRA: ");
    scanf("%f", &estudante->IRA);

    return estudante;

}

void imprime(Aluno * aluno){
    printf("Dados do aluno\n Nome: %s \n Matricula: %d \n IRA: %.2f", estudante->nome, estudante->matricula, estudante->IRA);
}