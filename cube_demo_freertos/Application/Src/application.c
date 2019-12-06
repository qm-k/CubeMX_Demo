/*
 * @Author: 钱宁博
 * @Date: 2019-11-28 22:02:54
 * @LastEditTime: 2019-12-01 16:30:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cube_demo_freertos\Application\Src\application.c
 */
#include "application.h"

osThreadId blink_taskHandle;

void blink(void const * argument)
{
    for (;;)
    {
        printf("blink --\r\n");
        osDelay(800);
    }
}