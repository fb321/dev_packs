;/*****************************************************************************
; * \file     startup_samd20g14.s
; * \brief    ARMCC startup file for ATSAMD20G14
; *
; * \note
; * Copyright (C) 2019 Microchip Technology Inc.
; *
; * \par
; * SPDX-License-Identifier: Apache-2.0
; *
; * Licensed under the Apache License, Version 2.0 (the "License");
; * you may not use this file except in compliance with the License.
; * You may obtain a copy of the License at
; *
; *   http://www.apache.org/licenses/LICENSE-2.0
; *
; * Unless required by applicable law or agreed to in writing, software
; * distributed under the License is distributed on an "AS IS" BASIS,
; * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
; * See the License for the specific language governing permissions and
; * limitations under the License.
; *
; ******************************************************************************/


; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Stack_Size      EQU     0x00000200

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000000

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB


; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size

__Vectors       DCD     __initial_sp              ; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NonMaskableInt_Handler    ; NonMaskableInt Handler
                DCD     HardFault_Handler         ; HardFault Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SVCall_Handler            ; SVCall Handler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     PendSV_Handler            ; PendSV Handler
                DCD     SysTick_Handler           ; SysTick Handler

                ; External Interrupts
                DCD     PM_Handler                ; 0  Power Manager Handler
                DCD     SYSCTRL_Handler           ; 1  System Control Handler
                DCD     WDT_Handler               ; 2  Watchdog Timer Handler
                DCD     RTC_Handler               ; 3  Real-Time Counter Handler
                DCD     EIC_Handler               ; 4  External Interrupt Controller Handler
                DCD     NVMCTRL_Handler           ; 5  Non-Volatile Memory Controller Handler
                DCD     EVSYS_Handler             ; 6  Event System Interface Handler
                DCD     SERCOM0_Handler           ; 7  Serial Communication Interface Handler
                DCD     SERCOM1_Handler           ; 8  Serial Communication Interface Handler
                DCD     SERCOM2_Handler           ; 9  Serial Communication Interface Handler
                DCD     SERCOM3_Handler           ; 10 Serial Communication Interface Handler
                DCD     SERCOM4_Handler           ; 11 Serial Communication Interface Handler
                DCD     SERCOM5_Handler           ; 12 Serial Communication Interface Handler
                DCD     TC0_Handler               ; 13 Basic Timer Counter Handler
                DCD     TC1_Handler               ; 14 Basic Timer Counter Handler
                DCD     TC2_Handler               ; 15 Basic Timer Counter Handler
                DCD     TC3_Handler               ; 16 Basic Timer Counter Handler
                DCD     TC4_Handler               ; 17 Basic Timer Counter Handler
                DCD     TC5_Handler               ; 18 Basic Timer Counter Handler
                DCD     0                         ; 19 Reserved
                DCD     0                         ; 20 Reserved
                DCD     ADC_Handler               ; 21 Analog Digital Converter Handler
                DCD     AC_Handler                ; 22 Analog Comparators Handler
                DCD     DAC_Handler               ; 23 Digital Analog Converter Handler
                DCD     PTC_Handler               ; 24 Peripheral Touch Controller Handler
__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY


; Reset Handler

Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main
                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP


; Dummy Exception Handlers (infinite loops which can be modified)

NonMaskableInt_Handler    PROC
                          EXPORT NonMaskableInt_Handler    [WEAK] 
                          B       .
                          ENDP
HardFault_Handler         PROC
                          EXPORT HardFault_Handler         [WEAK] 
                          B       .
                          ENDP
SVCall_Handler            PROC
                          EXPORT SVCall_Handler            [WEAK] 
                          B       .
                          ENDP
PendSV_Handler            PROC
                          EXPORT PendSV_Handler            [WEAK] 
                          B       .
                          ENDP
SysTick_Handler           PROC
                          EXPORT SysTick_Handler           [WEAK] 
                          B       .
                          ENDP

Default_Handler PROC
                EXPORT  PM_Handler                [WEAK]
                EXPORT  SYSCTRL_Handler           [WEAK]
                EXPORT  WDT_Handler               [WEAK]
                EXPORT  RTC_Handler               [WEAK]
                EXPORT  EIC_Handler               [WEAK]
                EXPORT  NVMCTRL_Handler           [WEAK]
                EXPORT  EVSYS_Handler             [WEAK]
                EXPORT  SERCOM0_Handler           [WEAK]
                EXPORT  SERCOM1_Handler           [WEAK]
                EXPORT  SERCOM2_Handler           [WEAK]
                EXPORT  SERCOM3_Handler           [WEAK]
                EXPORT  SERCOM4_Handler           [WEAK]
                EXPORT  SERCOM5_Handler           [WEAK]
                EXPORT  TC0_Handler               [WEAK]
                EXPORT  TC1_Handler               [WEAK]
                EXPORT  TC2_Handler               [WEAK]
                EXPORT  TC3_Handler               [WEAK]
                EXPORT  TC4_Handler               [WEAK]
                EXPORT  TC5_Handler               [WEAK]
                EXPORT  ADC_Handler               [WEAK]
                EXPORT  AC_Handler                [WEAK]
                EXPORT  DAC_Handler               [WEAK]
                EXPORT  PTC_Handler               [WEAK]


PM_Handler               
SYSCTRL_Handler          
WDT_Handler              
RTC_Handler              
EIC_Handler              
NVMCTRL_Handler          
EVSYS_Handler            
SERCOM0_Handler          
SERCOM1_Handler          
SERCOM2_Handler          
SERCOM3_Handler          
SERCOM4_Handler          
SERCOM5_Handler          
TC0_Handler              
TC1_Handler              
TC2_Handler              
TC3_Handler              
TC4_Handler              
TC5_Handler              
ADC_Handler              
AC_Handler               
DAC_Handler              
PTC_Handler              
                B       .
                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR

                ALIGN

                ENDIF


                END
