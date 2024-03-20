# IFOG 3x3 firmware

## Problems

The first adc variable is always wrong with ADC being triggered by timer and sending data directly through DMA.

My guess it has to do with the DMA buffer size and writing time.

## Notes
Objective: read 4 ADC with transimpedance output signal and one temperature sensor from i2c, 
then send all data through UART.

- The acquisition rate (Fs) must be stable.
    ADC = 100 ~ 1000 Hz
    Temperature = 1 Hz

To make the Fs stable, we are going to use the Timer from blackpill.
Timer 2 and 5 work with 50 MHz with 16 bit prescaler and 32 bit counter resolution.

The AD conversion is going to be triggered by Timer2, scaled by 50000-1 (1kHz).

The data from the ADC is sent to the memory via DMA.
Probably using a circular buffer with enough size to be able to store 5 float variables while wait to be sent via UART at 100 Hz, ideally.

What is the AD clock? PCLK2/4 = 25 MHz
ADC time for conversion: tc = ( sampling time + 3 cycles )/ ADC clock

If the required ADC is the internal temperature sensor, the sampling time should be 10 uS. So check the clock constants to get that value.

As a debugger, we can choose a gpio port and toggle it after every conversion to analyze with the oscilloscope.