/*
 * @Author: 钱宁博
 * @Date: 2019-11-28 22:03:28
 * @LastEditTime: 2019-12-01 16:22:26
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cube_demo_freertos\Application\Inc\application.h
 */

#ifndef APPLICATION_H
#define APPLICATION_H

#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

void blink(void const * argument);

#endif /* APPLICATION_H */
