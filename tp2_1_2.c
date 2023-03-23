// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    int i;
    double vt[N], *p_Vt;
    p_Vt = vt;
    srand(time(NULL));
    //Recorrido del vector usando un puntero
    for (i = 0; i < N; i++) {
        *p_Vt = 1 + (rand() % 100);
        printf("%f\n", *p_Vt);
        p_Vt++;
    }
    return 0;
}