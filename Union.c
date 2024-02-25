//Union tem uma função parecida com a struct, porém não armazena todos os parâmetros na memória, mas somente um deles
#include <stdio.h>
#include <stdlib.h>
//Estrutura de union usando typedef
typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;

typedef struct pessoa{
    char nome[20];
    int idade;
    Documentos doc; //Variável para armazenar o CPF ou RG
}Pessoa;

int opcao;

void dados_pessoa(Pessoa * p){
    printf("Informe o nome: \n");
    scanf("%[^\n]", p->nome);
    printf("\nInforme a idade: \n");
    scanf("%d", &p->idade);
    printf("\nDigite 1 para colocar o cpf ou 0 para rg: \n");
    scanf("%d", &opcao);

    if(opcao) {
        scanf(" %[^\n]", p->doc.cpf);
    }
    else {
       scanf(" %[^\n]", p->doc.rg);
    }
}

int main(void){
    Pessoa * p = malloc(sizeof(Pessoa));
    dados_pessoa(p);
    printf("CPF = %s \n RG = %s", p->doc.cpf, p->doc.rg);
    free(p);
    return 0;
}