#include <stdio.h>

//Enumeração

typedef enum bool{
    true,
    false
}Bool;


int main(void){
    
    Bool resposta;
    
    printf("Você gosta de algoritmos? \n 0 - True \n 1 - False");
    scanf("%f", &resposta);

    if(TRUE){
        printf("Boa escolha!");
    }
    else{
        printf("que pena!");
    }
}