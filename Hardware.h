#ifndef HARDWARE_H
#define HARDWARE_H

#include <stdint.h>

// Direcciones de memoria de los registros de configuración y lectura/escritura de los pines
extern volatile uint32_t *PINSEL_1;
extern volatile uint32_t *PINSEL_4;
extern volatile uint32_t *PINMODE_OD_0;
extern volatile uint32_t *PINMODE_OD_2;
extern volatile uint32_t *FIODIR_0;
extern volatile uint32_t *FIODIR_2;
extern volatile uint32_t *FIOPIN_0;
extern volatile uint32_t *FIOPIN_2;

// Constantes asociadas al manejo del LED
#define LED_PIN 22       // Número de pin para el LED (P0.22)
#define LED_ON 0         // Valor para encender el LED
#define LED_OFF 1        // Valor para apagar el LED

#endif  /* HARDWARE_H */
