#include "matematica.h"

#define SAT16_MAX 32767
#define SAT16_MIN -32768

static uint16_t contador = 0;

uint16_t Cuenta_Accesos(void) {
    contador++;
    return contador;
}

int16_t Multiplicar_Sat(int16_t n1, int16_t n2) {
    int32_t resultado = (int32_t)n1 * (int32_t)n2;

    if (resultado > SAT16_MAX) {
        resultado = SAT16_MAX;
    } else if (resultado < SAT16_MIN) {
        resultado = SAT16_MIN;
    }

    return (int16_t)resultado;
}

int32_t Sumar_Array(int16_t* x, int16_t xn) {
    int32_t suma = 0;
    for (int i = 0; i < xn; i++) {
        suma += x[i];
    }
    return suma;
}

inline int16_t Multiplicar_Sat_Inline(int16_t n1, int16_t n2) {
    int32_t resultado = (int32_t)n1 * (int32_t)n2;

    if (resultado > SAT16_MAX) {
        resultado = SAT16_MAX;
    } else if (resultado < SAT16_MIN) {
        resultado = SAT16_MIN;
    }

    return (int16_t)resultado;
}
