#include <stdio.h>
#include "pico/stdlib.h"

const uint Buzzer = 21;
const uint led_G = 11;
const uint led_B = 12;
const uint led_R = 13;
#define Tempo_led 500

// função de acender e apagar os leds
int acender_led(uint led)
{
    gpio_put(led, 1);
    sleep_ms(Tempo_led);
    gpio_put(led, 0);
    sleep_ms(Tempo_led);
}

// função de inicialização dos leds
void led_init()
{
    gpio_init(led_G);
    gpio_set_dir(led_G, GPIO_OUT);

    gpio_init(led_B);
    gpio_set_dir(led_B, GPIO_OUT);

    gpio_init(led_R);
    gpio_set_dir(led_R, GPIO_OUT);
}

// função de leitura do teclado

// função de acionamento do buzzer, um pra erro e outro para acerto
void acionar_buzzer()
{
    // tempo de acionamento do buzzer
    int time = 1000;
    // executa enquanto o contador não zera
    while (time > 0)
    {
        // ativa o buzzer
        gpio_put(Buzzer, 1);
        // fica ativo por 1 ms
        sleep_ms(1);
        // decrementa contador
        time -= 1;
        // desativa o buzzer
        gpio_put(Buzzer, 0);
        // fica desativado por 3 ms
        sleep_ms(3);
        // decrementa contador
        time -= 3;
    }
}

int main()
{
    // inicialização das portas com os pinos e o buzzer
    led_init();
    stdio_init_all();

    // inicialização do teclado

    while (true)
    {
        // definir os valores para comparação

        // ler o teclado e fazer os comparativos

        // acender o led de acordo com o valor do teclado
    }
}