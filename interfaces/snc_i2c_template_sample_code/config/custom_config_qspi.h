/**
 ****************************************************************************************
 *
 * @file custom_config_qspi.h
 *
 * @brief Board Support Package. User Configuration file for cached QSPI mode.
 *
 * Copyright (C) 2017-2021 Renesas Electronics Corporation and/or its affiliates
 * The MIT License (MIT)
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
 * OR OTHER DEALINGS IN THE SOFTWARE.
 ****************************************************************************************
 */

#ifndef CUSTOM_CONFIG_QSPI_H_
#define CUSTOM_CONFIG_QSPI_H_

#include "bsp_definitions.h"

#define CONFIG_RETARGET

#define dg_configUSE_LP_CLK                     LP_CLK_32768
#define dg_configEXEC_MODE                      MODE_IS_CACHED
#define dg_configCODE_LOCATION                  NON_VOLATILE_IS_FLASH

#define dg_configUSE_WDOG                       (1)

#define dg_configFLASH_CONNECTED_TO             (FLASH_CONNECTED_TO_1V8)
#define dg_configFLASH_POWER_DOWN               (1)

#define dg_configPOWER_1V8_ACTIVE               (1)
#define dg_configPOWER_1V8_SLEEP                (1)

#define dg_configBATTERY_TYPE                   (BATTERY_TYPE_LIMN2O4)
#define dg_configBATTERY_CHARGE_CURRENT         (2)     // 30mA
#define dg_configBATTERY_PRECHARGE_CURRENT      (20)    // 2.1mA
#define dg_configBATTERY_CHARGE_NTC             (1)     // disabled

#define dg_configUSE_USB                        (0)
#define dg_configUSE_USB_CHARGER                (0)
#define dg_configALLOW_CHARGING_NOT_ENUM        (1)

#define dg_configUSE_SW_CURSOR                  (1)

#define dg_configRF_ENABLE_RECALIBRATION        (0)

/* BLE not enabled (note that P0_12 used by sensor board conflicts with CMAC debug interface) */
#define dg_configENABLE_CMAC_DEBUGGER           (0)

/*************************************************************************************************\
 * Memory layout specific config
 */

/*************************************************************************************************\
 * FreeRTOS specific config
 */
#define OS_FREERTOS                             /* Define this to use FreeRTOS */
#define configTOTAL_HEAP_SIZE                   30000   /* This is the FreeRTOS Total Heap Size */

/*************************************************************************************************\
 * Peripheral specific config
 */
#define dg_configUSE_SNC_HW_I2C                 (1)
#define dg_configI2C_ADAPTER                    (1)
#define dg_configUSE_HW_I2C                     (1)
#define dg_configUSE_SNC_HW_GPIO                (1)
#define dg_configUSE_HW_SENSOR_NODE             (1)
#define dg_configUSE_HW_SENSOR_NODE_EMU         (0)
#define dg_configUSE_SNC_QUEUES                 (1)
#define dg_configUSE_SNC_DEBUGGER               (1)

#define dg_configFLASH_ADAPTER                  (0)
#define dg_configNVMS_ADAPTER                   (0)
#define dg_configNVMS_VES                       (0)

#define dg_configSNC_ADAPTER                    (1)

/* Include bsp default values */
#include "bsp_defaults.h"
/* Include middleware default values */
#include "middleware_defaults.h"

#endif /* CUSTOM_CONFIG_QSPI_H_ */
