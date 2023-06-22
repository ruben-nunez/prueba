#include <stdint.h>

uint8_t ConsultarBit(uint32_t reg, uint8_t nBit) {
    if (nBit < 0 || nBit > 31) {
        return 1; // Número de bit fuera de rango
    }

    uint32_t mask = 1 << nBit; // Crear una máscara con un 1 en el bit deseado y ceros en los demás

    uint32_t bitValue = reg & mask; // Obtener el valor del bit deseado

    return (bitValue != 0) ? 1 : 0; // Devolver 1 si el bit está encendido, 0 si está apagado
}
