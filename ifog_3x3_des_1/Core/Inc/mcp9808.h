#ifndef MCP9808_H_
#define MCP9808_H_


// registers addresses from MCP9808 datasheet
#define DEV_REG_ADDR 0x30
#define RES_REG_ADDR 0x08
#define TEMP_REG_ADDR 0x05
#define CONF_REG_ADDR 0x01

// The address to read the MCP9808 temperature sensor is ‘0011,A2,A1,A0’
#define SENSOR_TEMP_ADDR1 0b00110000
#define SENSOR_TEMP_ADDR2 0b00110010
#define SENSOR_TEMP_ADDR3 0b00110100
#define SENSOR_TEMP_ADDR4 0b00110110
#define SENSOR_TEMP_ADDR5 0b00111000
#define SENSOR_TEMP_ADDR6 0b00111010
#define SENSOR_TEMP_ADDR7 0b00111100
#define SENSOR_TEMP_ADDR8 0b00111110

//resolution: 0.5 C  sample time: 30 ms
#define RESOLUTION_05000   0x00
//resolution: 0.25 C sample time: 65 ms
#define RESOLUTION_02500   0x01
//resolution: 0.125 C sample time: 130 ms
#define RESOLUTION_01250   0x02
//resolution: 0.0625 C sample time: 250 ms
#define RESOLUTION_00625   0x03


/**
 * @brief Reading temperature from mcp9808
 * 
 */
float read_temperature(unsigned char slave_addr);





#endif //MCP9808_H_
