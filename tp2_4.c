#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

// Estructura de la PC
struct compu{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

// Declaración de las funciones
void listaComputadoras(struct compu PC[]);
void viejaPC(struct compu PC[]);
void velozPC(struct compu PC[]);

int main() {
    // Definición del arreglo de estructuras que guardará los datos de 5 PC's
    struct compu computadoras[5], *puntPC;
    puntPC = computadoras;
    srand(time(NULL));
    for(int i = 0; i < 5; i++) {
        puntPC->velocidad = 1 + (rand() % 3);
        puntPC->anio = 2015 + (rand() % 9);
        puntPC->cantidad = 1 + (rand() % 8);
        puntPC->tipo_cpu = tipos[rand() % 6]; 
        puntPC++;
    }

    puntPC = computadoras;
    listaComputadoras(puntPC);
    viejaPC(puntPC);
    velozPC(puntPC);
    return 0;
}

// DEFINICIÓN DE LAS FUNCIONES

// Función que muestra la lista de PC's con sus correspondientes características
void listaComputadoras(struct compu PC[]) {
    puts("\n=======LISTADO DE COMPUTADORAS========\n");
    for (int i = 0; i < 5; i++) {
        printf("\nComputadora %d \n", i + 1);
        printf("\nCPU: %s\n", PC[i].tipo_cpu);
        printf("A%co de fabricaci%cn: %d\n", 164, 162, PC[i].anio);
        printf("Cantidad de n%ccleos: %d\n", 163, PC[i].cantidad);
        printf("Velocidad de procesamiento medida en GHZ: %d\n", PC[i].velocidad);
    }
}

// Función que muestra las características de la PC más vieja
void viejaPC(struct compu PC[]) {
    struct compu compVieja = PC[0];

    for (int i = 0; i < 5; i++) {
        if (PC[i].anio <= compVieja.anio) {
            compVieja = PC[i];
        }

    }

    printf("\n===LA PC M%cS VIEJA===\n", 181);
    printf("CPU: %s\n", compVieja.tipo_cpu);
    printf("A%co de fabricaci%cn: %d\n", 164, 162, compVieja.anio);
    printf("Cantidad de n%ccleos: %d\n", 163, compVieja.cantidad);
    printf("Velocidad de procesamiento medida en GHZ: %d\n", compVieja.velocidad);
}

// Función que muestra las características de la PC con mayor velocidad
void velozPC(struct compu PC[]) {
    struct compu compVeloz = PC[0];

    for (int i = 0; i < 5; i++) {
        if (PC[i].velocidad >= compVeloz.velocidad) {
            compVeloz = PC[i];
        }

    }

    printf("\n===LA PC M%cS VELOZ===\n", 181);
    printf("CPU: %s\n", compVeloz.tipo_cpu);
    printf("A%co de fabricaci%cn: %d\n", 164, 162, compVeloz.anio);
    printf("Cantidad de n%ccleos: %d\n", 163, compVeloz.cantidad);
    printf("Velocidad de procesamiento medida en GHZ: %d\n", compVeloz.velocidad);

}
