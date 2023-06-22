#include <stdint.h>

uint8_t InvertirBit(uint32_t *reg, uint8_t nBit) {
    if (nBit < 0 || nBit > 31) {
        return 1; // Número de bit fuera de rango
    }

    uint32_t mask = 1 << nBit; // Crear una máscara con un 1 en el bit deseado y ceros en los demás

    *reg ^= mask; // Invertir el estado del bit deseado en el registro

    return 0; // Éxito
}
