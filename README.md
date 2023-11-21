# STM32 Blackpill Board Projects

## Class 1

Blinking LED project with onboard LED on pin PC13.

## Class 2

Project to use i2c display to show reading from onboard 12 bit ADC.

### Display config

Display Vcc = 5 V

PB6 -- SCL

PB7 -- SDA


### ADC config

PA1 -- ADC

Continuous conversion mode enabled

#### sprintf float value

Project Properties -> C/C++ Build -> Settings -> MCU Settings -> Use float with printf from newlib-nano (-u_printf_float)



## Class 3