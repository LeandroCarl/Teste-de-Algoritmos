#include "aluno.h"


int main(void){
    Aluno * aluno;
    
    
    aluno = recebe_dados();
    imprime(aluno);
    free(aluno);

    return 0;
}