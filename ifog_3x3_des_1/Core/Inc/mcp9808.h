#ifndef MCP9808_H_
#define MCP9808_H_


// registers addresses from MCP9808 datasheet
#define RES_REG_ADDR 0x08
#define TEMP_REG_ADDR 0x05
#define CONF_REG_ADDR 0x01

// The address for the MCP9808 temperature sensor is ‘0011,A2,A1,A0’
#define SENSOR_TEMP_ADDR1 0b0011000
#define SENSOR_TEMP_ADDR2 0b0011001
#define SENSOR_TEMP_ADDR3 0b0011010
#define SENSOR_TEMP_ADDR4 0b0011011
#define SENSOR_TEMP_ADDR5 0b0011100
#define SENSOR_TEMP_ADDR6 0b0011101
#define SENSOR_TEMP_ADDR7 0b0011110
#define SENSOR_TEMP_ADDR8 0b0011111

//resolution: 0.5 C  sample time: 30 ms
#define RESOLUTION_1   0x00
//resolution: 0.25 C sample time: 65 ms
#define RESOLUTION_2   0x01
//resolution: 0.125 C sample time: 130 ms
#define RESOLUTION_3   0x02
//resolution: 0.0625 C sample time: 250 ms
#define RESOLUTION_4   0x03



float read_temperature(unsigned char slave_addr);





#endif //MCP9808_H_
