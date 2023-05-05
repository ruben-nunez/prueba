#include <stdio.h>
#include <stdint.h>
#include "end.h"


int main() {
    int32_t var = 10;
    int32_t varGlobal = 20;

    varGlobal = 30;

    int32_t (*p)(int32_t, int32_t) = &Suma;

    printf("Direccion de end: %p\n", &end);
    printf("Direccion de Suma: %p\n", p);
    printf("Direccion de var: %p\n", &var);
    printf("Direccion de varGlobal: %p\n", &varGlobal);

    return 0;
}

//El valor de end representa la dirección de memoria del último byte del heap en la memoria (memoria dinámica).
//La memoria dinámica que se almacena en el heap es aquella que se utiliza para almacenar datos que se crean en el medio de la ejecución de un programa (En este caso varGlobal). 
//Luego de inicializar la variable varGlobal se puede ver que la dirección de end varia ligeramente.
//4) En este caso el orden de memoria sería: etext(al ser solo un segmento de texto)<edata(Por el uso de las variables inicializadas)<end(memoria dinámica).