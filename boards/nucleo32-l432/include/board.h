/*
 * Copyright (C) 2017  Inria
 *               2017  OTA keys
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    boards_nucleo32-l432 Nucleo32-L432
 * @ingroup     boards
 * @brief       Board specific files for the nucleo32-l432 board
 * @{
 *
 * @file
 * @brief       Board specific definitions for the nucleo32-l432 board
 *
 * @author      Alexandre Abadie <alexandre.abadie@inria.fr>
 * @author      Vincent Dupont <vincent@otakeys.com>
 */

#ifndef BOARD_H
#define BOARD_H

#include "board_common.h"

#define MRF24J40_PARAMS_BOARD  { .spi = 0, \
                                 .spi_clk = MRF24J40_PARAM_SPI_CLK, \
                                 .cs_pin = GPIO_PIN(PORT_A, 11), \
                                 .int_pin = GPIO_PIN(PORT_B, 6), \
                                 .reset_pin = GPIO_PIN(PORT_B, 1) }
/*
   MRF24J40MA 
   _____________
  |             |
  |             |
  |_____________|
1_| GND     GND |_12
  |             |
2_| RST     GND |_11
  |             |
3_| WK      VIN |_10
  |             |
4_| INT     NC  |_9
  |             |
5_| SDI     CSn |_8
  |             | 
6_| SCK     SDO |_7
  |_____________|

 (2) RST <-> PB1
 (4) INT <-> PB6
 (5) SDI <-> PB5
 (6) SCK <-> PB3
 (7) SDO <-> PB4
 (8) CSn <-> PA11

 */


#ifdef __cplusplus
extern "C" {}
#endif

#endif /* BOARD_H */
/** @} */
