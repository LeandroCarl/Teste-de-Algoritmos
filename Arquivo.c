#include <stdio.h>
#include <stdlib.h>

int main () {
    
    //Cria o arquivo: entrada.txt no modo texto "t", ou seja, somente para leitura 
    FILE *fp;
    fp = fopen("entrada.txt", "rt");
    int c;
    int nlinhas = 0;
    if(fp == NULL){
        printf("Erro de abertura do arquivo");
        exit(1);
    }
    
    while((c = fgetc(fp)) != EOF) {
        if(c == '\n'){
            nlinhas++;
        }
    }
    
    // Fecha o arquivo criado. A função retorna 0.
    fclose(fp);
    //Exibe o resultado 
    printf("Numero de linhas = %d\n", nlinhas);
    return 0;
}