# STM32 Blackpill Board Projects

## Class 1

Blinking LED project with onboard LED on pin PC13.

## Class 2

Project to use i2c display to show reading from onboard 12 bit ADC.

### Display config

Display Vcc = 5 V

PB6 -- SCL

PB7 -- SDA

#### sprintf float value

Project Properties -> C/C++ Build -> Settings -> MCU Settings -> Use float with printf from newlib-nano (-u_printf_float).

### ADC config

PA1 -- ADC

#### Polling

Continuous conversion mode enabled.

#### Interrupt

Activate global interrupt of ADC on NVIC Settings and fix the clock issues.

Initialize the ADC working with the interruption after the peripherals are initialized.

Create a function Handler with the name HAL_ADC_ConvCpltCallback() inside USER CODE 4, then every time the 
ADC has a new value this function is executed.


## Class 3