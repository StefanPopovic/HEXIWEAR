/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : GPIO.c
**     Project     : HEXIWEAR_OLED_sensors_RTOS
**     Processor   : MK64FN1M0VDC12
**     Component   : fsl_gpio
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-03-04, 12:30, # CodeGen: 0
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file GPIO.c
** @version 01.00
*/         
/*!
**  @addtogroup GPIO_module GPIO module documentation
**  @{
*/         

/* MODULE GPIO. */

#include "Events.h"
#include "GPIO.h"
#include <stdbool.h>

const gpio_output_pin_user_config_t OLED_cfg[] = {
  {
    .pinName = OLED_CS,
    .config.outputLogic = 1,
    .config.slewRate = kPortSlowSlewRate,
    .config.isOpenDrainEnabled = false,
    .config.driveStrength = kPortLowDriveStrength,
  },
  {
    .pinName = OLED_RST,
    .config.outputLogic = 0,
    .config.slewRate = kPortSlowSlewRate,
    .config.isOpenDrainEnabled = false,
    .config.driveStrength = kPortLowDriveStrength,
  },
  {
    .pinName = OLED_DC,
    .config.outputLogic = 0,
    .config.slewRate = kPortSlowSlewRate,
    .config.isOpenDrainEnabled = false,
    .config.driveStrength = kPortLowDriveStrength,
  },
  {
    .pinName = GPIO_PINS_OUT_OF_RANGE,
  }
};
      
const gpio_output_pin_user_config_t PWR_cfg[] = {
  {
    .pinName = PWR_OLED,
    .config.outputLogic = 1,
    .config.slewRate = kPortSlowSlewRate,
    .config.isOpenDrainEnabled = false,
    .config.driveStrength = kPortLowDriveStrength,
  },
  {
    .pinName = GPIO_PINS_OUT_OF_RANGE,
  }
};

const gpio_output_pin_user_config_t RGB_cfg[] = {
  {
    .pinName = RED_LED,
    .config.outputLogic = 1,
    .config.slewRate = kPortSlowSlewRate,
    .config.isOpenDrainEnabled = false,
    .config.driveStrength = kPortLowDriveStrength,
  },
  {
    .pinName = GREEN_LED,
    .config.outputLogic = 1,
    .config.slewRate = kPortSlowSlewRate,
    .config.isOpenDrainEnabled = false,
    .config.driveStrength = kPortLowDriveStrength,
  },
  {
    .pinName = BLUE_LED,
    .config.outputLogic = 1,
    .config.slewRate = kPortSlowSlewRate,
    .config.isOpenDrainEnabled = false,
    .config.driveStrength = kPortLowDriveStrength,
  },
  {
    .pinName = GPIO_PINS_OUT_OF_RANGE,
  }
};

/* END GPIO. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
