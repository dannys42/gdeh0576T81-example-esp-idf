#ifndef _DISPLAY_EPD_W21_SPI_
#define _DISPLAY_EPD_W21_SPI_
#include "Arduino.h"
#include <sdkconfig.h>

//IO settings
#define isEPD_W21_BUSY digitalRead(CONFIG_GDEH0576T81_GPIO_BUSY)  //BUSY
#define EPD_W21_RST_0 digitalWrite(CONFIG_GDEH0576T81_GPIO_RST,LOW)  //RES
#define EPD_W21_RST_1 digitalWrite(CONFIG_GDEH0576T81_GPIO_RST,HIGH)
#define EPD_W21_DC_0  digitalWrite(CONFIG_GDEH0576T81_GPIO_DC,LOW) //DC
#define EPD_W21_DC_1  digitalWrite(CONFIG_GDEH0576T81_GPIO_DC,HIGH)
#define EPD_W21_CS_0 digitalWrite(CONFIG_GDEH0576T81_GPIO_CS,LOW) //CS
#define EPD_W21_CS_1 digitalWrite(CONFIG_GDEH0576T81_GPIO_CS,HIGH)

#define EPD_W21_MOSI_0  digitalWrite(CONFIG_GDEH0576T81_GPIO_MOSI,LOW) //SCK
#define EPD_W21_MOSI_1  digitalWrite(CONFIG_GDEH0576T81_GPIO_MOSI,HIGH)
#define EPD_W21_CLK_0 digitalWrite(CONFIG_GDEH0576T81_GPIO_SCK,LOW) //SDIN
#define EPD_W21_CLK_1 digitalWrite(CONFIG_GDEH0576T81_GPIO_SCK,HIGH)
#define EPD_W21_READ digitalRead(CONFIG_GDEH0576T81_GPIO_MOSI)  //SDA

void SPI_Write(unsigned char value);
void EPD_W21_WriteDATA(unsigned char datas);
void EPD_W21_WriteCMD(unsigned char command);
unsigned char EPD_W21_ReadDATA(void);

#endif
