#pragma once

#define AP_HAL_BOARD_DRIVER AP_HAL_QURT
#define HAL_BOARD_NAME "QURT"
#define HAL_CPU_CLASS HAL_CPU_CLASS_1000
#define HAL_STORAGE_SIZE            16384
#define HAL_STORAGE_SIZE_AVAILABLE  HAL_STORAGE_SIZE
#define HAL_INS_DEFAULT HAL_INS_QURT
#define HAL_BARO_DEFAULT HAL_BARO_QURT
#define HAL_COMPASS_DEFAULT HAL_COMPASS_QURT
#define CONFIG_HAL_BOARD_SUBTYPE HAL_BOARD_SUBTYPE_NONE
#define HAL_BOARD_LOG_DIRECTORY "/dev/fs/logs"
#define HAL_OS_POSIX_IO 1
#define HAL_SERIAL0_BAUD_DEFAULT 115200

#define HAL_HAVE_BOARD_VOLTAGE 1
