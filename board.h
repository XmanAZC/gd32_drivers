/*
 * Copyright (c) 2006-2024, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-08-20     BruceOu      first implementation
 * 2024-03-19     Evlers       remove the include of drv_usart.h
 */
#ifndef __BOARD_H__
#define __BOARD_H__

#if defined(SOC_SERIES_GD32C10x)
#include "gd32c10x.h"
#define GD32_SRAM_SIZE 32
#elif defined(SOC_SERIES_GD32C11x)
#include "gd32c11x.h"
#define GD32_SRAM_SIZE 32
#elif defined(SOC_SERIES_GD32F10x)
#include "gd32f10x.h"
#define GD32_SRAM_SIZE 20
#elif defined(SOC_SERIES_GD32F30x)
#include "gd32f30x.h"
#define GD32_SRAM_SIZE 48
#endif

#include "drv_gpio.h"

#define GD32_SRAM_END (0x20000000 + GD32_SRAM_SIZE * 1024)

extern int __bss_end;
#define HEAP_BEGIN (&__bss_end)

#define HEAP_END GD32_SRAM_END

#endif
