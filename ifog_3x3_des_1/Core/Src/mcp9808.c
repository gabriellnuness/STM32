#include "mcp9808.h"


float read_temperature(unsigned char slave_addr){
    float temperature;
    int temp = 0;
    unsigned char data[2];

//    unsigned char alarms = 0;
    unsigned char upperByte = 0;
    unsigned char lowerByte = 0;
    unsigned char sign = 0;


    I2CReceiveN(slave_addr, TEMP_REG_ADDR, data, 2);


//    alarms = data[1] & 0xE0;

    sign = data[0] & 0x10;
    upperByte = data[0] & 0x0F;
    lowerByte = data[1];

    temp = (temp | upperByte)<<4;
    temp = temp | lowerByte;




    if(sign){
        temperature = 256 - (upperByte*16 + lowerByte*0.0625);
        temperature = temperature*-1;
    }
    else
    temperature = (upperByte*16 + lowerByte*0.0625);

    return temperature;
}
