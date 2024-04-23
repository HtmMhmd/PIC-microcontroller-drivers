/* 
 * File:   application.c
 * Author: LENOVO
 *
 * Created on July 3, 2023, 1:44 AM
 */

#include <stdio.h>
#include <stdlib.h>

#include "application.h"
pin_config_t led1 = {
    .port = PORTC_INDEX,
    .pin = PIN0,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = HIGH
};

pin_config_t led2 = {
    .port = PORTC_INDEX,
    .pin = PIN1,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = LOW
};

pin_config_t led3 = {
    .port = PORTC_INDEX,
    .pin = PIN2,
    .direction = GPIO_DIRECTION_OUTPUT,
    .logic = HIGH
};
pin_config_t btn1 = {
    .port = PORTD_INDEX,
    .pin = PIN0,
    .direction = GPIO_DIRECTION_INPUT,
    .logic = LOW
};

int main() {
    gpio_pin_intialize(&led1);
    gpio_pin_intialize(&led2);
    gpio_pin_intialize(&led3);
    while(1){
        
        __delay_ms(250);

    }
    return (EXIT_SUCCESS);
}

