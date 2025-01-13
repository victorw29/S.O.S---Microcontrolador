#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pico/stdlib.h"

// Definindo o pino do LED
#define LED_PIN 12  // Pino GPIO (11, 12 ou 13)

#define PONTO 200    // Tempo de acendimento para um ponto (200ms)
#define TRACO 800    // Tempo de acendimento para um traço (800ms)
#define GAP 125      // Tempo de espera entre pontos e traços dentro de uma letra (125ms)
#define INTERVALO 250 // Tempo de espera entre letras (250ms)
#define PAUSA 3000   // Tempo de pausa entre o ciclo do S.O.S (3000ms)

void acender_led(int tempo) {
    gpio_put(LED_PIN, true);  // Acende o LED
    sleep_ms(tempo);          // Espera o tempo determinado
    gpio_put(LED_PIN, false); // Apaga o LED
}

void enviar_sos() {
    // Enviar o primeiro 'S' (...).
    for (int i = 0; i < 3; i++) {
        acender_led(PONTO);  // Acende o LED por 200ms (ponto)
        sleep_ms(GAP);       // Intervalo entre os pontos
    }

    sleep_ms(INTERVALO); // Intervalo entre as letras

    // Enviar o 'O' (---).
    for (int i = 0; i < 3; i++) {
        acender_led(TRACO);  // Acende o LED por 800ms (traço)
        sleep_ms(GAP);       // Intervalo entre os traços
    }

    sleep_ms(INTERVALO); // Intervalo entre as letras

    // Enviar o segundo 'S' (...).
    for (int i = 0; i < 3; i++) {
        acender_led(PONTO);  // Acende o LED por 200ms (ponto)
        sleep_ms(GAP);       // Intervalo entre os pontos
    }

    sleep_ms(PAUSA); // Pausa após o envio completo do S.O.S.
}

int main() {
    // Inicializar o Pico
    stdio_init_all();

    // Configurar o pino do LED como saída
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Loop infinito para enviar o sinal S.O.S
    while (1) {
        enviar_sos(); // Envia o sinal S.O.S
    }

    return 0;
}