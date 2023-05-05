#include <stdio.h>
#include <stdint.h>
#include "edata.h"
extern char edata;

int main() {
    int32_t (*p)(int32_t, int32_t) = &suma;
    int32_t var = 42;
    int32_t varGlobal = 1337;

    printf("Direccion de Suma: %p\n", p);
    printf("Direccion de main: %p\n", &main);
    printf("Valor de edata: %p\n", &edata);
    printf("Direccion de var: %p\n", &var);
    printf("Direccion de varGlobal: %p\n", &varGlobal);

    return 0;
}

//El valor de edata representa la dirección de memoria del primer byte del segmento de datos inicializados en la memoria. 
//Este segmento de datos contiene variables globales y locales que son inicializadas con valores explícitos (var y varGlobal).
//Respecto a los punteros a función y su segmento de memoria, los punteros a función apuntan al segmento de código que contiene el código ejecutable de las funciones.
//Este segmento es diferente al de datos inicializados y puede tener una dirección de memoria distinta.
//Es necesario mencionar que, al igual que con etext, la dirección de edata puede variar dependiendo del sistema operativo