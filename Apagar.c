#include <stdint.h>

uint8_t ApagarBit(uint32_t *reg, uint8_t nBit) {
    if (nBit < 0 || nBit > 31) {
        return 1; // Número de bit fuera de rango
    }

    uint32_t mask = ~(1 << nBit); // Crear una máscara con todos los bits en 1 excepto en el bit deseado

    *reg &= mask; // Apagar el bit deseado en el registro

    return 0; // Éxito
}


