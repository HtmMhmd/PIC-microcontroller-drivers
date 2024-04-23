# Project Description

This project is an embedded systems mini-project focused on PIC microcontroller drivers. 

It involves developing drivers and configurations for PIC microcontrollers for various applications. 

The project is based on Layer architecture and includes the following layers:

- Application Layer
- Microcontroller Abstraction Layer
- Electronic Control Unit Layer


# Project Structure
Source Files: Contains the source code files for the project, including application.c, device_config.c, and driver files like ecu_led.c and hal_gpio.c.
Header Files: Includes header files for the project, such as application.h, mcal_std_types.h, and hal_gpio.h.
ECU_layer : Folder for Electronic Control Unit components, including **LED driver files**.
MCAL_layer : Folder for Microcontroller Abstraction Layer components, including **GPIO** related files and standard libraries.

# Documentation

## MCAL Layer
### GPIO
File: [hal_gpio.c](MCAL_layer\GPIO\hal_gpio.c)

This file contains the implementation of a GPIO (General Purpose Input/Output) HAL (Hardware Abstraction Layer) for a microcontroller.

#### Functions:

    Std_ReturnType gpio_pin_intialize(const pin_config_t *_pin_config);

Initializes a GPIO pin with the given configuration. 

`Returns`: E_OK if successful, E_NOT_OK otherwise.

    Std_ReturnType gpio_pin_direction_intialize(const pin_config_t *_pin_config);

Initializes the direction of a GPIO pin (input or output) based on the given configuration. 

`Returns`: E_OK if successful, E_NOT_OK otherwise.

    Std_ReturnType gpio_pin_get_direction_status(const pin_config_t *_pin_config, direction_t *direction_status);

Retrieves the direction status (input or output) of a GPIO pin based on the given configuration. 

`Returns`: E_OK if successful, E_NOT_OK otherwise.

    Std_ReturnType gpio_pin_write_logic(const pin_config_t *_pin_config, logic_t logic);

Writes a logic value (low or high) to a GPIO pin based on the given configuration.

`Returns`: E_OK if successful, E_NOT_OK otherwise.

    Std_ReturnType gpio_pin_read_logic(const pin_config_t *_pin_config, logic_t *logic);

Reads the logic value (low or high) of a GPIO pin based on the given configuration.

`Returns`: E_OK if successful, E_NOT_OK otherwise.

    Std_ReturnType gpio_pin_toggle_logic(const pin_config_t *_pin_config);

Toggles the logic value (low to high or high to low) of a GPIO pin based on the given configuration. 

Returns: E_OK if successful, E_NOT_OK otherwise.

#### Data Structures:

    pin_config_t

A structure that contains the configuration of a GPIO pin, including the port index, pin number, direction, and logic value.

    direction_t

An enumeration that represents the direction of a GPIO pin (input or output).

    logic_t

An enumeration that represents the logic value of a GPIO pin (low or high).
