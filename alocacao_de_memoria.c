#include <stdio.h>
#include <stdlib.h> //Para acessar a funções malloc(), calloc(), free, exit

int main(void) {
	char * nome = (char*) malloc(50*sizeof(char));
    if(nome==NULL) {
        exit(1);
    } 
   
    printf("Digite seu nome:\n");
    scanf("%[^\n]", nome);
    
    free(nome);
    
    return 0;
}