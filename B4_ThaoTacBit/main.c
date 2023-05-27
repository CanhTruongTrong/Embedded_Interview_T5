/*
    Vd: Cho PORTA = 0b00000000.
    - Viết hàm readByte: in ra PORTA
    - Viết hàm digitalWrite(pin, status):
        + pin: thứ tự bit cần sửa
        + status = low : hạ 1 => 0, status = high: tăng 0 => 1
*/
#include <stdio.h>
#include <stdint.h>

uint8_t PORTA = 0b00000000;
uint8_t PORTB = 0b11111111;

void readByte(uint8_t byte){
    uint8_t tmp = 0b10000000;

    printf("\n0b");
    for(uint8_t i = 0; i < 8; i++){
        uint8_t res = byte & tmp;

        if(res == 0){
            printf("0");
        }else printf("1");

        byte <<= 1;
    }
    printf("\n");
}

typedef enum{
    PIN0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7,
}pins;

typedef enum{
    HIGH,
    LOW,
}status;

void pinHigh(pins pin){
    //PORTA
    PORTA = PORTA | (0b10000000 >> pin); 
}

void pinLow(pins pin){
    //PORTB
    PORTA = PORTA ^ (0b10000000 >> pin);
    // PORTB = PORTB ^ (0b10000000 >> pin);
}

void digitalWrite(pins pin, status stt){
    //PORTA
    if(stt == HIGH){
        pinHigh(pin);
    }else pinLow(pin);
}

int main(){

    // pinHigh(PIN4);
    // readByte(PORTA);

    digitalWrite(PIN0, HIGH);
    digitalWrite(PIN1, HIGH);
    digitalWrite(PIN7, HIGH);
    digitalWrite(PIN7, LOW);
    readByte(PORTA);

    // pinLow(PIN4);
    // readByte(PORTB);
}