/**
 * \brief Peripheral I/O description for SAMG53N19
 *
 * Copyright (c) 2019 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2018-07-03T15:20:05Z */
#ifndef _SAMG53N19_GPIO_H_
#define _SAMG53N19_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA0                     (  0  )  /**< Pin Number for PA0 */
#define PIN_PA1                     (  1  )  /**< Pin Number for PA1 */
#define PIN_PA2                     (  2  )  /**< Pin Number for PA2 */
#define PIN_PA3                     (  3  )  /**< Pin Number for PA3 */
#define PIN_PA4                     (  4  )  /**< Pin Number for PA4 */
#define PIN_PA5                     (  5  )  /**< Pin Number for PA5 */
#define PIN_PA6                     (  6  )  /**< Pin Number for PA6 */
#define PIN_PA7                     (  7  )  /**< Pin Number for PA7 */
#define PIN_PA8                     (  8  )  /**< Pin Number for PA8 */
#define PIN_PA9                     (  9  )  /**< Pin Number for PA9 */
#define PIN_PA10                    ( 10  )  /**< Pin Number for PA10 */
#define PIN_PA11                    ( 11  )  /**< Pin Number for PA11 */
#define PIN_PA12                    ( 12  )  /**< Pin Number for PA12 */
#define PIN_PA13                    ( 13  )  /**< Pin Number for PA13 */
#define PIN_PA14                    ( 14  )  /**< Pin Number for PA14 */
#define PIN_PA15                    ( 15  )  /**< Pin Number for PA15 */
#define PIN_PA16                    ( 16  )  /**< Pin Number for PA16 */
#define PIN_PA17                    ( 17  )  /**< Pin Number for PA17 */
#define PIN_PA18                    ( 18  )  /**< Pin Number for PA18 */
#define PIN_PA19                    ( 19  )  /**< Pin Number for PA19 */
#define PIN_PA20                    ( 20  )  /**< Pin Number for PA20 */
#define PIN_PA21                    ( 21  )  /**< Pin Number for PA21 */
#define PIN_PA22                    ( 22  )  /**< Pin Number for PA22 */
#define PIN_PA23                    ( 23  )  /**< Pin Number for PA23 */
#define PIN_PA24                    ( 24  )  /**< Pin Number for PA24 */
#define PIN_PB0                     ( 32  )  /**< Pin Number for PB0 */
#define PIN_PB1                     ( 33  )  /**< Pin Number for PB1 */
#define PIN_PB2                     ( 34  )  /**< Pin Number for PB2 */
#define PIN_PB3                     ( 35  )  /**< Pin Number for PB3 */
#define PIN_PB4                     ( 36  )  /**< Pin Number for PB4 */
#define PIN_PB5                     ( 37  )  /**< Pin Number for PB5 */
#define PIN_PB6                     ( 38  )  /**< Pin Number for PB6 */
#define PIN_PB7                     ( 39  )  /**< Pin Number for PB7 */
#define PIN_PB8                     ( 40  )  /**< Pin Number for PB8 */
#define PIN_PB9                     ( 41  )  /**< Pin Number for PB9 */
#define PIN_PB10                    ( 42  )  /**< Pin Number for PB10 */
#define PIN_PB11                    ( 43  )  /**< Pin Number for PB11 */
#define PIN_PB12                    ( 44  )  /**< Pin Number for PB12 */

/* ========== Peripheral I/O masks ========== */
#define PIO_PA0                     _UL_(1 << 0)    /**< PIO mask for PA0 */
#define PIO_PA1                     _UL_(1 << 1)    /**< PIO mask for PA1 */
#define PIO_PA2                     _UL_(1 << 2)    /**< PIO mask for PA2 */
#define PIO_PA3                     _UL_(1 << 3)    /**< PIO mask for PA3 */
#define PIO_PA4                     _UL_(1 << 4)    /**< PIO mask for PA4 */
#define PIO_PA5                     _UL_(1 << 5)    /**< PIO mask for PA5 */
#define PIO_PA6                     _UL_(1 << 6)    /**< PIO mask for PA6 */
#define PIO_PA7                     _UL_(1 << 7)    /**< PIO mask for PA7 */
#define PIO_PA8                     _UL_(1 << 8)    /**< PIO mask for PA8 */
#define PIO_PA9                     _UL_(1 << 9)    /**< PIO mask for PA9 */
#define PIO_PA10                    _UL_(1 << 10)   /**< PIO mask for PA10 */
#define PIO_PA11                    _UL_(1 << 11)   /**< PIO mask for PA11 */
#define PIO_PA12                    _UL_(1 << 12)   /**< PIO mask for PA12 */
#define PIO_PA13                    _UL_(1 << 13)   /**< PIO mask for PA13 */
#define PIO_PA14                    _UL_(1 << 14)   /**< PIO mask for PA14 */
#define PIO_PA15                    _UL_(1 << 15)   /**< PIO mask for PA15 */
#define PIO_PA16                    _UL_(1 << 16)   /**< PIO mask for PA16 */
#define PIO_PA17                    _UL_(1 << 17)   /**< PIO mask for PA17 */
#define PIO_PA18                    _UL_(1 << 18)   /**< PIO mask for PA18 */
#define PIO_PA19                    _UL_(1 << 19)   /**< PIO mask for PA19 */
#define PIO_PA20                    _UL_(1 << 20)   /**< PIO mask for PA20 */
#define PIO_PA21                    _UL_(1 << 21)   /**< PIO mask for PA21 */
#define PIO_PA22                    _UL_(1 << 22)   /**< PIO mask for PA22 */
#define PIO_PA23                    _UL_(1 << 23)   /**< PIO mask for PA23 */
#define PIO_PA24                    _UL_(1 << 24)   /**< PIO mask for PA24 */
#define PIO_PB0                     _UL_(1 << 0)    /**< PIO mask for PB0 */
#define PIO_PB1                     _UL_(1 << 1)    /**< PIO mask for PB1 */
#define PIO_PB2                     _UL_(1 << 2)    /**< PIO mask for PB2 */
#define PIO_PB3                     _UL_(1 << 3)    /**< PIO mask for PB3 */
#define PIO_PB4                     _UL_(1 << 4)    /**< PIO mask for PB4 */
#define PIO_PB5                     _UL_(1 << 5)    /**< PIO mask for PB5 */
#define PIO_PB6                     _UL_(1 << 6)    /**< PIO mask for PB6 */
#define PIO_PB7                     _UL_(1 << 7)    /**< PIO mask for PB7 */
#define PIO_PB8                     _UL_(1 << 8)    /**< PIO mask for PB8 */
#define PIO_PB9                     _UL_(1 << 9)    /**< PIO mask for PB9 */
#define PIO_PB10                    _UL_(1 << 10)   /**< PIO mask for PB10 */
#define PIO_PB11                    _UL_(1 << 11)   /**< PIO mask for PB11 */
#define PIO_PB12                    _UL_(1 << 12)   /**< PIO mask for PB12 */

/* ========== PIO definition for ADC peripheral ========== */
#define PIN_PA8B_ADC_ADTRG                         _L_(8)       /**< ADC signal: ADC_ADTRG on PA8 mux B */
#define MUX_PA8B_ADC_ADTRG                         _L_(1)       /**< ADC signal line function value: ADC_ADTRG */
#define PIO_PA8B_ADC_ADTRG                         _UL_(1 << 8) /**< ADC signal: ADC_ADTRG */
#define PIN_PA17X1_ADC_AD0                         _L_(17)      /**< ADC signal: ADC_AD0 on PA17 mux X1 */
#define PIO_PA17X1_ADC_AD0                         _UL_(1 << 17) /**< ADC signal: ADC_AD0 */
#define PIN_PA18X1_ADC_AD1                         _L_(18)      /**< ADC signal: ADC_AD1 on PA18 mux X1 */
#define PIO_PA18X1_ADC_AD1                         _UL_(1 << 18) /**< ADC signal: ADC_AD1 */
#define PIN_PA19X1_ADC_AD2                         _L_(19)      /**< ADC signal: ADC_AD2 on PA19 mux X1 */
#define PIO_PA19X1_ADC_AD2                         _UL_(1 << 19) /**< ADC signal: ADC_AD2 */
#define PIN_PA20X1_ADC_AD3                         _L_(20)      /**< ADC signal: ADC_AD3 on PA20 mux X1 */
#define PIO_PA20X1_ADC_AD3                         _UL_(1 << 20) /**< ADC signal: ADC_AD3 */
#define PIN_PB0X1_ADC_AD4                          _L_(32)      /**< ADC signal: ADC_AD4 on PB0 mux X1 */
#define PIO_PB0X1_ADC_AD4                          _UL_(1 << 0) /**< ADC signal: ADC_AD4 */
#define PIN_PB1X1_ADC_AD5                          _L_(33)      /**< ADC signal: ADC_AD5 on PB1 mux X1 */
#define PIO_PB1X1_ADC_AD5                          _UL_(1 << 1) /**< ADC signal: ADC_AD5 */
#define PIN_PB2X1_ADC_AD6                          _L_(34)      /**< ADC signal: ADC_AD6 on PB2 mux X1 */
#define PIO_PB2X1_ADC_AD6                          _UL_(1 << 2) /**< ADC signal: ADC_AD6 */
#define PIN_PB2X1_ADC_WKUP12                       _L_(34)      /**< ADC signal: ADC_WKUP12 on PB2 mux X1 */
#define PIO_PB2X1_ADC_WKUP12                       _UL_(1 << 2) /**< ADC signal: ADC_WKUP12 */
#define PIN_PB3X1_ADC_AD7                          _L_(35)      /**< ADC signal: ADC_AD7 on PB3 mux X1 */
#define PIO_PB3X1_ADC_AD7                          _UL_(1 << 3) /**< ADC signal: ADC_AD7 */
#define PIN_PB3X1_ADC_WKUP13                       _L_(35)      /**< ADC signal: ADC_WKUP13 on PB3 mux X1 */
#define PIO_PB3X1_ADC_WKUP13                       _UL_(1 << 3) /**< ADC signal: ADC_WKUP13 */
/* ========== PIO definition for I2SC0 peripheral ========== */
#define PIN_PA0A_I2SC0_I2SC0_CK                    _L_(0)       /**< I2SC0 signal: I2SC0_I2SC0_CK on PA0 mux A */
#define MUX_PA0A_I2SC0_I2SC0_CK                    _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SC0_CK */
#define PIO_PA0A_I2SC0_I2SC0_CK                    _UL_(1 << 0) /**< I2SC0 signal: I2SC0_I2SC0_CK */
#define PIN_PA2B_I2SC0_I2SC0_DI0                   _L_(2)       /**< I2SC0 signal: I2SC0_I2SC0_DI0 on PA2 mux B */
#define MUX_PA2B_I2SC0_I2SC0_DI0                   _L_(1)       /**< I2SC0 signal line function value: I2SC0_I2SC0_DI0 */
#define PIO_PA2B_I2SC0_I2SC0_DI0                   _UL_(1 << 2) /**< I2SC0 signal: I2SC0_I2SC0_DI0 */
#define PIN_PA3B_I2SC0_I2SC0_DO0                   _L_(3)       /**< I2SC0 signal: I2SC0_I2SC0_DO0 on PA3 mux B */
#define MUX_PA3B_I2SC0_I2SC0_DO0                   _L_(1)       /**< I2SC0 signal line function value: I2SC0_I2SC0_DO0 */
#define PIO_PA3B_I2SC0_I2SC0_DO0                   _UL_(1 << 3) /**< I2SC0 signal: I2SC0_I2SC0_DO0 */
#define PIN_PA17A_I2SC0_I2SC0_DO0                  _L_(17)      /**< I2SC0 signal: I2SC0_I2SC0_DO0 on PA17 mux A */
#define MUX_PA17A_I2SC0_I2SC0_DO0                  _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SC0_DO0 */
#define PIO_PA17A_I2SC0_I2SC0_DO0                  _UL_(1 << 17) /**< I2SC0 signal: I2SC0_I2SC0_DO0 */
#define PIN_PA4B_I2SC0_I2SC0_MCK                   _L_(4)       /**< I2SC0 signal: I2SC0_I2SC0_MCK on PA4 mux B */
#define MUX_PA4B_I2SC0_I2SC0_MCK                   _L_(1)       /**< I2SC0 signal line function value: I2SC0_I2SC0_MCK */
#define PIO_PA4B_I2SC0_I2SC0_MCK                   _UL_(1 << 4) /**< I2SC0 signal: I2SC0_I2SC0_MCK */
#define PIN_PA18A_I2SC0_I2SC0_MCK                  _L_(18)      /**< I2SC0 signal: I2SC0_I2SC0_MCK on PA18 mux A */
#define MUX_PA18A_I2SC0_I2SC0_MCK                  _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SC0_MCK */
#define PIO_PA18A_I2SC0_I2SC0_MCK                  _UL_(1 << 18) /**< I2SC0 signal: I2SC0_I2SC0_MCK */
#define PIN_PA1A_I2SC0_I2SC0_WS                    _L_(1)       /**< I2SC0 signal: I2SC0_I2SC0_WS on PA1 mux A */
#define MUX_PA1A_I2SC0_I2SC0_WS                    _L_(0)       /**< I2SC0 signal line function value: I2SC0_I2SC0_WS */
#define PIO_PA1A_I2SC0_I2SC0_WS                    _UL_(1 << 1) /**< I2SC0 signal: I2SC0_I2SC0_WS */
/* ========== PIO definition for I2SC1 peripheral ========== */
#define PIN_PA19B_I2SC1_I2SC1_CK                   _L_(19)      /**< I2SC1 signal: I2SC1_I2SC1_CK on PA19 mux B */
#define MUX_PA19B_I2SC1_I2SC1_CK                   _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SC1_CK */
#define PIO_PA19B_I2SC1_I2SC1_CK                   _UL_(1 << 19) /**< I2SC1 signal: I2SC1_I2SC1_CK */
#define PIN_PA22B_I2SC1_I2SC1_DI0                  _L_(22)      /**< I2SC1 signal: I2SC1_I2SC1_DI0 on PA22 mux B */
#define MUX_PA22B_I2SC1_I2SC1_DI0                  _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SC1_DI0 */
#define PIO_PA22B_I2SC1_I2SC1_DI0                  _UL_(1 << 22) /**< I2SC1 signal: I2SC1_I2SC1_DI0 */
#define PIN_PA23A_I2SC1_I2SC1_DO0                  _L_(23)      /**< I2SC1 signal: I2SC1_I2SC1_DO0 on PA23 mux A */
#define MUX_PA23A_I2SC1_I2SC1_DO0                  _L_(0)       /**< I2SC1 signal line function value: I2SC1_I2SC1_DO0 */
#define PIO_PA23A_I2SC1_I2SC1_DO0                  _UL_(1 << 23) /**< I2SC1 signal: I2SC1_I2SC1_DO0 */
#define PIN_PA24A_I2SC1_I2SC1_MCK                  _L_(24)      /**< I2SC1 signal: I2SC1_I2SC1_MCK on PA24 mux A */
#define MUX_PA24A_I2SC1_I2SC1_MCK                  _L_(0)       /**< I2SC1 signal line function value: I2SC1_I2SC1_MCK */
#define PIO_PA24A_I2SC1_I2SC1_MCK                  _UL_(1 << 24) /**< I2SC1 signal: I2SC1_I2SC1_MCK */
#define PIN_PA20B_I2SC1_I2SC1_WS                   _L_(20)      /**< I2SC1 signal: I2SC1_I2SC1_WS on PA20 mux B */
#define MUX_PA20B_I2SC1_I2SC1_WS                   _L_(1)       /**< I2SC1 signal line function value: I2SC1_I2SC1_WS */
#define PIO_PA20B_I2SC1_I2SC1_WS                   _UL_(1 << 20) /**< I2SC1 signal: I2SC1_I2SC1_WS */
/* ========== PIO definition for PDMIC0 peripheral ========== */
#define PIN_PA10B_PDMIC0_PDMIC0_CLK                _L_(10)      /**< PDMIC0 signal: PDMIC0_PDMIC0_CLK on PA10 mux B */
#define MUX_PA10B_PDMIC0_PDMIC0_CLK                _L_(1)       /**< PDMIC0 signal line function value: PDMIC0_PDMIC0_CLK */
#define PIO_PA10B_PDMIC0_PDMIC0_CLK                _UL_(1 << 10) /**< PDMIC0 signal: PDMIC0_PDMIC0_CLK */
#define PIN_PA9B_PDMIC0_PDMIC0_DAT                 _L_(9)       /**< PDMIC0 signal: PDMIC0_PDMIC0_DAT on PA9 mux B */
#define MUX_PA9B_PDMIC0_PDMIC0_DAT                 _L_(1)       /**< PDMIC0 signal line function value: PDMIC0_PDMIC0_DAT */
#define PIO_PA9B_PDMIC0_PDMIC0_DAT                 _UL_(1 << 9) /**< PDMIC0 signal: PDMIC0_PDMIC0_DAT */
/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PA6B_PMC_PCK0                          _L_(6)       /**< PMC signal: PMC_PCK0 on PA6 mux B */
#define MUX_PA6B_PMC_PCK0                          _L_(1)       /**< PMC signal line function value: PMC_PCK0 */
#define PIO_PA6B_PMC_PCK0                          _UL_(1 << 6) /**< PMC signal: PMC_PCK0 */
#define PIN_PA17B_PMC_PCK1                         _L_(17)      /**< PMC signal: PMC_PCK1 on PA17 mux B */
#define MUX_PA17B_PMC_PCK1                         _L_(1)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA17B_PMC_PCK1                         _UL_(1 << 17) /**< PMC signal: PMC_PCK1 */
#define PIN_PA21B_PMC_PCK1                         _L_(21)      /**< PMC signal: PMC_PCK1 on PA21 mux B */
#define MUX_PA21B_PMC_PCK1                         _L_(1)       /**< PMC signal line function value: PMC_PCK1 */
#define PIO_PA21B_PMC_PCK1                         _UL_(1 << 21) /**< PMC signal: PMC_PCK1 */
#define PIN_PA18B_PMC_PCK2                         _L_(18)      /**< PMC signal: PMC_PCK2 on PA18 mux B */
#define MUX_PA18B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PA18B_PMC_PCK2                         _UL_(1 << 18) /**< PMC signal: PMC_PCK2 */
#define PIN_PB3B_PMC_PCK2                          _L_(35)      /**< PMC signal: PMC_PCK2 on PB3 mux B */
#define MUX_PB3B_PMC_PCK2                          _L_(1)       /**< PMC signal line function value: PMC_PCK2 */
#define PIO_PB3B_PMC_PCK2                          _UL_(1 << 3) /**< PMC signal: PMC_PCK2 */
/* ========== PIO definition for SPI peripheral ========== */
#define PIN_PA12A_SPI_MISO                         _L_(12)      /**< SPI signal: SPI_MISO on PA12 mux A */
#define MUX_PA12A_SPI_MISO                         _L_(0)       /**< SPI signal line function value: SPI_MISO */
#define PIO_PA12A_SPI_MISO                         _UL_(1 << 12) /**< SPI signal: SPI_MISO */
#define PIN_PA13A_SPI_MOSI                         _L_(13)      /**< SPI signal: SPI_MOSI on PA13 mux A */
#define MUX_PA13A_SPI_MOSI                         _L_(0)       /**< SPI signal line function value: SPI_MOSI */
#define PIO_PA13A_SPI_MOSI                         _UL_(1 << 13) /**< SPI signal: SPI_MOSI */
#define PIN_PA11A_SPI_NPCS0                        _L_(11)      /**< SPI signal: SPI_NPCS0 on PA11 mux A */
#define MUX_PA11A_SPI_NPCS0                        _L_(0)       /**< SPI signal line function value: SPI_NPCS0 */
#define PIO_PA11A_SPI_NPCS0                        _UL_(1 << 11) /**< SPI signal: SPI_NPCS0 */
#define PIN_PA5B_SPI_NPCS1                         _L_(5)       /**< SPI signal: SPI_NPCS1 on PA5 mux B */
#define MUX_PA5B_SPI_NPCS1                         _L_(1)       /**< SPI signal line function value: SPI_NPCS1 */
#define PIO_PA5B_SPI_NPCS1                         _UL_(1 << 5) /**< SPI signal: SPI_NPCS1 */
#define PIN_PB2B_SPI_NPCS1                         _L_(34)      /**< SPI signal: SPI_NPCS1 on PB2 mux B */
#define MUX_PB2B_SPI_NPCS1                         _L_(1)       /**< SPI signal line function value: SPI_NPCS1 */
#define PIO_PB2B_SPI_NPCS1                         _UL_(1 << 2) /**< SPI signal: SPI_NPCS1 */
#define PIN_PA14A_SPI_SPCK                         _L_(14)      /**< SPI signal: SPI_SPCK on PA14 mux A */
#define MUX_PA14A_SPI_SPCK                         _L_(0)       /**< SPI signal line function value: SPI_SPCK */
#define PIO_PA14A_SPI_SPCK                         _UL_(1 << 14) /**< SPI signal: SPI_SPCK */
/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA2A_TC0_TCLK0                         _L_(2)       /**< TC0 signal: TC0_TCLK0 on PA2 mux A */
#define MUX_PA2A_TC0_TCLK0                         _L_(0)       /**< TC0 signal line function value: TC0_TCLK0 */
#define PIO_PA2A_TC0_TCLK0                         _UL_(1 << 2) /**< TC0 signal: TC0_TCLK0 */
#define PIN_PA19A_TC0_TCLK1                        _L_(19)      /**< TC0 signal: TC0_TCLK1 on PA19 mux A */
#define MUX_PA19A_TC0_TCLK1                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK1 */
#define PIO_PA19A_TC0_TCLK1                        _UL_(1 << 19) /**< TC0 signal: TC0_TCLK1 */
#define PIN_PA20A_TC0_TCLK2                        _L_(20)      /**< TC0 signal: TC0_TCLK2 on PA20 mux A */
#define MUX_PA20A_TC0_TCLK2                        _L_(0)       /**< TC0 signal line function value: TC0_TCLK2 */
#define PIO_PA20A_TC0_TCLK2                        _UL_(1 << 20) /**< TC0 signal: TC0_TCLK2 */
#define PIN_PA0B_TC0_TIOA0                         _L_(0)       /**< TC0 signal: TC0_TIOA0 on PA0 mux B */
#define MUX_PA0B_TC0_TIOA0                         _L_(1)       /**< TC0 signal line function value: TC0_TIOA0 */
#define PIO_PA0B_TC0_TIOA0                         _UL_(1 << 0) /**< TC0 signal: TC0_TIOA0 */
#define PIN_PA23B_TC0_TIOA1                        _L_(23)      /**< TC0 signal: TC0_TIOA1 on PA23 mux B */
#define MUX_PA23B_TC0_TIOA1                        _L_(1)       /**< TC0 signal line function value: TC0_TIOA1 */
#define PIO_PA23B_TC0_TIOA1                        _UL_(1 << 23) /**< TC0 signal: TC0_TIOA1 */
#define PIN_PA21A_TC0_TIOA2                        _L_(21)      /**< TC0 signal: TC0_TIOA2 on PA21 mux A */
#define MUX_PA21A_TC0_TIOA2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOA2 */
#define PIO_PA21A_TC0_TIOA2                        _UL_(1 << 21) /**< TC0 signal: TC0_TIOA2 */
#define PIN_PA1B_TC0_TIOB0                         _L_(1)       /**< TC0 signal: TC0_TIOB0 on PA1 mux B */
#define MUX_PA1B_TC0_TIOB0                         _L_(1)       /**< TC0 signal line function value: TC0_TIOB0 */
#define PIO_PA1B_TC0_TIOB0                         _UL_(1 << 1) /**< TC0 signal: TC0_TIOB0 */
#define PIN_PA16B_TC0_TIOB1                        _L_(16)      /**< TC0 signal: TC0_TIOB1 on PA16 mux B */
#define MUX_PA16B_TC0_TIOB1                        _L_(1)       /**< TC0 signal line function value: TC0_TIOB1 */
#define PIO_PA16B_TC0_TIOB1                        _UL_(1 << 16) /**< TC0 signal: TC0_TIOB1 */
#define PIN_PA22A_TC0_TIOB2                        _L_(22)      /**< TC0 signal: TC0_TIOB2 on PA22 mux A */
#define MUX_PA22A_TC0_TIOB2                        _L_(0)       /**< TC0 signal line function value: TC0_TIOB2 */
#define PIO_PA22A_TC0_TIOB2                        _UL_(1 << 22) /**< TC0 signal: TC0_TIOB2 */
/* ========== PIO definition for TWI1 peripheral ========== */
#define PIN_PB9A_TWI1_TWCK1                        _L_(41)      /**< TWI1 signal: TWI1_TWCK1 on PB9 mux A */
#define MUX_PB9A_TWI1_TWCK1                        _L_(0)       /**< TWI1 signal line function value: TWI1_TWCK1 */
#define PIO_PB9A_TWI1_TWCK1                        _UL_(1 << 9) /**< TWI1 signal: TWI1_TWCK1 */
#define PIN_PB11A_TWI1_TWCK1                       _L_(43)      /**< TWI1 signal: TWI1_TWCK1 on PB11 mux A */
#define MUX_PB11A_TWI1_TWCK1                       _L_(0)       /**< TWI1 signal line function value: TWI1_TWCK1 */
#define PIO_PB11A_TWI1_TWCK1                       _UL_(1 << 11) /**< TWI1 signal: TWI1_TWCK1 */
#define PIN_PB8A_TWI1_TWD1                         _L_(40)      /**< TWI1 signal: TWI1_TWD1 on PB8 mux A */
#define MUX_PB8A_TWI1_TWD1                         _L_(0)       /**< TWI1 signal line function value: TWI1_TWD1 */
#define PIO_PB8A_TWI1_TWD1                         _UL_(1 << 8) /**< TWI1 signal: TWI1_TWD1 */
#define PIN_PB10A_TWI1_TWD1                        _L_(42)      /**< TWI1 signal: TWI1_TWD1 on PB10 mux A */
#define MUX_PB10A_TWI1_TWD1                        _L_(0)       /**< TWI1 signal line function value: TWI1_TWD1 */
#define PIO_PB10A_TWI1_TWD1                        _UL_(1 << 10) /**< TWI1 signal: TWI1_TWD1 */
/* ========== PIO definition for TWI2 peripheral ========== */
#define PIN_PB1B_TWI2_TWCK2                        _L_(33)      /**< TWI2 signal: TWI2_TWCK2 on PB1 mux B */
#define MUX_PB1B_TWI2_TWCK2                        _L_(1)       /**< TWI2 signal line function value: TWI2_TWCK2 */
#define PIO_PB1B_TWI2_TWCK2                        _UL_(1 << 1) /**< TWI2 signal: TWI2_TWCK2 */
#define PIN_PB11B_TWI2_TWCK2                       _L_(43)      /**< TWI2 signal: TWI2_TWCK2 on PB11 mux B */
#define MUX_PB11B_TWI2_TWCK2                       _L_(1)       /**< TWI2 signal line function value: TWI2_TWCK2 */
#define PIO_PB11B_TWI2_TWCK2                       _UL_(1 << 11) /**< TWI2 signal: TWI2_TWCK2 */
#define PIN_PB0B_TWI2_TWD2                         _L_(32)      /**< TWI2 signal: TWI2_TWD2 on PB0 mux B */
#define MUX_PB0B_TWI2_TWD2                         _L_(1)       /**< TWI2 signal line function value: TWI2_TWD2 */
#define PIO_PB0B_TWI2_TWD2                         _UL_(1 << 0) /**< TWI2 signal: TWI2_TWD2 */
#define PIN_PB10B_TWI2_TWD2                        _L_(42)      /**< TWI2 signal: TWI2_TWD2 on PB10 mux B */
#define MUX_PB10B_TWI2_TWD2                        _L_(1)       /**< TWI2 signal line function value: TWI2_TWD2 */
#define PIO_PB10B_TWI2_TWD2                        _UL_(1 << 10) /**< TWI2 signal: TWI2_TWD2 */
/* ========== PIO definition for TWI0 peripheral ========== */
#define PIN_PA4A_TWI0_TWCK0                        _L_(4)       /**< TWI0 signal: TWI0_TWCK0 on PA4 mux A */
#define MUX_PA4A_TWI0_TWCK0                        _L_(0)       /**< TWI0 signal line function value: TWI0_TWCK0 */
#define PIO_PA4A_TWI0_TWCK0                        _UL_(1 << 4) /**< TWI0 signal: TWI0_TWCK0 */
#define PIN_PA3A_TWI0_TWD0                         _L_(3)       /**< TWI0 signal: TWI0_TWD0 on PA3 mux A */
#define MUX_PA3A_TWI0_TWD0                         _L_(0)       /**< TWI0 signal line function value: TWI0_TWD0 */
#define PIO_PA3A_TWI0_TWD0                         _UL_(1 << 3) /**< TWI0 signal: TWI0_TWD0 */
/* ========== PIO definition for UART0 peripheral ========== */
#define PIN_PA9A_UART0_URXD0                       _L_(9)       /**< UART0 signal: UART0_URXD0 on PA9 mux A */
#define MUX_PA9A_UART0_URXD0                       _L_(0)       /**< UART0 signal line function value: UART0_URXD0 */
#define PIO_PA9A_UART0_URXD0                       _UL_(1 << 9) /**< UART0 signal: UART0_URXD0 */
#define PIN_PA10A_UART0_UTXD0                      _L_(10)      /**< UART0 signal: UART0_UTXD0 on PA10 mux A */
#define MUX_PA10A_UART0_UTXD0                      _L_(0)       /**< UART0 signal line function value: UART0_UTXD0 */
#define PIO_PA10A_UART0_UTXD0                      _UL_(1 << 10) /**< UART0 signal: UART0_UTXD0 */
/* ========== PIO definition for UART1 peripheral ========== */
#define PIN_PB2A_UART1_URXD1                       _L_(34)      /**< UART1 signal: UART1_URXD1 on PB2 mux A */
#define MUX_PB2A_UART1_URXD1                       _L_(0)       /**< UART1 signal line function value: UART1_URXD1 */
#define PIO_PB2A_UART1_URXD1                       _UL_(1 << 2) /**< UART1 signal: UART1_URXD1 */
#define PIN_PB3A_UART1_UTXD1                       _L_(35)      /**< UART1 signal: UART1_UTXD1 on PB3 mux A */
#define MUX_PB3A_UART1_UTXD1                       _L_(0)       /**< UART1 signal line function value: UART1_UTXD1 */
#define PIO_PB3A_UART1_UTXD1                       _UL_(1 << 3) /**< UART1 signal: UART1_UTXD1 */
/* ========== PIO definition for USART peripheral ========== */
#define PIN_PA16A_USART_CTS                        _L_(16)      /**< USART signal: USART_CTS on PA16 mux A */
#define MUX_PA16A_USART_CTS                        _L_(0)       /**< USART signal line function value: USART_CTS */
#define PIO_PA16A_USART_CTS                        _UL_(1 << 16) /**< USART signal: USART_CTS */
#define PIN_PA15A_USART_RTS                        _L_(15)      /**< USART signal: USART_RTS on PA15 mux A */
#define MUX_PA15A_USART_RTS                        _L_(0)       /**< USART signal line function value: USART_RTS */
#define PIO_PA15A_USART_RTS                        _UL_(1 << 15) /**< USART signal: USART_RTS */
#define PIN_PA5A_USART_RXD                         _L_(5)       /**< USART signal: USART_RXD on PA5 mux A */
#define MUX_PA5A_USART_RXD                         _L_(0)       /**< USART signal line function value: USART_RXD */
#define PIO_PA5A_USART_RXD                         _UL_(1 << 5) /**< USART signal: USART_RXD */
#define PIN_PA15B_USART_SCK                        _L_(15)      /**< USART signal: USART_SCK on PA15 mux B */
#define MUX_PA15B_USART_SCK                        _L_(1)       /**< USART signal line function value: USART_SCK */
#define PIO_PA15B_USART_SCK                        _UL_(1 << 15) /**< USART signal: USART_SCK */
#define PIN_PA6A_USART_TXD                         _L_(6)       /**< USART signal: USART_TXD on PA6 mux A */
#define MUX_PA6A_USART_TXD                         _L_(0)       /**< USART signal line function value: USART_TXD */
#define PIO_PA6A_USART_TXD                         _UL_(1 << 6) /**< USART signal: USART_TXD */

#endif /* _SAMG53N19_GPIO_H_ */

