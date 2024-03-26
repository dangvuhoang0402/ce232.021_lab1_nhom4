/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include "driver/gpio.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_2,GPIO_MODE_OUTPUT);
    while(1){
        gpio_set_level(GPIO_NUM_2, 1);
        printf("Im on!\n");
        vTaskDelay(1000);
        gpio_set_level(GPIO_NUM_2,0);
        printf("Im off!\n");
        vTaskDelay(1000);
    }
}
