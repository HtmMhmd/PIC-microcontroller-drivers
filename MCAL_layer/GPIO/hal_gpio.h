/* 
 * File:   hal_gpio.h
 * Author: LENOVO
 *
 * Created on July 3, 2023, 1:56 AM
 */
/*  Includes    */
#ifndef HAL_GPIO_H
#define	HAL_GPIO_H

#include "../proc/pic18f4620.h"
#include "../mcal_std_types.h"
#include "../device_config.h"

/*Macro Dec*/
#define BIT_MASK (uint8)1

#define PORT_PIN_MAX_NUMBER  8
#define PORT_MAX_NUMBER      5
#define PORTC_MASK           0xFF

/*Macro Function Dec*/
#define HWREG(_X)       (*(volatile uint8 *)(_X))

#define SET_BIT(REG, BIT_POSN)     (REG |= (BIT_MASK << BIT_POSN))
#define CLEAR_BIT(REG, BIT_POSN)   (REG &= ~(BIT_MASK << BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)  (REG ^= (BIT_MASK << BIT_POSN))

#define READ_BIT(REG, BIT_POSN)    ((REG >> BIT_POSN) & BIT_MASK)

/*Data Type Dec*/
typedef enum{
            LOW = 0,
            HIGH = 1

}logic_t;

typedef enum{
            GPIO_DIRECTION_OUTPUT = 0,
            GPIO_DIRECTION_INPUT = 1

}direction_t;

typedef enum{
            PIN0 = 0,
            PIN1 = 1,
            PIN2 = 2,
            PIN3 = 3,
            PIN4 = 4,
            PIN5 = 5,
            PIN6 = 6,
            PIN7 = 7

}pin_index_t;

typedef enum{
            PORTA_INDEX = 0,
            PORTB_INDEX = 1,
            PORTC_INDEX = 2,
            PORTD_INDEX = 3,
            PORTE_INDEX = 4
                    
}port_index_t;

typedef struct{
    uint8 port : 3;    
    uint8 pin : 3;       
    uint8 direction : 1;
    uint8 logic : 1;
    
}pin_config_t;

/*Function Dec*/
Std_ReturnType gpio_pin_intialize(const pin_config_t *_pin_config);

Std_ReturnType gpio_pin_direction_intialize(const pin_config_t *_pin_config);
Std_ReturnType gpio_pin_get_direction_status(const pin_config_t *_pin_config, direction_t *direction_status);

Std_ReturnType gpio_pin_write_logic(const pin_config_t *_pin_config, logic_t logic);
Std_ReturnType gpio_pin_read_logic(const pin_config_t *_pin_config, logic_t *logic);
Std_ReturnType gpio_pin_toggle_logic(const pin_config_t *_pin_config);

/*'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''*/

Std_ReturnType gpio_port_direction_intialize(port_index_t port, uint8 direction);
Std_ReturnType gpio_port_get_direction_status(port_index_t port, uint8 *direction_status);

Std_ReturnType gpio_port_write_logic(port_index_t port, uint8 logic);
Std_ReturnType gpio_port_read_logic(port_index_t port, uint8 *logic);
Std_ReturnType gpio_port_toggle_logic(port_index_t port);

#endif	/* HAL_GPIO_H */

