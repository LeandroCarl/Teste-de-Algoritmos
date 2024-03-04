#include <stdio.h>

//Maneira de definir constantes em C
#define TRUE 0
#define FALSE 1


int main(void){
    int reposta;
    printf("Você gosta de algoritmos? \n 0 - True \n 1 - False");
    scanf("%d", &reposta);

    if(TRUE){
        printf("Boa escolha!");
    }
    else{
        printf("que pena!");
    }
}