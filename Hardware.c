#include "hardware.h"

// Definición de las direcciones de memoria de los registros de configuración y lectura/escritura de los pines
volatile uint32_t *PINSEL_1 = (volatile uint32_t *)0x4002C004UL;
volatile uint32_t *PINSEL_4 = (volatile uint32_t *)0x4002C010UL;
volatile uint32_t *PINMODE_OD_0 = (volatile uint32_t *)0x4002C068UL;
volatile uint32_t *PINMODE_OD_2 = (volatile uint32_t *)0x4002C070UL;
volatile uint32_t *FIODIR_0 = (volatile uint32_t *)0x2009C000UL;
volatile uint32_t *FIODIR_2 = (volatile uint32_t *)0x2009C040UL;
volatile uint32_t *FIOPIN_0 = (volatile uint32_t *)0x2009C014UL;
volatile uint32_t *FIOPIN_2 = (volatile uint32_t *)0x2009C054UL;
