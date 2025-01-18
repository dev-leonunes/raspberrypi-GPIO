#include <stdio.h>
#include "pico/stdlib.h"


const uint Buzzer = 21;
const uint led_G = 11;
const uint led_B = 12;
const uint led_R = 13;
#define Tempo_led = 500;

//as funçoes de  acender e apagar os leds individualmente



//função de leitura do teclado



//função de acionamento do buzzer, um pra erro e outro para acerto
void acionar_buzzer(){
    // tempo de acionamento do buzzer
    int time =1000;
    // executa enquanto o contador não zeroa
    while(time>0){
        //ativa o buzzer
        gpio_put(Buzzer,1);
        // fica ativo por 1 ms
        sleep_ms(1);
        // decrementa contador
        time-=1;
        //desativa o buzzer
        gpio_put(Buzzer,0);
        // fica desativado por 3 ms
        sleep_ms(3);
        // decrementa contador
        time-=3;
    }

}






int main(){
    //inicialização das portas com os pinos e o buzzer



    
    //inicialização do teclado


    

while(true){
 // definir os valores para comparação



 // Ler o teclado e fazer os comparativos


 // acender o led de acordo com o valor do teclado


}


}