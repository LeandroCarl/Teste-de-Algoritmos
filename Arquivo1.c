#include <stdio.h>
#include <stdlib.h>

int main() {
    //cria o arquivo: entrada_escrita.txt no modo "w" write
    FILE * arquivo = fopen("entrada_escrita.txt", "wt");

    if(arquivo==NULL) {
        printf("Erro na abertura do arquivo");
        exit(1);
    }

    else{
        printf("Arquivo aberto!\n");
    }
    //fputc('A', fp) //só permite um caractere
    //fputs("Hello world! ", arquivo);
    fprintf(arquivo, "meu texto");

    if(!fclose(arquivo)) {
        printf("Arquivo fechado!\n");
    }

    return 0;
}