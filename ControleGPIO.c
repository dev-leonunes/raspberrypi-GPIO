#include <stdio.h>
#include "pico/stdlib.h"


const uint Buzzer = 21;
const uint led_G = 11;
const uint led_B = 12;
const uint led_R = 13;
#define Tempo_led = 500;
#define cols 4
#define rows 4

//as funçoes de  acender e apagar os leds individualmente



//função de leitura do teclado


const uint8_t row_pins[rows] = {8,7,6,5};//R1 R2 R3 R4
const uint8_t col_pins[cols] = {4,3,2,28};//C1 C2 C3 C4

//mapamento teclado matricial
const char key_map[rows][cols] = {
    {'1','2','3','A'},
    {'4','5','6','B'},
    {'7','8','9','C'},
    {'*','0','#','D'}
};
//inicializacao do teclao
void keypad_init(){
    for(int i = 0; i< rows;i++){
        gpio_init(row_pins[i]);
        gpio_set_dir(row_pins[i], GPIO_OUT);
        gpio_put(row_pins[i],false);
    }
    for(int i = 0; i< cols;i++){
        gpio_init(col_pins[i]);
        gpio_set_dir(col_pins[i], GPIO_IN);
        gpio_pull_down(col_pins[i]);
    }
}

//função de acionamento do buzzer, um pra erro e outro para acerto







int main(){
    //inicialização das portas com os pinos e o buzzer



    
    //inicialização do teclado
    keypad_init();

    

    while(true){
    // definir os valores para comparação



    // Ler o teclado e fazer os comparativos


    // acender o led de acordo com o valor do teclado


}


}