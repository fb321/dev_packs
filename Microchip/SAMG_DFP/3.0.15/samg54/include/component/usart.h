/**
 * \brief Component description for USART
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

/* file generated from device description version 2018-07-03T15:23:17Z */
#ifndef _SAMG54_USART_COMPONENT_H_
#define _SAMG54_USART_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR USART                                        */
/* ************************************************************************** */

/* -------- US_CR : (USART Offset: 0x00) ( /W 32) Control Register -------- */
#define US_CR_RSTRX_Pos                       _U_(2)                                               /**< (US_CR) Reset Receiver Position */
#define US_CR_RSTRX_Msk                       (_U_(0x1) << US_CR_RSTRX_Pos)                        /**< (US_CR) Reset Receiver Mask */
#define US_CR_RSTRX(value)                    (US_CR_RSTRX_Msk & ((value) << US_CR_RSTRX_Pos))    
#define US_CR_RSTTX_Pos                       _U_(3)                                               /**< (US_CR) Reset Transmitter Position */
#define US_CR_RSTTX_Msk                       (_U_(0x1) << US_CR_RSTTX_Pos)                        /**< (US_CR) Reset Transmitter Mask */
#define US_CR_RSTTX(value)                    (US_CR_RSTTX_Msk & ((value) << US_CR_RSTTX_Pos))    
#define US_CR_RXEN_Pos                        _U_(4)                                               /**< (US_CR) Receiver Enable Position */
#define US_CR_RXEN_Msk                        (_U_(0x1) << US_CR_RXEN_Pos)                         /**< (US_CR) Receiver Enable Mask */
#define US_CR_RXEN(value)                     (US_CR_RXEN_Msk & ((value) << US_CR_RXEN_Pos))      
#define US_CR_RXDIS_Pos                       _U_(5)                                               /**< (US_CR) Receiver Disable Position */
#define US_CR_RXDIS_Msk                       (_U_(0x1) << US_CR_RXDIS_Pos)                        /**< (US_CR) Receiver Disable Mask */
#define US_CR_RXDIS(value)                    (US_CR_RXDIS_Msk & ((value) << US_CR_RXDIS_Pos))    
#define US_CR_TXEN_Pos                        _U_(6)                                               /**< (US_CR) Transmitter Enable Position */
#define US_CR_TXEN_Msk                        (_U_(0x1) << US_CR_TXEN_Pos)                         /**< (US_CR) Transmitter Enable Mask */
#define US_CR_TXEN(value)                     (US_CR_TXEN_Msk & ((value) << US_CR_TXEN_Pos))      
#define US_CR_TXDIS_Pos                       _U_(7)                                               /**< (US_CR) Transmitter Disable Position */
#define US_CR_TXDIS_Msk                       (_U_(0x1) << US_CR_TXDIS_Pos)                        /**< (US_CR) Transmitter Disable Mask */
#define US_CR_TXDIS(value)                    (US_CR_TXDIS_Msk & ((value) << US_CR_TXDIS_Pos))    
#define US_CR_RSTSTA_Pos                      _U_(8)                                               /**< (US_CR) Reset Status Bits Position */
#define US_CR_RSTSTA_Msk                      (_U_(0x1) << US_CR_RSTSTA_Pos)                       /**< (US_CR) Reset Status Bits Mask */
#define US_CR_RSTSTA(value)                   (US_CR_RSTSTA_Msk & ((value) << US_CR_RSTSTA_Pos))  
#define US_CR_STTBRK_Pos                      _U_(9)                                               /**< (US_CR) Start Break Position */
#define US_CR_STTBRK_Msk                      (_U_(0x1) << US_CR_STTBRK_Pos)                       /**< (US_CR) Start Break Mask */
#define US_CR_STTBRK(value)                   (US_CR_STTBRK_Msk & ((value) << US_CR_STTBRK_Pos))  
#define US_CR_STPBRK_Pos                      _U_(10)                                              /**< (US_CR) Stop Break Position */
#define US_CR_STPBRK_Msk                      (_U_(0x1) << US_CR_STPBRK_Pos)                       /**< (US_CR) Stop Break Mask */
#define US_CR_STPBRK(value)                   (US_CR_STPBRK_Msk & ((value) << US_CR_STPBRK_Pos))  
#define US_CR_STTTO_Pos                       _U_(11)                                              /**< (US_CR) Clear TIMEOUT Flag and Start Time-out After Next Character Received Position */
#define US_CR_STTTO_Msk                       (_U_(0x1) << US_CR_STTTO_Pos)                        /**< (US_CR) Clear TIMEOUT Flag and Start Time-out After Next Character Received Mask */
#define US_CR_STTTO(value)                    (US_CR_STTTO_Msk & ((value) << US_CR_STTTO_Pos))    
#define US_CR_SENDA_Pos                       _U_(12)                                              /**< (US_CR) Send Address Position */
#define US_CR_SENDA_Msk                       (_U_(0x1) << US_CR_SENDA_Pos)                        /**< (US_CR) Send Address Mask */
#define US_CR_SENDA(value)                    (US_CR_SENDA_Msk & ((value) << US_CR_SENDA_Pos))    
#define US_CR_RETTO_Pos                       _U_(15)                                              /**< (US_CR) Start Time-out Immediately Position */
#define US_CR_RETTO_Msk                       (_U_(0x1) << US_CR_RETTO_Pos)                        /**< (US_CR) Start Time-out Immediately Mask */
#define US_CR_RETTO(value)                    (US_CR_RETTO_Msk & ((value) << US_CR_RETTO_Pos))    
#define US_CR_RTSEN_Pos                       _U_(18)                                              /**< (US_CR) Request to Send Pin Control Position */
#define US_CR_RTSEN_Msk                       (_U_(0x1) << US_CR_RTSEN_Pos)                        /**< (US_CR) Request to Send Pin Control Mask */
#define US_CR_RTSEN(value)                    (US_CR_RTSEN_Msk & ((value) << US_CR_RTSEN_Pos))    
#define US_CR_RTSDIS_Pos                      _U_(19)                                              /**< (US_CR) Request to Send Pin Control Position */
#define US_CR_RTSDIS_Msk                      (_U_(0x1) << US_CR_RTSDIS_Pos)                       /**< (US_CR) Request to Send Pin Control Mask */
#define US_CR_RTSDIS(value)                   (US_CR_RTSDIS_Msk & ((value) << US_CR_RTSDIS_Pos))  
#define US_CR_Msk                             _U_(0x000C9FFC)                                      /**< (US_CR) Register Mask  */


/* -------- US_MR : (USART Offset: 0x04) (R/W 32) Mode Register -------- */
#define US_MR_USART_MODE_Pos                  _U_(0)                                               /**< (US_MR) USART Mode of Operation Position */
#define US_MR_USART_MODE_Msk                  (_U_(0xF) << US_MR_USART_MODE_Pos)                   /**< (US_MR) USART Mode of Operation Mask */
#define US_MR_USART_MODE(value)               (US_MR_USART_MODE_Msk & ((value) << US_MR_USART_MODE_Pos))
#define   US_MR_USART_MODE_NORMAL_Val         _U_(0x0)                                             /**< (US_MR) Normal mode  */
#define   US_MR_USART_MODE_RS485_Val          _U_(0x1)                                             /**< (US_MR) RS485 mode  */
#define   US_MR_USART_MODE_HW_HANDSHAKING_Val _U_(0x2)                                             /**< (US_MR) Hardware Handshaking  */
#define   US_MR_USART_MODE_SPI_MASTER_Val     _U_(0xE)                                             /**< (US_MR) SPI master mode  */
#define   US_MR_USART_MODE_SPI_SLAVE_Val      _U_(0xF)                                             /**< (US_MR) SPI Slave mode  */
#define US_MR_USART_MODE_NORMAL               (US_MR_USART_MODE_NORMAL_Val << US_MR_USART_MODE_Pos) /**< (US_MR) Normal mode Position  */
#define US_MR_USART_MODE_RS485                (US_MR_USART_MODE_RS485_Val << US_MR_USART_MODE_Pos) /**< (US_MR) RS485 mode Position  */
#define US_MR_USART_MODE_HW_HANDSHAKING       (US_MR_USART_MODE_HW_HANDSHAKING_Val << US_MR_USART_MODE_Pos) /**< (US_MR) Hardware Handshaking Position  */
#define US_MR_USART_MODE_SPI_MASTER           (US_MR_USART_MODE_SPI_MASTER_Val << US_MR_USART_MODE_Pos) /**< (US_MR) SPI master mode Position  */
#define US_MR_USART_MODE_SPI_SLAVE            (US_MR_USART_MODE_SPI_SLAVE_Val << US_MR_USART_MODE_Pos) /**< (US_MR) SPI Slave mode Position  */
#define US_MR_USCLKS_Pos                      _U_(4)                                               /**< (US_MR) Clock Selection Position */
#define US_MR_USCLKS_Msk                      (_U_(0x3) << US_MR_USCLKS_Pos)                       /**< (US_MR) Clock Selection Mask */
#define US_MR_USCLKS(value)                   (US_MR_USCLKS_Msk & ((value) << US_MR_USCLKS_Pos))  
#define   US_MR_USCLKS_MCK_Val                _U_(0x0)                                             /**< (US_MR) Peripheral clock is selected  */
#define   US_MR_USCLKS_DIV_Val                _U_(0x1)                                             /**< (US_MR) Peripheral clock divided (DIV=8) is selected  */
#define   US_MR_USCLKS_SCK_Val                _U_(0x3)                                             /**< (US_MR) Serial clock (SCK) is selected  */
#define US_MR_USCLKS_MCK                      (US_MR_USCLKS_MCK_Val << US_MR_USCLKS_Pos)           /**< (US_MR) Peripheral clock is selected Position  */
#define US_MR_USCLKS_DIV                      (US_MR_USCLKS_DIV_Val << US_MR_USCLKS_Pos)           /**< (US_MR) Peripheral clock divided (DIV=8) is selected Position  */
#define US_MR_USCLKS_SCK                      (US_MR_USCLKS_SCK_Val << US_MR_USCLKS_Pos)           /**< (US_MR) Serial clock (SCK) is selected Position  */
#define US_MR_CHRL_Pos                        _U_(6)                                               /**< (US_MR) Character Length Position */
#define US_MR_CHRL_Msk                        (_U_(0x3) << US_MR_CHRL_Pos)                         /**< (US_MR) Character Length Mask */
#define US_MR_CHRL(value)                     (US_MR_CHRL_Msk & ((value) << US_MR_CHRL_Pos))      
#define   US_MR_CHRL_5_BIT_Val                _U_(0x0)                                             /**< (US_MR) Character length is 5 bits  */
#define   US_MR_CHRL_6_BIT_Val                _U_(0x1)                                             /**< (US_MR) Character length is 6 bits  */
#define   US_MR_CHRL_7_BIT_Val                _U_(0x2)                                             /**< (US_MR) Character length is 7 bits  */
#define   US_MR_CHRL_8_BIT_Val                _U_(0x3)                                             /**< (US_MR) Character length is 8 bits  */
#define US_MR_CHRL_5_BIT                      (US_MR_CHRL_5_BIT_Val << US_MR_CHRL_Pos)             /**< (US_MR) Character length is 5 bits Position  */
#define US_MR_CHRL_6_BIT                      (US_MR_CHRL_6_BIT_Val << US_MR_CHRL_Pos)             /**< (US_MR) Character length is 6 bits Position  */
#define US_MR_CHRL_7_BIT                      (US_MR_CHRL_7_BIT_Val << US_MR_CHRL_Pos)             /**< (US_MR) Character length is 7 bits Position  */
#define US_MR_CHRL_8_BIT                      (US_MR_CHRL_8_BIT_Val << US_MR_CHRL_Pos)             /**< (US_MR) Character length is 8 bits Position  */
#define US_MR_SYNC_Pos                        _U_(8)                                               /**< (US_MR) Synchronous Mode Select Position */
#define US_MR_SYNC_Msk                        (_U_(0x1) << US_MR_SYNC_Pos)                         /**< (US_MR) Synchronous Mode Select Mask */
#define US_MR_SYNC(value)                     (US_MR_SYNC_Msk & ((value) << US_MR_SYNC_Pos))      
#define US_MR_PAR_Pos                         _U_(9)                                               /**< (US_MR) Parity Type Position */
#define US_MR_PAR_Msk                         (_U_(0x7) << US_MR_PAR_Pos)                          /**< (US_MR) Parity Type Mask */
#define US_MR_PAR(value)                      (US_MR_PAR_Msk & ((value) << US_MR_PAR_Pos))        
#define   US_MR_PAR_EVEN_Val                  _U_(0x0)                                             /**< (US_MR) Even parity  */
#define   US_MR_PAR_ODD_Val                   _U_(0x1)                                             /**< (US_MR) Odd parity  */
#define   US_MR_PAR_SPACE_Val                 _U_(0x2)                                             /**< (US_MR) Parity forced to 0 (Space)  */
#define   US_MR_PAR_MARK_Val                  _U_(0x3)                                             /**< (US_MR) Parity forced to 1 (Mark)  */
#define   US_MR_PAR_NO_Val                    _U_(0x4)                                             /**< (US_MR) No parity  */
#define   US_MR_PAR_MULTIDROP_Val             _U_(0x6)                                             /**< (US_MR) Multidrop mode  */
#define US_MR_PAR_EVEN                        (US_MR_PAR_EVEN_Val << US_MR_PAR_Pos)                /**< (US_MR) Even parity Position  */
#define US_MR_PAR_ODD                         (US_MR_PAR_ODD_Val << US_MR_PAR_Pos)                 /**< (US_MR) Odd parity Position  */
#define US_MR_PAR_SPACE                       (US_MR_PAR_SPACE_Val << US_MR_PAR_Pos)               /**< (US_MR) Parity forced to 0 (Space) Position  */
#define US_MR_PAR_MARK                        (US_MR_PAR_MARK_Val << US_MR_PAR_Pos)                /**< (US_MR) Parity forced to 1 (Mark) Position  */
#define US_MR_PAR_NO                          (US_MR_PAR_NO_Val << US_MR_PAR_Pos)                  /**< (US_MR) No parity Position  */
#define US_MR_PAR_MULTIDROP                   (US_MR_PAR_MULTIDROP_Val << US_MR_PAR_Pos)           /**< (US_MR) Multidrop mode Position  */
#define US_MR_NBSTOP_Pos                      _U_(12)                                              /**< (US_MR) Number of Stop Bits Position */
#define US_MR_NBSTOP_Msk                      (_U_(0x3) << US_MR_NBSTOP_Pos)                       /**< (US_MR) Number of Stop Bits Mask */
#define US_MR_NBSTOP(value)                   (US_MR_NBSTOP_Msk & ((value) << US_MR_NBSTOP_Pos))  
#define   US_MR_NBSTOP_1_BIT_Val              _U_(0x0)                                             /**< (US_MR) 1 stop bit  */
#define   US_MR_NBSTOP_1_5_BIT_Val            _U_(0x1)                                             /**< (US_MR) 1.5 stop bits (SYNC = 0) or reserved (SYNC = 1)  */
#define   US_MR_NBSTOP_2_BIT_Val              _U_(0x2)                                             /**< (US_MR) 2 stop bits  */
#define US_MR_NBSTOP_1_BIT                    (US_MR_NBSTOP_1_BIT_Val << US_MR_NBSTOP_Pos)         /**< (US_MR) 1 stop bit Position  */
#define US_MR_NBSTOP_1_5_BIT                  (US_MR_NBSTOP_1_5_BIT_Val << US_MR_NBSTOP_Pos)       /**< (US_MR) 1.5 stop bits (SYNC = 0) or reserved (SYNC = 1) Position  */
#define US_MR_NBSTOP_2_BIT                    (US_MR_NBSTOP_2_BIT_Val << US_MR_NBSTOP_Pos)         /**< (US_MR) 2 stop bits Position  */
#define US_MR_CHMODE_Pos                      _U_(14)                                              /**< (US_MR) Channel Mode Position */
#define US_MR_CHMODE_Msk                      (_U_(0x3) << US_MR_CHMODE_Pos)                       /**< (US_MR) Channel Mode Mask */
#define US_MR_CHMODE(value)                   (US_MR_CHMODE_Msk & ((value) << US_MR_CHMODE_Pos))  
#define   US_MR_CHMODE_NORMAL_Val             _U_(0x0)                                             /**< (US_MR) Normal mode  */
#define   US_MR_CHMODE_AUTOMATIC_Val          _U_(0x1)                                             /**< (US_MR) Automatic Echo. Receiver input is connected to the TXD pin.  */
#define   US_MR_CHMODE_LOCAL_LOOPBACK_Val     _U_(0x2)                                             /**< (US_MR) Local Loopback. Transmitter output is connected to the Receiver Input.  */
#define   US_MR_CHMODE_REMOTE_LOOPBACK_Val    _U_(0x3)                                             /**< (US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin.  */
#define US_MR_CHMODE_NORMAL                   (US_MR_CHMODE_NORMAL_Val << US_MR_CHMODE_Pos)        /**< (US_MR) Normal mode Position  */
#define US_MR_CHMODE_AUTOMATIC                (US_MR_CHMODE_AUTOMATIC_Val << US_MR_CHMODE_Pos)     /**< (US_MR) Automatic Echo. Receiver input is connected to the TXD pin. Position  */
#define US_MR_CHMODE_LOCAL_LOOPBACK           (US_MR_CHMODE_LOCAL_LOOPBACK_Val << US_MR_CHMODE_Pos) /**< (US_MR) Local Loopback. Transmitter output is connected to the Receiver Input. Position  */
#define US_MR_CHMODE_REMOTE_LOOPBACK          (US_MR_CHMODE_REMOTE_LOOPBACK_Val << US_MR_CHMODE_Pos) /**< (US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin. Position  */
#define US_MR_MODE9_Pos                       _U_(17)                                              /**< (US_MR) 9-bit Character Length Position */
#define US_MR_MODE9_Msk                       (_U_(0x1) << US_MR_MODE9_Pos)                        /**< (US_MR) 9-bit Character Length Mask */
#define US_MR_MODE9(value)                    (US_MR_MODE9_Msk & ((value) << US_MR_MODE9_Pos))    
#define US_MR_CLKO_Pos                        _U_(18)                                              /**< (US_MR) Clock Output Select Position */
#define US_MR_CLKO_Msk                        (_U_(0x1) << US_MR_CLKO_Pos)                         /**< (US_MR) Clock Output Select Mask */
#define US_MR_CLKO(value)                     (US_MR_CLKO_Msk & ((value) << US_MR_CLKO_Pos))      
#define US_MR_OVER_Pos                        _U_(19)                                              /**< (US_MR) Oversampling Mode Position */
#define US_MR_OVER_Msk                        (_U_(0x1) << US_MR_OVER_Pos)                         /**< (US_MR) Oversampling Mode Mask */
#define US_MR_OVER(value)                     (US_MR_OVER_Msk & ((value) << US_MR_OVER_Pos))      
#define US_MR_FILTER_Pos                      _U_(28)                                              /**< (US_MR) Receive Line Filter Position */
#define US_MR_FILTER_Msk                      (_U_(0x1) << US_MR_FILTER_Pos)                       /**< (US_MR) Receive Line Filter Mask */
#define US_MR_FILTER(value)                   (US_MR_FILTER_Msk & ((value) << US_MR_FILTER_Pos))  
#define US_MR_Msk                             _U_(0x100EFFFF)                                      /**< (US_MR) Register Mask  */

#define US_MR_MODE_Pos                        _U_(17)                                              /**< (US_MR Position) 9-bit Character Length */
#define US_MR_MODE_Msk                        (_U_(0x1) << US_MR_MODE_Pos)                         /**< (US_MR Mask) MODE */
#define US_MR_MODE(value)                     (US_MR_MODE_Msk & ((value) << US_MR_MODE_Pos))       

/* -------- US_IER : (USART Offset: 0x08) ( /W 32) Interrupt Enable Register -------- */
#define US_IER_RXRDY_Pos                      _U_(0)                                               /**< (US_IER) RXRDY Interrupt Enable Position */
#define US_IER_RXRDY_Msk                      (_U_(0x1) << US_IER_RXRDY_Pos)                       /**< (US_IER) RXRDY Interrupt Enable Mask */
#define US_IER_RXRDY(value)                   (US_IER_RXRDY_Msk & ((value) << US_IER_RXRDY_Pos))  
#define US_IER_TXRDY_Pos                      _U_(1)                                               /**< (US_IER) TXRDY Interrupt Enable Position */
#define US_IER_TXRDY_Msk                      (_U_(0x1) << US_IER_TXRDY_Pos)                       /**< (US_IER) TXRDY Interrupt Enable Mask */
#define US_IER_TXRDY(value)                   (US_IER_TXRDY_Msk & ((value) << US_IER_TXRDY_Pos))  
#define US_IER_RXBRK_Pos                      _U_(2)                                               /**< (US_IER) Receiver Break Interrupt Enable Position */
#define US_IER_RXBRK_Msk                      (_U_(0x1) << US_IER_RXBRK_Pos)                       /**< (US_IER) Receiver Break Interrupt Enable Mask */
#define US_IER_RXBRK(value)                   (US_IER_RXBRK_Msk & ((value) << US_IER_RXBRK_Pos))  
#define US_IER_ENDRX_Pos                      _U_(3)                                               /**< (US_IER) End of Receive Buffer Interrupt Enable (available in all USART modes of operation) Position */
#define US_IER_ENDRX_Msk                      (_U_(0x1) << US_IER_ENDRX_Pos)                       /**< (US_IER) End of Receive Buffer Interrupt Enable (available in all USART modes of operation) Mask */
#define US_IER_ENDRX(value)                   (US_IER_ENDRX_Msk & ((value) << US_IER_ENDRX_Pos))  
#define US_IER_ENDTX_Pos                      _U_(4)                                               /**< (US_IER) End of Transmit Buffer Interrupt Enable (available in all USART modes of operation) Position */
#define US_IER_ENDTX_Msk                      (_U_(0x1) << US_IER_ENDTX_Pos)                       /**< (US_IER) End of Transmit Buffer Interrupt Enable (available in all USART modes of operation) Mask */
#define US_IER_ENDTX(value)                   (US_IER_ENDTX_Msk & ((value) << US_IER_ENDTX_Pos))  
#define US_IER_OVRE_Pos                       _U_(5)                                               /**< (US_IER) Overrun Error Interrupt Enable Position */
#define US_IER_OVRE_Msk                       (_U_(0x1) << US_IER_OVRE_Pos)                        /**< (US_IER) Overrun Error Interrupt Enable Mask */
#define US_IER_OVRE(value)                    (US_IER_OVRE_Msk & ((value) << US_IER_OVRE_Pos))    
#define US_IER_FRAME_Pos                      _U_(6)                                               /**< (US_IER) Framing Error Interrupt Enable Position */
#define US_IER_FRAME_Msk                      (_U_(0x1) << US_IER_FRAME_Pos)                       /**< (US_IER) Framing Error Interrupt Enable Mask */
#define US_IER_FRAME(value)                   (US_IER_FRAME_Msk & ((value) << US_IER_FRAME_Pos))  
#define US_IER_PARE_Pos                       _U_(7)                                               /**< (US_IER) Parity Error Interrupt Enable Position */
#define US_IER_PARE_Msk                       (_U_(0x1) << US_IER_PARE_Pos)                        /**< (US_IER) Parity Error Interrupt Enable Mask */
#define US_IER_PARE(value)                    (US_IER_PARE_Msk & ((value) << US_IER_PARE_Pos))    
#define US_IER_TIMEOUT_Pos                    _U_(8)                                               /**< (US_IER) Time-out Interrupt Enable Position */
#define US_IER_TIMEOUT_Msk                    (_U_(0x1) << US_IER_TIMEOUT_Pos)                     /**< (US_IER) Time-out Interrupt Enable Mask */
#define US_IER_TIMEOUT(value)                 (US_IER_TIMEOUT_Msk & ((value) << US_IER_TIMEOUT_Pos))
#define US_IER_TXEMPTY_Pos                    _U_(9)                                               /**< (US_IER) TXEMPTY Interrupt Enable Position */
#define US_IER_TXEMPTY_Msk                    (_U_(0x1) << US_IER_TXEMPTY_Pos)                     /**< (US_IER) TXEMPTY Interrupt Enable Mask */
#define US_IER_TXEMPTY(value)                 (US_IER_TXEMPTY_Msk & ((value) << US_IER_TXEMPTY_Pos))
#define US_IER_TXBUFE_Pos                     _U_(11)                                              /**< (US_IER) Transmit Buffer Empty Interrupt Enable (available in all USART modes of operation) Position */
#define US_IER_TXBUFE_Msk                     (_U_(0x1) << US_IER_TXBUFE_Pos)                      /**< (US_IER) Transmit Buffer Empty Interrupt Enable (available in all USART modes of operation) Mask */
#define US_IER_TXBUFE(value)                  (US_IER_TXBUFE_Msk & ((value) << US_IER_TXBUFE_Pos))
#define US_IER_RXBUFF_Pos                     _U_(12)                                              /**< (US_IER) Receive Buffer Full Interrupt Enable (available in all USART modes of operation) Position */
#define US_IER_RXBUFF_Msk                     (_U_(0x1) << US_IER_RXBUFF_Pos)                      /**< (US_IER) Receive Buffer Full Interrupt Enable (available in all USART modes of operation) Mask */
#define US_IER_RXBUFF(value)                  (US_IER_RXBUFF_Msk & ((value) << US_IER_RXBUFF_Pos))
#define US_IER_CTSIC_Pos                      _U_(19)                                              /**< (US_IER) Clear to Send Input Change Interrupt Enable Position */
#define US_IER_CTSIC_Msk                      (_U_(0x1) << US_IER_CTSIC_Pos)                       /**< (US_IER) Clear to Send Input Change Interrupt Enable Mask */
#define US_IER_CTSIC(value)                   (US_IER_CTSIC_Msk & ((value) << US_IER_CTSIC_Pos))  
#define US_IER_Msk                            _U_(0x00081BFF)                                      /**< (US_IER) Register Mask  */


/* -------- US_IDR : (USART Offset: 0x0C) ( /W 32) Interrupt Disable Register -------- */
#define US_IDR_RXRDY_Pos                      _U_(0)                                               /**< (US_IDR) RXRDY Interrupt Disable Position */
#define US_IDR_RXRDY_Msk                      (_U_(0x1) << US_IDR_RXRDY_Pos)                       /**< (US_IDR) RXRDY Interrupt Disable Mask */
#define US_IDR_RXRDY(value)                   (US_IDR_RXRDY_Msk & ((value) << US_IDR_RXRDY_Pos))  
#define US_IDR_TXRDY_Pos                      _U_(1)                                               /**< (US_IDR) TXRDY Interrupt Disable Position */
#define US_IDR_TXRDY_Msk                      (_U_(0x1) << US_IDR_TXRDY_Pos)                       /**< (US_IDR) TXRDY Interrupt Disable Mask */
#define US_IDR_TXRDY(value)                   (US_IDR_TXRDY_Msk & ((value) << US_IDR_TXRDY_Pos))  
#define US_IDR_RXBRK_Pos                      _U_(2)                                               /**< (US_IDR) Receiver Break Interrupt Disable Position */
#define US_IDR_RXBRK_Msk                      (_U_(0x1) << US_IDR_RXBRK_Pos)                       /**< (US_IDR) Receiver Break Interrupt Disable Mask */
#define US_IDR_RXBRK(value)                   (US_IDR_RXBRK_Msk & ((value) << US_IDR_RXBRK_Pos))  
#define US_IDR_ENDRX_Pos                      _U_(3)                                               /**< (US_IDR) End of Receive Buffer Transfer Interrupt Disable (available in all USART modes of operation) Position */
#define US_IDR_ENDRX_Msk                      (_U_(0x1) << US_IDR_ENDRX_Pos)                       /**< (US_IDR) End of Receive Buffer Transfer Interrupt Disable (available in all USART modes of operation) Mask */
#define US_IDR_ENDRX(value)                   (US_IDR_ENDRX_Msk & ((value) << US_IDR_ENDRX_Pos))  
#define US_IDR_ENDTX_Pos                      _U_(4)                                               /**< (US_IDR) End of Transmit Buffer Interrupt Disable (available in all USART modes of operation) Position */
#define US_IDR_ENDTX_Msk                      (_U_(0x1) << US_IDR_ENDTX_Pos)                       /**< (US_IDR) End of Transmit Buffer Interrupt Disable (available in all USART modes of operation) Mask */
#define US_IDR_ENDTX(value)                   (US_IDR_ENDTX_Msk & ((value) << US_IDR_ENDTX_Pos))  
#define US_IDR_OVRE_Pos                       _U_(5)                                               /**< (US_IDR) Overrun Error Interrupt Enable Position */
#define US_IDR_OVRE_Msk                       (_U_(0x1) << US_IDR_OVRE_Pos)                        /**< (US_IDR) Overrun Error Interrupt Enable Mask */
#define US_IDR_OVRE(value)                    (US_IDR_OVRE_Msk & ((value) << US_IDR_OVRE_Pos))    
#define US_IDR_FRAME_Pos                      _U_(6)                                               /**< (US_IDR) Framing Error Interrupt Disable Position */
#define US_IDR_FRAME_Msk                      (_U_(0x1) << US_IDR_FRAME_Pos)                       /**< (US_IDR) Framing Error Interrupt Disable Mask */
#define US_IDR_FRAME(value)                   (US_IDR_FRAME_Msk & ((value) << US_IDR_FRAME_Pos))  
#define US_IDR_PARE_Pos                       _U_(7)                                               /**< (US_IDR) Parity Error Interrupt Disable Position */
#define US_IDR_PARE_Msk                       (_U_(0x1) << US_IDR_PARE_Pos)                        /**< (US_IDR) Parity Error Interrupt Disable Mask */
#define US_IDR_PARE(value)                    (US_IDR_PARE_Msk & ((value) << US_IDR_PARE_Pos))    
#define US_IDR_TIMEOUT_Pos                    _U_(8)                                               /**< (US_IDR) Time-out Interrupt Disable Position */
#define US_IDR_TIMEOUT_Msk                    (_U_(0x1) << US_IDR_TIMEOUT_Pos)                     /**< (US_IDR) Time-out Interrupt Disable Mask */
#define US_IDR_TIMEOUT(value)                 (US_IDR_TIMEOUT_Msk & ((value) << US_IDR_TIMEOUT_Pos))
#define US_IDR_TXEMPTY_Pos                    _U_(9)                                               /**< (US_IDR) TXEMPTY Interrupt Disable Position */
#define US_IDR_TXEMPTY_Msk                    (_U_(0x1) << US_IDR_TXEMPTY_Pos)                     /**< (US_IDR) TXEMPTY Interrupt Disable Mask */
#define US_IDR_TXEMPTY(value)                 (US_IDR_TXEMPTY_Msk & ((value) << US_IDR_TXEMPTY_Pos))
#define US_IDR_TXBUFE_Pos                     _U_(11)                                              /**< (US_IDR) Transmit Buffer Empty Interrupt Disable (available in all USART modes of operation) Position */
#define US_IDR_TXBUFE_Msk                     (_U_(0x1) << US_IDR_TXBUFE_Pos)                      /**< (US_IDR) Transmit Buffer Empty Interrupt Disable (available in all USART modes of operation) Mask */
#define US_IDR_TXBUFE(value)                  (US_IDR_TXBUFE_Msk & ((value) << US_IDR_TXBUFE_Pos))
#define US_IDR_RXBUFF_Pos                     _U_(12)                                              /**< (US_IDR) Receive Buffer Full Interrupt Disable (available in all USART modes of operation) Position */
#define US_IDR_RXBUFF_Msk                     (_U_(0x1) << US_IDR_RXBUFF_Pos)                      /**< (US_IDR) Receive Buffer Full Interrupt Disable (available in all USART modes of operation) Mask */
#define US_IDR_RXBUFF(value)                  (US_IDR_RXBUFF_Msk & ((value) << US_IDR_RXBUFF_Pos))
#define US_IDR_CTSIC_Pos                      _U_(19)                                              /**< (US_IDR) Clear to Send Input Change Interrupt Disable Position */
#define US_IDR_CTSIC_Msk                      (_U_(0x1) << US_IDR_CTSIC_Pos)                       /**< (US_IDR) Clear to Send Input Change Interrupt Disable Mask */
#define US_IDR_CTSIC(value)                   (US_IDR_CTSIC_Msk & ((value) << US_IDR_CTSIC_Pos))  
#define US_IDR_Msk                            _U_(0x00081BFF)                                      /**< (US_IDR) Register Mask  */


/* -------- US_IMR : (USART Offset: 0x10) ( R/ 32) Interrupt Mask Register -------- */
#define US_IMR_RXRDY_Pos                      _U_(0)                                               /**< (US_IMR) RXRDY Interrupt Mask Position */
#define US_IMR_RXRDY_Msk                      (_U_(0x1) << US_IMR_RXRDY_Pos)                       /**< (US_IMR) RXRDY Interrupt Mask Mask */
#define US_IMR_RXRDY(value)                   (US_IMR_RXRDY_Msk & ((value) << US_IMR_RXRDY_Pos))  
#define US_IMR_TXRDY_Pos                      _U_(1)                                               /**< (US_IMR) TXRDY Interrupt Mask Position */
#define US_IMR_TXRDY_Msk                      (_U_(0x1) << US_IMR_TXRDY_Pos)                       /**< (US_IMR) TXRDY Interrupt Mask Mask */
#define US_IMR_TXRDY(value)                   (US_IMR_TXRDY_Msk & ((value) << US_IMR_TXRDY_Pos))  
#define US_IMR_RXBRK_Pos                      _U_(2)                                               /**< (US_IMR) Receiver Break Interrupt Mask Position */
#define US_IMR_RXBRK_Msk                      (_U_(0x1) << US_IMR_RXBRK_Pos)                       /**< (US_IMR) Receiver Break Interrupt Mask Mask */
#define US_IMR_RXBRK(value)                   (US_IMR_RXBRK_Msk & ((value) << US_IMR_RXBRK_Pos))  
#define US_IMR_ENDRX_Pos                      _U_(3)                                               /**< (US_IMR) End of Receive Buffer Interrupt Mask (available in all USART modes of operation) Position */
#define US_IMR_ENDRX_Msk                      (_U_(0x1) << US_IMR_ENDRX_Pos)                       /**< (US_IMR) End of Receive Buffer Interrupt Mask (available in all USART modes of operation) Mask */
#define US_IMR_ENDRX(value)                   (US_IMR_ENDRX_Msk & ((value) << US_IMR_ENDRX_Pos))  
#define US_IMR_ENDTX_Pos                      _U_(4)                                               /**< (US_IMR) End of Transmit Buffer Interrupt Mask (available in all USART modes of operation) Position */
#define US_IMR_ENDTX_Msk                      (_U_(0x1) << US_IMR_ENDTX_Pos)                       /**< (US_IMR) End of Transmit Buffer Interrupt Mask (available in all USART modes of operation) Mask */
#define US_IMR_ENDTX(value)                   (US_IMR_ENDTX_Msk & ((value) << US_IMR_ENDTX_Pos))  
#define US_IMR_OVRE_Pos                       _U_(5)                                               /**< (US_IMR) Overrun Error Interrupt Mask Position */
#define US_IMR_OVRE_Msk                       (_U_(0x1) << US_IMR_OVRE_Pos)                        /**< (US_IMR) Overrun Error Interrupt Mask Mask */
#define US_IMR_OVRE(value)                    (US_IMR_OVRE_Msk & ((value) << US_IMR_OVRE_Pos))    
#define US_IMR_FRAME_Pos                      _U_(6)                                               /**< (US_IMR) Framing Error Interrupt Mask Position */
#define US_IMR_FRAME_Msk                      (_U_(0x1) << US_IMR_FRAME_Pos)                       /**< (US_IMR) Framing Error Interrupt Mask Mask */
#define US_IMR_FRAME(value)                   (US_IMR_FRAME_Msk & ((value) << US_IMR_FRAME_Pos))  
#define US_IMR_PARE_Pos                       _U_(7)                                               /**< (US_IMR) Parity Error Interrupt Mask Position */
#define US_IMR_PARE_Msk                       (_U_(0x1) << US_IMR_PARE_Pos)                        /**< (US_IMR) Parity Error Interrupt Mask Mask */
#define US_IMR_PARE(value)                    (US_IMR_PARE_Msk & ((value) << US_IMR_PARE_Pos))    
#define US_IMR_TIMEOUT_Pos                    _U_(8)                                               /**< (US_IMR) Time-out Interrupt Mask Position */
#define US_IMR_TIMEOUT_Msk                    (_U_(0x1) << US_IMR_TIMEOUT_Pos)                     /**< (US_IMR) Time-out Interrupt Mask Mask */
#define US_IMR_TIMEOUT(value)                 (US_IMR_TIMEOUT_Msk & ((value) << US_IMR_TIMEOUT_Pos))
#define US_IMR_TXEMPTY_Pos                    _U_(9)                                               /**< (US_IMR) TXEMPTY Interrupt Mask Position */
#define US_IMR_TXEMPTY_Msk                    (_U_(0x1) << US_IMR_TXEMPTY_Pos)                     /**< (US_IMR) TXEMPTY Interrupt Mask Mask */
#define US_IMR_TXEMPTY(value)                 (US_IMR_TXEMPTY_Msk & ((value) << US_IMR_TXEMPTY_Pos))
#define US_IMR_TXBUFE_Pos                     _U_(11)                                              /**< (US_IMR) Transmit Buffer Empty Interrupt Mask (available in all USART modes of operation) Position */
#define US_IMR_TXBUFE_Msk                     (_U_(0x1) << US_IMR_TXBUFE_Pos)                      /**< (US_IMR) Transmit Buffer Empty Interrupt Mask (available in all USART modes of operation) Mask */
#define US_IMR_TXBUFE(value)                  (US_IMR_TXBUFE_Msk & ((value) << US_IMR_TXBUFE_Pos))
#define US_IMR_RXBUFF_Pos                     _U_(12)                                              /**< (US_IMR) Receive Buffer Full Interrupt Mask (available in all USART modes of operation) Position */
#define US_IMR_RXBUFF_Msk                     (_U_(0x1) << US_IMR_RXBUFF_Pos)                      /**< (US_IMR) Receive Buffer Full Interrupt Mask (available in all USART modes of operation) Mask */
#define US_IMR_RXBUFF(value)                  (US_IMR_RXBUFF_Msk & ((value) << US_IMR_RXBUFF_Pos))
#define US_IMR_CTSIC_Pos                      _U_(19)                                              /**< (US_IMR) Clear to Send Input Change Interrupt Mask Position */
#define US_IMR_CTSIC_Msk                      (_U_(0x1) << US_IMR_CTSIC_Pos)                       /**< (US_IMR) Clear to Send Input Change Interrupt Mask Mask */
#define US_IMR_CTSIC(value)                   (US_IMR_CTSIC_Msk & ((value) << US_IMR_CTSIC_Pos))  
#define US_IMR_Msk                            _U_(0x00081BFF)                                      /**< (US_IMR) Register Mask  */


/* -------- US_CSR : (USART Offset: 0x14) ( R/ 32) Channel Status Register -------- */
#define US_CSR_RXRDY_Pos                      _U_(0)                                               /**< (US_CSR) Receiver Ready (cleared by reading US_RHR) Position */
#define US_CSR_RXRDY_Msk                      (_U_(0x1) << US_CSR_RXRDY_Pos)                       /**< (US_CSR) Receiver Ready (cleared by reading US_RHR) Mask */
#define US_CSR_RXRDY(value)                   (US_CSR_RXRDY_Msk & ((value) << US_CSR_RXRDY_Pos))  
#define US_CSR_TXRDY_Pos                      _U_(1)                                               /**< (US_CSR) Transmitter Ready (cleared by writing US_THR) Position */
#define US_CSR_TXRDY_Msk                      (_U_(0x1) << US_CSR_TXRDY_Pos)                       /**< (US_CSR) Transmitter Ready (cleared by writing US_THR) Mask */
#define US_CSR_TXRDY(value)                   (US_CSR_TXRDY_Msk & ((value) << US_CSR_TXRDY_Pos))  
#define US_CSR_RXBRK_Pos                      _U_(2)                                               /**< (US_CSR) Break Received/End of Break (cleared by writing a one to bit US_CR.RSTSTA) Position */
#define US_CSR_RXBRK_Msk                      (_U_(0x1) << US_CSR_RXBRK_Pos)                       /**< (US_CSR) Break Received/End of Break (cleared by writing a one to bit US_CR.RSTSTA) Mask */
#define US_CSR_RXBRK(value)                   (US_CSR_RXBRK_Msk & ((value) << US_CSR_RXBRK_Pos))  
#define US_CSR_ENDRX_Pos                      _U_(3)                                               /**< (US_CSR) End of RX Buffer (cleared by writing US_RCR or US_RNCR) Position */
#define US_CSR_ENDRX_Msk                      (_U_(0x1) << US_CSR_ENDRX_Pos)                       /**< (US_CSR) End of RX Buffer (cleared by writing US_RCR or US_RNCR) Mask */
#define US_CSR_ENDRX(value)                   (US_CSR_ENDRX_Msk & ((value) << US_CSR_ENDRX_Pos))  
#define US_CSR_ENDTX_Pos                      _U_(4)                                               /**< (US_CSR) End of TX Buffer (cleared by writing US_TCR or US_TNCR) Position */
#define US_CSR_ENDTX_Msk                      (_U_(0x1) << US_CSR_ENDTX_Pos)                       /**< (US_CSR) End of TX Buffer (cleared by writing US_TCR or US_TNCR) Mask */
#define US_CSR_ENDTX(value)                   (US_CSR_ENDTX_Msk & ((value) << US_CSR_ENDTX_Pos))  
#define US_CSR_OVRE_Pos                       _U_(5)                                               /**< (US_CSR) Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) Position */
#define US_CSR_OVRE_Msk                       (_U_(0x1) << US_CSR_OVRE_Pos)                        /**< (US_CSR) Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) Mask */
#define US_CSR_OVRE(value)                    (US_CSR_OVRE_Msk & ((value) << US_CSR_OVRE_Pos))    
#define US_CSR_FRAME_Pos                      _U_(6)                                               /**< (US_CSR) Framing Error (cleared by writing a one to bit US_CR.RSTSTA) Position */
#define US_CSR_FRAME_Msk                      (_U_(0x1) << US_CSR_FRAME_Pos)                       /**< (US_CSR) Framing Error (cleared by writing a one to bit US_CR.RSTSTA) Mask */
#define US_CSR_FRAME(value)                   (US_CSR_FRAME_Msk & ((value) << US_CSR_FRAME_Pos))  
#define US_CSR_PARE_Pos                       _U_(7)                                               /**< (US_CSR) Parity Error (cleared by writing a one to bit US_CR.RSTSTA) Position */
#define US_CSR_PARE_Msk                       (_U_(0x1) << US_CSR_PARE_Pos)                        /**< (US_CSR) Parity Error (cleared by writing a one to bit US_CR.RSTSTA) Mask */
#define US_CSR_PARE(value)                    (US_CSR_PARE_Msk & ((value) << US_CSR_PARE_Pos))    
#define US_CSR_TIMEOUT_Pos                    _U_(8)                                               /**< (US_CSR) Receiver Time-out (cleared by writing a one to bit US_CR.STTTO) Position */
#define US_CSR_TIMEOUT_Msk                    (_U_(0x1) << US_CSR_TIMEOUT_Pos)                     /**< (US_CSR) Receiver Time-out (cleared by writing a one to bit US_CR.STTTO) Mask */
#define US_CSR_TIMEOUT(value)                 (US_CSR_TIMEOUT_Msk & ((value) << US_CSR_TIMEOUT_Pos))
#define US_CSR_TXEMPTY_Pos                    _U_(9)                                               /**< (US_CSR) Transmitter Empty (cleared by writing US_THR) Position */
#define US_CSR_TXEMPTY_Msk                    (_U_(0x1) << US_CSR_TXEMPTY_Pos)                     /**< (US_CSR) Transmitter Empty (cleared by writing US_THR) Mask */
#define US_CSR_TXEMPTY(value)                 (US_CSR_TXEMPTY_Msk & ((value) << US_CSR_TXEMPTY_Pos))
#define US_CSR_TXBUFE_Pos                     _U_(11)                                              /**< (US_CSR) TX Buffer Empty (cleared by writing US_TCR or US_TNCR) Position */
#define US_CSR_TXBUFE_Msk                     (_U_(0x1) << US_CSR_TXBUFE_Pos)                      /**< (US_CSR) TX Buffer Empty (cleared by writing US_TCR or US_TNCR) Mask */
#define US_CSR_TXBUFE(value)                  (US_CSR_TXBUFE_Msk & ((value) << US_CSR_TXBUFE_Pos))
#define US_CSR_RXBUFF_Pos                     _U_(12)                                              /**< (US_CSR) RX Buffer Full (cleared by writing US_RCR or US_RNCR) Position */
#define US_CSR_RXBUFF_Msk                     (_U_(0x1) << US_CSR_RXBUFF_Pos)                      /**< (US_CSR) RX Buffer Full (cleared by writing US_RCR or US_RNCR) Mask */
#define US_CSR_RXBUFF(value)                  (US_CSR_RXBUFF_Msk & ((value) << US_CSR_RXBUFF_Pos))
#define US_CSR_CTSIC_Pos                      _U_(19)                                              /**< (US_CSR) Clear to Send Input Change Flag (cleared on read) Position */
#define US_CSR_CTSIC_Msk                      (_U_(0x1) << US_CSR_CTSIC_Pos)                       /**< (US_CSR) Clear to Send Input Change Flag (cleared on read) Mask */
#define US_CSR_CTSIC(value)                   (US_CSR_CTSIC_Msk & ((value) << US_CSR_CTSIC_Pos))  
#define US_CSR_CTS_Pos                        _U_(23)                                              /**< (US_CSR) Image of CTS Input Position */
#define US_CSR_CTS_Msk                        (_U_(0x1) << US_CSR_CTS_Pos)                         /**< (US_CSR) Image of CTS Input Mask */
#define US_CSR_CTS(value)                     (US_CSR_CTS_Msk & ((value) << US_CSR_CTS_Pos))      
#define US_CSR_Msk                            _U_(0x00881BFF)                                      /**< (US_CSR) Register Mask  */


/* -------- US_RHR : (USART Offset: 0x18) ( R/ 32) Receive Holding Register -------- */
#define US_RHR_RXCHR_Pos                      _U_(0)                                               /**< (US_RHR) Received Character Position */
#define US_RHR_RXCHR_Msk                      (_U_(0x1FF) << US_RHR_RXCHR_Pos)                     /**< (US_RHR) Received Character Mask */
#define US_RHR_RXCHR(value)                   (US_RHR_RXCHR_Msk & ((value) << US_RHR_RXCHR_Pos))  
#define US_RHR_RXSYNH_Pos                     _U_(15)                                              /**< (US_RHR) Received Sync Position */
#define US_RHR_RXSYNH_Msk                     (_U_(0x1) << US_RHR_RXSYNH_Pos)                      /**< (US_RHR) Received Sync Mask */
#define US_RHR_RXSYNH(value)                  (US_RHR_RXSYNH_Msk & ((value) << US_RHR_RXSYNH_Pos))
#define US_RHR_Msk                            _U_(0x000081FF)                                      /**< (US_RHR) Register Mask  */


/* -------- US_THR : (USART Offset: 0x1C) ( /W 32) Transmit Holding Register -------- */
#define US_THR_TXCHR_Pos                      _U_(0)                                               /**< (US_THR) Character to be Transmitted Position */
#define US_THR_TXCHR_Msk                      (_U_(0x1FF) << US_THR_TXCHR_Pos)                     /**< (US_THR) Character to be Transmitted Mask */
#define US_THR_TXCHR(value)                   (US_THR_TXCHR_Msk & ((value) << US_THR_TXCHR_Pos))  
#define US_THR_TXSYNH_Pos                     _U_(15)                                              /**< (US_THR) Sync Field to be Transmitted Position */
#define US_THR_TXSYNH_Msk                     (_U_(0x1) << US_THR_TXSYNH_Pos)                      /**< (US_THR) Sync Field to be Transmitted Mask */
#define US_THR_TXSYNH(value)                  (US_THR_TXSYNH_Msk & ((value) << US_THR_TXSYNH_Pos))
#define US_THR_Msk                            _U_(0x000081FF)                                      /**< (US_THR) Register Mask  */


/* -------- US_BRGR : (USART Offset: 0x20) (R/W 32) Baud Rate Generator Register -------- */
#define US_BRGR_CD_Pos                        _U_(0)                                               /**< (US_BRGR) Clock Divider Position */
#define US_BRGR_CD_Msk                        (_U_(0xFFFF) << US_BRGR_CD_Pos)                      /**< (US_BRGR) Clock Divider Mask */
#define US_BRGR_CD(value)                     (US_BRGR_CD_Msk & ((value) << US_BRGR_CD_Pos))      
#define US_BRGR_FP_Pos                        _U_(16)                                              /**< (US_BRGR) Fractional Part Position */
#define US_BRGR_FP_Msk                        (_U_(0x7) << US_BRGR_FP_Pos)                         /**< (US_BRGR) Fractional Part Mask */
#define US_BRGR_FP(value)                     (US_BRGR_FP_Msk & ((value) << US_BRGR_FP_Pos))      
#define US_BRGR_Msk                           _U_(0x0007FFFF)                                      /**< (US_BRGR) Register Mask  */


/* -------- US_RTOR : (USART Offset: 0x24) (R/W 32) Receiver Time-out Register -------- */
#define US_RTOR_TO_Pos                        _U_(0)                                               /**< (US_RTOR) Time-out Value Position */
#define US_RTOR_TO_Msk                        (_U_(0xFFFF) << US_RTOR_TO_Pos)                      /**< (US_RTOR) Time-out Value Mask */
#define US_RTOR_TO(value)                     (US_RTOR_TO_Msk & ((value) << US_RTOR_TO_Pos))      
#define US_RTOR_Msk                           _U_(0x0000FFFF)                                      /**< (US_RTOR) Register Mask  */


/* -------- US_TTGR : (USART Offset: 0x28) (R/W 32) Transmitter Timeguard Register -------- */
#define US_TTGR_TG_Pos                        _U_(0)                                               /**< (US_TTGR) Timeguard Value Position */
#define US_TTGR_TG_Msk                        (_U_(0xFF) << US_TTGR_TG_Pos)                        /**< (US_TTGR) Timeguard Value Mask */
#define US_TTGR_TG(value)                     (US_TTGR_TG_Msk & ((value) << US_TTGR_TG_Pos))      
#define US_TTGR_Msk                           _U_(0x000000FF)                                      /**< (US_TTGR) Register Mask  */


/* -------- US_NER : (USART Offset: 0x44) ( R/ 32) Number of Errors Register -------- */
#define US_NER_NB_ERRORS_Pos                  _U_(0)                                               /**< (US_NER) Number of Errors Position */
#define US_NER_NB_ERRORS_Msk                  (_U_(0xFF) << US_NER_NB_ERRORS_Pos)                  /**< (US_NER) Number of Errors Mask */
#define US_NER_NB_ERRORS(value)               (US_NER_NB_ERRORS_Msk & ((value) << US_NER_NB_ERRORS_Pos))
#define US_NER_Msk                            _U_(0x000000FF)                                      /**< (US_NER) Register Mask  */


/* -------- US_WPMR : (USART Offset: 0xE4) (R/W 32) Write Protection Mode Register -------- */
#define US_WPMR_WPEN_Pos                      _U_(0)                                               /**< (US_WPMR) Write Protection Enable Position */
#define US_WPMR_WPEN_Msk                      (_U_(0x1) << US_WPMR_WPEN_Pos)                       /**< (US_WPMR) Write Protection Enable Mask */
#define US_WPMR_WPEN(value)                   (US_WPMR_WPEN_Msk & ((value) << US_WPMR_WPEN_Pos))  
#define US_WPMR_WPKEY_Pos                     _U_(8)                                               /**< (US_WPMR) Write Protection Key Position */
#define US_WPMR_WPKEY_Msk                     (_U_(0xFFFFFF) << US_WPMR_WPKEY_Pos)                 /**< (US_WPMR) Write Protection Key Mask */
#define US_WPMR_WPKEY(value)                  (US_WPMR_WPKEY_Msk & ((value) << US_WPMR_WPKEY_Pos))
#define   US_WPMR_WPKEY_PASSWD_Val            _U_(0x555341)                                        /**< (US_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0.  */
#define US_WPMR_WPKEY_PASSWD                  (US_WPMR_WPKEY_PASSWD_Val << US_WPMR_WPKEY_Pos)      /**< (US_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit. Always reads as 0. Position  */
#define US_WPMR_Msk                           _U_(0xFFFFFF01)                                      /**< (US_WPMR) Register Mask  */


/* -------- US_WPSR : (USART Offset: 0xE8) ( R/ 32) Write Protection Status Register -------- */
#define US_WPSR_WPVS_Pos                      _U_(0)                                               /**< (US_WPSR) Write Protection Violation Status Position */
#define US_WPSR_WPVS_Msk                      (_U_(0x1) << US_WPSR_WPVS_Pos)                       /**< (US_WPSR) Write Protection Violation Status Mask */
#define US_WPSR_WPVS(value)                   (US_WPSR_WPVS_Msk & ((value) << US_WPSR_WPVS_Pos))  
#define US_WPSR_WPVSRC_Pos                    _U_(8)                                               /**< (US_WPSR) Write Protection Violation Source Position */
#define US_WPSR_WPVSRC_Msk                    (_U_(0xFFFF) << US_WPSR_WPVSRC_Pos)                  /**< (US_WPSR) Write Protection Violation Source Mask */
#define US_WPSR_WPVSRC(value)                 (US_WPSR_WPVSRC_Msk & ((value) << US_WPSR_WPVSRC_Pos))
#define US_WPSR_Msk                           _U_(0x00FFFF01)                                      /**< (US_WPSR) Register Mask  */


/* -------- US_RPR : (USART Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#define US_RPR_RXPTR_Pos                      _U_(0)                                               /**< (US_RPR) Receive Pointer Register Position */
#define US_RPR_RXPTR_Msk                      (_U_(0xFFFFFFFF) << US_RPR_RXPTR_Pos)                /**< (US_RPR) Receive Pointer Register Mask */
#define US_RPR_RXPTR(value)                   (US_RPR_RXPTR_Msk & ((value) << US_RPR_RXPTR_Pos))  
#define US_RPR_Msk                            _U_(0xFFFFFFFF)                                      /**< (US_RPR) Register Mask  */


/* -------- US_RCR : (USART Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#define US_RCR_RXCTR_Pos                      _U_(0)                                               /**< (US_RCR) Receive Counter Register Position */
#define US_RCR_RXCTR_Msk                      (_U_(0xFFFF) << US_RCR_RXCTR_Pos)                    /**< (US_RCR) Receive Counter Register Mask */
#define US_RCR_RXCTR(value)                   (US_RCR_RXCTR_Msk & ((value) << US_RCR_RXCTR_Pos))  
#define US_RCR_Msk                            _U_(0x0000FFFF)                                      /**< (US_RCR) Register Mask  */


/* -------- US_TPR : (USART Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#define US_TPR_TXPTR_Pos                      _U_(0)                                               /**< (US_TPR) Transmit Counter Register Position */
#define US_TPR_TXPTR_Msk                      (_U_(0xFFFFFFFF) << US_TPR_TXPTR_Pos)                /**< (US_TPR) Transmit Counter Register Mask */
#define US_TPR_TXPTR(value)                   (US_TPR_TXPTR_Msk & ((value) << US_TPR_TXPTR_Pos))  
#define US_TPR_Msk                            _U_(0xFFFFFFFF)                                      /**< (US_TPR) Register Mask  */


/* -------- US_TCR : (USART Offset: 0x10C) (R/W 32) Transmit Counter Register -------- */
#define US_TCR_TXCTR_Pos                      _U_(0)                                               /**< (US_TCR) Transmit Counter Register Position */
#define US_TCR_TXCTR_Msk                      (_U_(0xFFFF) << US_TCR_TXCTR_Pos)                    /**< (US_TCR) Transmit Counter Register Mask */
#define US_TCR_TXCTR(value)                   (US_TCR_TXCTR_Msk & ((value) << US_TCR_TXCTR_Pos))  
#define US_TCR_Msk                            _U_(0x0000FFFF)                                      /**< (US_TCR) Register Mask  */


/* -------- US_RNPR : (USART Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#define US_RNPR_RXNPTR_Pos                    _U_(0)                                               /**< (US_RNPR) Receive Next Pointer Position */
#define US_RNPR_RXNPTR_Msk                    (_U_(0xFFFFFFFF) << US_RNPR_RXNPTR_Pos)              /**< (US_RNPR) Receive Next Pointer Mask */
#define US_RNPR_RXNPTR(value)                 (US_RNPR_RXNPTR_Msk & ((value) << US_RNPR_RXNPTR_Pos))
#define US_RNPR_Msk                           _U_(0xFFFFFFFF)                                      /**< (US_RNPR) Register Mask  */


/* -------- US_RNCR : (USART Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#define US_RNCR_RXNCTR_Pos                    _U_(0)                                               /**< (US_RNCR) Receive Next Counter Position */
#define US_RNCR_RXNCTR_Msk                    (_U_(0xFFFF) << US_RNCR_RXNCTR_Pos)                  /**< (US_RNCR) Receive Next Counter Mask */
#define US_RNCR_RXNCTR(value)                 (US_RNCR_RXNCTR_Msk & ((value) << US_RNCR_RXNCTR_Pos))
#define US_RNCR_Msk                           _U_(0x0000FFFF)                                      /**< (US_RNCR) Register Mask  */


/* -------- US_TNPR : (USART Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#define US_TNPR_TXNPTR_Pos                    _U_(0)                                               /**< (US_TNPR) Transmit Next Pointer Position */
#define US_TNPR_TXNPTR_Msk                    (_U_(0xFFFFFFFF) << US_TNPR_TXNPTR_Pos)              /**< (US_TNPR) Transmit Next Pointer Mask */
#define US_TNPR_TXNPTR(value)                 (US_TNPR_TXNPTR_Msk & ((value) << US_TNPR_TXNPTR_Pos))
#define US_TNPR_Msk                           _U_(0xFFFFFFFF)                                      /**< (US_TNPR) Register Mask  */


/* -------- US_TNCR : (USART Offset: 0x11C) (R/W 32) Transmit Next Counter Register -------- */
#define US_TNCR_TXNCTR_Pos                    _U_(0)                                               /**< (US_TNCR) Transmit Counter Next Position */
#define US_TNCR_TXNCTR_Msk                    (_U_(0xFFFF) << US_TNCR_TXNCTR_Pos)                  /**< (US_TNCR) Transmit Counter Next Mask */
#define US_TNCR_TXNCTR(value)                 (US_TNCR_TXNCTR_Msk & ((value) << US_TNCR_TXNCTR_Pos))
#define US_TNCR_Msk                           _U_(0x0000FFFF)                                      /**< (US_TNCR) Register Mask  */


/* -------- US_PTCR : (USART Offset: 0x120) ( /W 32) Transfer Control Register -------- */
#define US_PTCR_RXTEN_Pos                     _U_(0)                                               /**< (US_PTCR) Receiver Transfer Enable Position */
#define US_PTCR_RXTEN_Msk                     (_U_(0x1) << US_PTCR_RXTEN_Pos)                      /**< (US_PTCR) Receiver Transfer Enable Mask */
#define US_PTCR_RXTEN(value)                  (US_PTCR_RXTEN_Msk & ((value) << US_PTCR_RXTEN_Pos))
#define US_PTCR_RXTDIS_Pos                    _U_(1)                                               /**< (US_PTCR) Receiver Transfer Disable Position */
#define US_PTCR_RXTDIS_Msk                    (_U_(0x1) << US_PTCR_RXTDIS_Pos)                     /**< (US_PTCR) Receiver Transfer Disable Mask */
#define US_PTCR_RXTDIS(value)                 (US_PTCR_RXTDIS_Msk & ((value) << US_PTCR_RXTDIS_Pos))
#define US_PTCR_TXTEN_Pos                     _U_(8)                                               /**< (US_PTCR) Transmitter Transfer Enable Position */
#define US_PTCR_TXTEN_Msk                     (_U_(0x1) << US_PTCR_TXTEN_Pos)                      /**< (US_PTCR) Transmitter Transfer Enable Mask */
#define US_PTCR_TXTEN(value)                  (US_PTCR_TXTEN_Msk & ((value) << US_PTCR_TXTEN_Pos))
#define US_PTCR_TXTDIS_Pos                    _U_(9)                                               /**< (US_PTCR) Transmitter Transfer Disable Position */
#define US_PTCR_TXTDIS_Msk                    (_U_(0x1) << US_PTCR_TXTDIS_Pos)                     /**< (US_PTCR) Transmitter Transfer Disable Mask */
#define US_PTCR_TXTDIS(value)                 (US_PTCR_TXTDIS_Msk & ((value) << US_PTCR_TXTDIS_Pos))
#define US_PTCR_RXCBEN_Pos                    _U_(16)                                              /**< (US_PTCR) Receiver Circular Buffer Enable Position */
#define US_PTCR_RXCBEN_Msk                    (_U_(0x1) << US_PTCR_RXCBEN_Pos)                     /**< (US_PTCR) Receiver Circular Buffer Enable Mask */
#define US_PTCR_RXCBEN(value)                 (US_PTCR_RXCBEN_Msk & ((value) << US_PTCR_RXCBEN_Pos))
#define US_PTCR_RXCBDIS_Pos                   _U_(17)                                              /**< (US_PTCR) Receiver Circular Buffer Disable Position */
#define US_PTCR_RXCBDIS_Msk                   (_U_(0x1) << US_PTCR_RXCBDIS_Pos)                    /**< (US_PTCR) Receiver Circular Buffer Disable Mask */
#define US_PTCR_RXCBDIS(value)                (US_PTCR_RXCBDIS_Msk & ((value) << US_PTCR_RXCBDIS_Pos))
#define US_PTCR_TXCBEN_Pos                    _U_(18)                                              /**< (US_PTCR) Transmitter Circular Buffer Enable Position */
#define US_PTCR_TXCBEN_Msk                    (_U_(0x1) << US_PTCR_TXCBEN_Pos)                     /**< (US_PTCR) Transmitter Circular Buffer Enable Mask */
#define US_PTCR_TXCBEN(value)                 (US_PTCR_TXCBEN_Msk & ((value) << US_PTCR_TXCBEN_Pos))
#define US_PTCR_TXCBDIS_Pos                   _U_(19)                                              /**< (US_PTCR) Transmitter Circular Buffer Disable Position */
#define US_PTCR_TXCBDIS_Msk                   (_U_(0x1) << US_PTCR_TXCBDIS_Pos)                    /**< (US_PTCR) Transmitter Circular Buffer Disable Mask */
#define US_PTCR_TXCBDIS(value)                (US_PTCR_TXCBDIS_Msk & ((value) << US_PTCR_TXCBDIS_Pos))
#define US_PTCR_ERRCLR_Pos                    _U_(24)                                              /**< (US_PTCR) Transfer Bus Error Clear Position */
#define US_PTCR_ERRCLR_Msk                    (_U_(0x1) << US_PTCR_ERRCLR_Pos)                     /**< (US_PTCR) Transfer Bus Error Clear Mask */
#define US_PTCR_ERRCLR(value)                 (US_PTCR_ERRCLR_Msk & ((value) << US_PTCR_ERRCLR_Pos))
#define US_PTCR_Msk                           _U_(0x010F0303)                                      /**< (US_PTCR) Register Mask  */


/* -------- US_PTSR : (USART Offset: 0x124) ( R/ 32) Transfer Status Register -------- */
#define US_PTSR_RXTEN_Pos                     _U_(0)                                               /**< (US_PTSR) Receiver Transfer Enable Position */
#define US_PTSR_RXTEN_Msk                     (_U_(0x1) << US_PTSR_RXTEN_Pos)                      /**< (US_PTSR) Receiver Transfer Enable Mask */
#define US_PTSR_RXTEN(value)                  (US_PTSR_RXTEN_Msk & ((value) << US_PTSR_RXTEN_Pos))
#define US_PTSR_TXTEN_Pos                     _U_(8)                                               /**< (US_PTSR) Transmitter Transfer Enable Position */
#define US_PTSR_TXTEN_Msk                     (_U_(0x1) << US_PTSR_TXTEN_Pos)                      /**< (US_PTSR) Transmitter Transfer Enable Mask */
#define US_PTSR_TXTEN(value)                  (US_PTSR_TXTEN_Msk & ((value) << US_PTSR_TXTEN_Pos))
#define US_PTSR_RXCBEN_Pos                    _U_(16)                                              /**< (US_PTSR) Receiver Circular Buffer Enable Position */
#define US_PTSR_RXCBEN_Msk                    (_U_(0x1) << US_PTSR_RXCBEN_Pos)                     /**< (US_PTSR) Receiver Circular Buffer Enable Mask */
#define US_PTSR_RXCBEN(value)                 (US_PTSR_RXCBEN_Msk & ((value) << US_PTSR_RXCBEN_Pos))
#define US_PTSR_TXCBEN_Pos                    _U_(18)                                              /**< (US_PTSR) Transmitter Circular Buffer Enable Position */
#define US_PTSR_TXCBEN_Msk                    (_U_(0x1) << US_PTSR_TXCBEN_Pos)                     /**< (US_PTSR) Transmitter Circular Buffer Enable Mask */
#define US_PTSR_TXCBEN(value)                 (US_PTSR_TXCBEN_Msk & ((value) << US_PTSR_TXCBEN_Pos))
#define US_PTSR_ERR_Pos                       _U_(24)                                              /**< (US_PTSR) Transfer Bus Error Position */
#define US_PTSR_ERR_Msk                       (_U_(0x1) << US_PTSR_ERR_Pos)                        /**< (US_PTSR) Transfer Bus Error Mask */
#define US_PTSR_ERR(value)                    (US_PTSR_ERR_Msk & ((value) << US_PTSR_ERR_Pos))    
#define US_PTSR_Msk                           _U_(0x01050101)                                      /**< (US_PTSR) Register Mask  */


/** \brief USART register offsets definitions */
#define US_CR_REG_OFST                 (0x00)              /**< (US_CR) Control Register Offset */
#define US_MR_REG_OFST                 (0x04)              /**< (US_MR) Mode Register Offset */
#define US_IER_REG_OFST                (0x08)              /**< (US_IER) Interrupt Enable Register Offset */
#define US_IDR_REG_OFST                (0x0C)              /**< (US_IDR) Interrupt Disable Register Offset */
#define US_IMR_REG_OFST                (0x10)              /**< (US_IMR) Interrupt Mask Register Offset */
#define US_CSR_REG_OFST                (0x14)              /**< (US_CSR) Channel Status Register Offset */
#define US_RHR_REG_OFST                (0x18)              /**< (US_RHR) Receive Holding Register Offset */
#define US_THR_REG_OFST                (0x1C)              /**< (US_THR) Transmit Holding Register Offset */
#define US_BRGR_REG_OFST               (0x20)              /**< (US_BRGR) Baud Rate Generator Register Offset */
#define US_RTOR_REG_OFST               (0x24)              /**< (US_RTOR) Receiver Time-out Register Offset */
#define US_TTGR_REG_OFST               (0x28)              /**< (US_TTGR) Transmitter Timeguard Register Offset */
#define US_NER_REG_OFST                (0x44)              /**< (US_NER) Number of Errors Register Offset */
#define US_WPMR_REG_OFST               (0xE4)              /**< (US_WPMR) Write Protection Mode Register Offset */
#define US_WPSR_REG_OFST               (0xE8)              /**< (US_WPSR) Write Protection Status Register Offset */
#define US_RPR_REG_OFST                (0x100)             /**< (US_RPR) Receive Pointer Register Offset */
#define US_RCR_REG_OFST                (0x104)             /**< (US_RCR) Receive Counter Register Offset */
#define US_TPR_REG_OFST                (0x108)             /**< (US_TPR) Transmit Pointer Register Offset */
#define US_TCR_REG_OFST                (0x10C)             /**< (US_TCR) Transmit Counter Register Offset */
#define US_RNPR_REG_OFST               (0x110)             /**< (US_RNPR) Receive Next Pointer Register Offset */
#define US_RNCR_REG_OFST               (0x114)             /**< (US_RNCR) Receive Next Counter Register Offset */
#define US_TNPR_REG_OFST               (0x118)             /**< (US_TNPR) Transmit Next Pointer Register Offset */
#define US_TNCR_REG_OFST               (0x11C)             /**< (US_TNCR) Transmit Next Counter Register Offset */
#define US_PTCR_REG_OFST               (0x120)             /**< (US_PTCR) Transfer Control Register Offset */
#define US_PTSR_REG_OFST               (0x124)             /**< (US_PTSR) Transfer Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief USART register API structure */
typedef struct
{
  __O   uint32_t                       US_CR;              /**< Offset: 0x00 ( /W  32) Control Register */
  __IO  uint32_t                       US_MR;              /**< Offset: 0x04 (R/W  32) Mode Register */
  __O   uint32_t                       US_IER;             /**< Offset: 0x08 ( /W  32) Interrupt Enable Register */
  __O   uint32_t                       US_IDR;             /**< Offset: 0x0C ( /W  32) Interrupt Disable Register */
  __I   uint32_t                       US_IMR;             /**< Offset: 0x10 (R/   32) Interrupt Mask Register */
  __I   uint32_t                       US_CSR;             /**< Offset: 0x14 (R/   32) Channel Status Register */
  __I   uint32_t                       US_RHR;             /**< Offset: 0x18 (R/   32) Receive Holding Register */
  __O   uint32_t                       US_THR;             /**< Offset: 0x1C ( /W  32) Transmit Holding Register */
  __IO  uint32_t                       US_BRGR;            /**< Offset: 0x20 (R/W  32) Baud Rate Generator Register */
  __IO  uint32_t                       US_RTOR;            /**< Offset: 0x24 (R/W  32) Receiver Time-out Register */
  __IO  uint32_t                       US_TTGR;            /**< Offset: 0x28 (R/W  32) Transmitter Timeguard Register */
  __I   uint8_t                        Reserved1[0x18];
  __I   uint32_t                       US_NER;             /**< Offset: 0x44 (R/   32) Number of Errors Register */
  __I   uint8_t                        Reserved2[0x9C];
  __IO  uint32_t                       US_WPMR;            /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I   uint32_t                       US_WPSR;            /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I   uint8_t                        Reserved3[0x14];
  __IO  uint32_t                       US_RPR;             /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO  uint32_t                       US_RCR;             /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO  uint32_t                       US_TPR;             /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO  uint32_t                       US_TCR;             /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO  uint32_t                       US_RNPR;            /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO  uint32_t                       US_RNCR;            /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO  uint32_t                       US_TNPR;            /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO  uint32_t                       US_TNCR;            /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O   uint32_t                       US_PTCR;            /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I   uint32_t                       US_PTSR;            /**< Offset: 0x124 (R/   32) Transfer Status Register */
} usart_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG54_USART_COMPONENT_H_ */
