/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * OMC with 2560  chip
 *
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH true

//x axis ok 18-5-2016
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN          -1

//Y axis ok 18-5-2016
#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       38 //admg was 56 
#define Y_MIN_PIN          14
#define Y_MAX_PIN          -1

//Z axis ok 18-5-2016
#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       38 //admg was 62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          -1


#define FAN_PIN            9    // extruder 1 fan


//E0 ok 18-5-2016
#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      38   // admg was 24
#define HEATER_0_PIN       10   // EXTRUDER 1
#define TEMP_0_PIN         13   // ANALOG NUMBERING
#define EXTRUDER_0_AUTO_FAN_PIN   49

//E1 ok 18-5-2016
#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      38   // admg was 30
#define HEATER_1_PIN       40    // EXTRUDER 2
#define TEMP_1_PIN         15   // ANALOG NUMBERING
#define EXTRUDER_1_AUTO_FAN_PIN   45

#define E2_STEP_PIN        24
#define E2_DIR_PIN         30
#define E2_ENABLE_PIN      38
#define HEATER_2_PIN       47
#define TEMP_2_PIN         12   // ANALOG NUMBERING
#define EXTRUDER_2_AUTO_FAN_PIN   44

//bed ok 18-5-2016
#define HEATER_BED_PIN      8   // BED
#define TEMP_BED_PIN       14   // ANALOG NUMBERING


#define SDPOWER            -1
#define SDSS               53
#define SD_DETECT_PIN      -1

// these pins are defined in the SD library if building with SD support
#define SCK_PIN          52
#define MISO_PIN         50
#define MOSI_PIN         51

#define LED_PIN            -13

#define CONTROLLERFAN_PIN  11 // Pin used for the fan to cool controller
#define PS_ON_PIN          -12

#define SERVO0_PIN         -11 
#define SERVO1_PIN          -6
#define SERVO2_PIN          -5
#define SERVO3_PIN         - 4





