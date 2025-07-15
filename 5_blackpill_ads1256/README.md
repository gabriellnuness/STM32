# IFOG 3x3 firmware with 24 bits ADC

- i2c: temperature -> pb6/pb7
- uart: bluetooth -> hc05 pa9/pa10
- spi1: ads1256 -> pa5/pa6/pa7
- gpio: ddry spi1 -> pa4

# old timer structure...
- timer2: read adc (100 Hz)
- timer3: read temperature (4 Hz)
- timer4: transmit via uart (10 Hz)

# new timer structure
- timer2: read adc (2000 Hz)
- timer3: read temperature (4 Hz)
- timer4: transmit via uart (100 Hz)
