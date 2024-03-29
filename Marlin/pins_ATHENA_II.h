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
 * Sanguinololu board pin assignments
 */

/**
 * Rev B    26 DEC 2016
 *
 * 1) added pointer to a current Arduino IDE extension
 * 2) added support for M3, M4 & M5 spindle control commands
 * 3) added case light pin definition
 *
 */

/**
 * A useable Arduino IDE extension (board manager) can be found at
 * https://github.com/Lauszus/Sanguino
 *
 * This extension has been tested on Arduino 1.6.12 & 1.8.0
 *
 * Here's the JSON path:
 * https://raw.githubusercontent.com/Lauszus/Sanguino/master/package_lauszus_sanguino_index.json
 *
 * When installing select 1.0.2
 *
 * Installation instructions can be found at https://learn.sparkfun.com/pages/CustomBoardsArduino
 * Just use the above JSON URL instead of Sparkfun's JSON.
 *
 * Once installed select the Sanguino board and then select the CPU.
 *
 */

#if  !defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu. Then select ATmega1284P (16MHz)"
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "Athena II"
#endif

//
// Motor Mapping
// (x, y, z) -> (u, v, w)

//
// Limit Switches
// (x, y, z) -> (u, v, w)
#define X_STOP_PIN          3
#define Y_STOP_PIN          4
#define Z_STOP_PIN          12

//
// Steppers
//
#define X_STEP_PIN          0
#define X_DIR_PIN           1

#define Y_STEP_PIN          6
#define Y_DIR_PIN           7

#define Z_STEP_PIN          16
#define Z_DIR_PIN           17

#define E0_STEP_PIN         10
#define E0_DIR_PIN          11

//
// Temperature Sensors
//
#define TEMP_0_PIN          0   // Analog Input (pin 31 extruder)
#define TEMP_BED_PIN        1   // Analog Input (pin 30 bed)

//
// Heaters / Fans
//
#define HEATER_0_PIN       23   // (extruder)
#define HEATER_BED_PIN     18   // (bed)
/*
#if !defined(FAN_PIN)
  #define FAN_PIN          2    // Works for Panelolu2 too
#endif
*/
//
// Enable Pins
//
#define X_ENABLE_PIN       13
#define Y_ENABLE_PIN       13
#define Z_ENABLE_PIN       13
#define E0_ENABLE_PIN      5
