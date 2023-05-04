#include <stdio.h>
#include "matematica.h"

uint16_t contador_global = 0;
int main() {
    int16_t numeros1[] = { 1, 2, 3, 4, 5 };
    int16_t n1 = sizeof(numeros1) / sizeof(numeros1[0]);
    int32_t suma1 = Sumar_Array(numeros1, n1);
    printf("La suma de numeros1 es: %d\n", suma1);

    int16_t numeros2[] = { -100, 200, -300, 400, -500 };
    int16_t n2 = sizeof(numeros2) / sizeof(numeros2[0]);
    int32_t suma2 = Sumar_Array(numeros2, n2);
    printf("La suma de numeros2 es: %d\n", suma2);

    int16_t numeros3[] = { 32767, -32768 };
    int16_t n3 = sizeof(numeros3) / sizeof(numeros3[0]);
    int32_t suma3 = Sumar_Array(numeros3, n3);
    printf("La suma de numeros3 es: %d\n", suma3);

    int16_t a = 30000;
    int16_t b = -5000;
    int16_t c = Multiplicar_Sat(a, b);
    printf("%d x %d = %d\n", a, b, c);

    int16_t d = 32767;
    int16_t e = -2;
    int16_t f = Multiplicar_Sat(d, e);
    printf("%d x %d = %d\n", d, e, f);

    int16_t g = -32768;
    int16_t h = -32768;
    int16_t i = Multiplicar_Sat(g, h);
    printf("%d x %d = %d\n", g, h, i);
    

    printf("Cantidad de accesos: %d\n", Cuenta_Accesos());
    printf("Cantidad de accesos: %d\n", Cuenta_Accesos());
    printf("Cantidad de accesos: %d\n", Cuenta_Accesos());

    contador_global = Cuenta_Accesos();
    printf("Cantidad de accesos (global): %d\n", contador_global);
    return 0;
}
