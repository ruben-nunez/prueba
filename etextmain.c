#include <stdio.h>
#include <stdint.h>
#include "etext.h"

int main() {
    int32_t (*p)(int32_t, int32_t) = &Suma;
    printf("Direccion de Suma: %p\n", p);
    printf("Direccion de main: %p\n", &main);
    printf("Valor de etext: %p\n", &etext);
    return 0;
}

//El valor de etext representa la dirección de memoria del primer byte después del final del programa ejecutable en la memoria.
//Es decir, es la dirección de memoria más alta del espacio de memoria asignado al programa en tiempo de ejecución.
//En este caso, creamos un puntero a una función que apunta a la función Suma (*p).
//Al imprimir su dirección de memoria (%p), podemos compararla con la dirección de main y con el contenido de etext.
//La dirección de etext dependerá de distintos factores tales como el sistema operativo, por lo que no es seguro que tenga la misma
//Dirección de Suma o main.