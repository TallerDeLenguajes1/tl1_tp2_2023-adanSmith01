#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main() {
    int i, j;
    int mt[N][M], *pMatriz;
    pMatriz = &mt[0][0];
    srand(time(NULL));
    //Matriz de números enteros aleatorios entre 1 y 100
    for(i = 0; i < N; i++) {
        for(j = 0; j < M; j++) {
            *(pMatriz + i*M + j) = 1 + (rand() % 100);
            printf("%d\n", *(pMatriz + i*M + j));
        }
    }
    return 0;
}