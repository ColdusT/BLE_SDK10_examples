/**
 ****************************************************************************************
 *
 * @file custom_config_qspi.h
 *
 * @brief Board Support Package. User Configuration file for cached QSPI mode.
 *
 * Copyright (C) 2015-2018 Dialog Semiconductor.
 * This computer program includes Confidential, Proprietary Information
 * of Dialog Semiconductor. All Rights Reserved.
 *
 ****************************************************************************************
 */

#ifndef CUSTOM_CONFIG_QSPI_H_
#define CUSTOM_CONFIG_QSPI_H_

#include "bsp_definitions.h"

#define dg_configUSE_LP_CLK                     LP_CLK_32768
#define dg_configEXEC_MODE                      MODE_IS_CACHED
#define dg_configCODE_LOCATION                  NON_VOLATILE_IS_FLASH

#define dg_configUSE_WDOG                       ( 0 )

#define dg_configFLASH_CONNECTED_TO             ( FLASH_CONNECTED_TO_1V8P )
#define dg_configFLASH_POWER_DOWN               ( 0 ) //No power save for this app

#define dg_configPOWER_1V8P_ACTIVE              ( 1 )
#define dg_configPOWER_1V8P_SLEEP               ( 1 )

#define dg_configBATTERY_TYPE                   (BATTERY_TYPE_NO_BATTERY)

#define dg_configUSE_SW_CURSOR                  (0)

#define dg_configFLASH_AUTODETECT               (1)

/***************************************************************************************************\
 * FreeRTOS specific config
 */
#define OS_FREERTOS                                        /* Define this to use FreeRTOS */
#define configTOTAL_HEAP_SIZE                    (14000)   /* This is the FreeRTOS Total Heap Size */


/***************************************************************************************************\
 * Peripheral specific config
 */
#define dg_configRF_ENABLE_RECALIBRATION        (0)

#define dg_configFLASH_ADAPTER                  (0)
#define dg_configNVMS_ADAPTER                   (0)
#define dg_configNVMS_VES                       (0)

#define dg_configUART_ADAPTER                   (1)     /* Enable the UART Adapter abstraction layer
                                                         * and API */

#if (dg_configUART_ADAPTER == 1)
#undef CONFIG_RETARGET
#endif

/* Include bsp default values */
#include "bsp_defaults.h"
/* Include middleware default values */
#include "middleware_defaults.h"

#endif /* CUSTOM_CONFIG_QSPI_H_ */
