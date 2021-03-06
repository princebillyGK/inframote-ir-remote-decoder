#include<Adafruit_SSD1306.h>

#ifndef SCREENS_H
#define SCREENS_H

/*!
        @brief      Loads wating screen for taking new input
        @param      display
                An Adafruit_SSD1306 Instance
        @param      color
                Indicates the color of the splash screen text and objects
        @param      bgColor
                Indicates the background color of splash screen
        @param      inputNo
                Indicates the current input number

        @note       This function will work with any kind of display using
                Adafruit_GFX library with some modification
*/
void loadWaitingScreen(Adafruit_SSD1306* display, uint16_t color,
                      uint16_t bgColor, uint8_t inputNo);

/*!
        @brief      Loads test screen for buttons
        @param      display
                An Adafruit_SSD1306 Instance
        @param      color
                Indicates the color of the splash screen text and objects
        @param      bgColor
                Indicates the background color of splash screen
        @param      protocol
                Indicates the protocol of the IR signal
        @param      address
                Indicates the address of IR signal
        @param  command
                Indicates the command of IR signal
        @note       This function will work with any kind of display using
                Adafruit_GFX library with some modification
*/
void loadTestScreen(Adafruit_SSD1306* display, uint16_t color,
                      uint16_t bgColor, uint8_t inputNo, int protocol, uint16_t address, uint16_t command);

#endif