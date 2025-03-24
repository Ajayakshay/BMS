/*
 * LTC6804-STM-G.h
 *
 *  Created on: Jan 19, 2025
 *      Author: Ajay
 */
#ifndef INC_LTC_H_
#define INC_LTC_H_
#include "main.h"

enum ltc6804_command_codes_e {
    CMD_WRCFG   = 0x0001, // Write Configuration Register Group
    CMD_RDCFG   = 0x0002, // Read Configuration Register Group
    CMD_RDCVA   = 0x0004, // Read Cell Voltage Register Group A
    CMD_RDCVB   = 0x0006, // Read Cell Voltage Register Group B
    CMD_RDCVC   = 0x0008, // Read Cell Voltage Register Group C
    CMD_RDCVD   = 0x000A, // Read Cell Voltage Register Group D
    CMD_RDAUXA  = 0x000C, // Read Auxiliary Register Group A
	CMD_RDAUXB  = 0x000E, // Read Auxiliary Register Group B
    CMD_RDSTATA = 0x0010, // Read Status Register Group A
    CMD_RDSTATB = 0x0012, // Read Status Register Group B
    CMD_ADCV    = 0x0360, // Start Cell Voltage ADC Conversion for all cells and Poll Status
    CMD_ADOW    = 0x0228, // Start Open Wire ADC Conversion and Poll Status
    CMD_CVST    = 0x0207, // Start Self-Test Cell Voltage Conversion and Poll Status
    CMD_ADAX    = 0x0560, // Start GPIOs ADC Conversion and Poll Status
    CMD_AXST    = 0x0407, // Start Self-Test GPIOs Conversion and Poll Status
    CMD_ADSTAT  = 0x0468, // Start Status group ADC Conversion and Poll Status
    CMD_STATST  = 0x040F, // Start Self-Test Status group Conversion and Poll Status
    CMD_ADCVAX  = 0x046F, // Start Combined Cell Voltage and GPIO1, GPIO2 Conversion and Poll Status
    CMD_CLRCELL = 0x0711, // Clear Cell Voltage Register Group
    CMD_CLRAUX  = 0x0712, // Clear Auxiliary Register Group
    CMD_CLRSTAT = 0x0713, // Clear Status Register Group
    CMD_PLADC   = 0x0714, // Poll ADC Conversion Status
    CMD_DIAGN   = 0x0715, // Diagnose MUX and Poll Status
    CMD_WRCOMM  = 0x0721, // Write COMM Register Group
    CMD_RDCOMM  = 0x0722, // Read COMM Register Group
    CMD_STCOMM  = 0x0723  // Start I2C/SPI Communication
};
enum config_reg_e{
	REFON  = 0x1,
	ADCOPT = 0x0,
	GPIO5  = 0x0,
	GPIO4  = 0x0,
	GPIO3  = 0x0,
	GPIO2  = 0x0,
	GPIO1  = 0x0,
	VUV    = 0x0,
	VOV    = 0x0
};

//Function Declaration

void LTC6804_Init(void);
void LTC6804_SendCommand(uint16_t opcode);
void LTC6804_Select(void);
void LTC6804_DeSelect(void);
uint16_t LTC6804_CalculatePEC(uint8_t *data, uint8_t len);
uint8_t LTC6804_PollADCStatus(void);
void LTC6804_PollTillAdcComplete(void);
void LTC6804_SerialWake(void);
void LTC6804_ReceiveData(uint8_t *data_buffer, uint8_t data_length);
float* LTC6804_ReadAllCellVoltage(void);
void Transmit(void);
void init_PEC15_Table(void);
#endif // INC_LTC_H_
