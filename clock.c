#include <stdio.h>
#include <time.h>

int main(){
   int m[3][3], i, j;
   clock_t tempo0 = clock();

    double tempo1 = (double)(clock() - tempo0) / CLOCKS_PER_SEC;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            m[i][j] = 1;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nTempo de execucao do programa: %f milissegundos", tempo1);
    return 0;
}