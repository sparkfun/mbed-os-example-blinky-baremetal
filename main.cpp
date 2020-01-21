/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME 500 //msec

// DigitalOut led1(LED1);

int main()
{
    // Set the clock frequency.
    am_hal_clkgen_control(AM_HAL_CLKGEN_CONTROL_SYSCLK_MAX, 0);

    // Set the default cache configuration
    am_hal_cachectrl_config(&am_hal_cachectrl_defaults);
    am_hal_cachectrl_enable();

    // Configure the board for low power operation.
    am_bsp_low_power_init();

    while (true)
    {
        am_hal_gpio_output_toggle(LED1);
        am_util_delay_ms(WAIT_TIME);
    }
}
