/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  1.1.0
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "./port.h"

//get/set IO_PA2 aliases
#define IO_PA2_SetHigh() do { PORTA_OUTSET = 0x4; } while(0)
#define IO_PA2_SetLow() do { PORTA_OUTCLR = 0x4; } while(0)
#define IO_PA2_Toggle() do { PORTA_OUTTGL = 0x4; } while(0)
#define IO_PA2_GetValue() (VPORTA.IN & (0x1 << 2))
#define IO_PA2_SetDigitalInput() do { PORTA_DIRCLR = 0x4; } while(0)
#define IO_PA2_SetDigitalOutput() do { PORTA_DIRSET = 0x4; } while(0)
#define IO_PA2_SetPullUp() do { PORTA_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA2_ResetPullUp() do { PORTA_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA2_SetInverted() do { PORTA_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA2_ResetInverted() do { PORTA_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA2_DisableInterruptOnChange() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA2_EnableInterruptForBothEdges() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA2_EnableInterruptForRisingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA2_EnableInterruptForFallingEdge() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA2_DisableDigitalInputBuffer() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA2_EnableInterruptForLowLevelSensing() do { PORTA.PIN2CTRL = (PORTA.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA2_SetInterruptHandler IO_PA2_SetInterruptHandler

//get/set IO_PA1 aliases
#define IO_PA1_SetHigh() do { PORTA_OUTSET = 0x2; } while(0)
#define IO_PA1_SetLow() do { PORTA_OUTCLR = 0x2; } while(0)
#define IO_PA1_Toggle() do { PORTA_OUTTGL = 0x2; } while(0)
#define IO_PA1_GetValue() (VPORTA.IN & (0x1 << 1))
#define IO_PA1_SetDigitalInput() do { PORTA_DIRCLR = 0x2; } while(0)
#define IO_PA1_SetDigitalOutput() do { PORTA_DIRSET = 0x2; } while(0)
#define IO_PA1_SetPullUp() do { PORTA_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA1_ResetPullUp() do { PORTA_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA1_SetInverted() do { PORTA_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA1_ResetInverted() do { PORTA_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA1_DisableInterruptOnChange() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA1_EnableInterruptForBothEdges() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA1_EnableInterruptForRisingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA1_EnableInterruptForFallingEdge() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA1_DisableDigitalInputBuffer() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA1_EnableInterruptForLowLevelSensing() do { PORTA.PIN1CTRL = (PORTA.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA1_SetInterruptHandler IO_PA1_SetInterruptHandler

//get/set IO_PA4 aliases
#define IO_PA4_SetHigh() do { PORTA_OUTSET = 0x10; } while(0)
#define IO_PA4_SetLow() do { PORTA_OUTCLR = 0x10; } while(0)
#define IO_PA4_Toggle() do { PORTA_OUTTGL = 0x10; } while(0)
#define IO_PA4_GetValue() (VPORTA.IN & (0x1 << 4))
#define IO_PA4_SetDigitalInput() do { PORTA_DIRCLR = 0x10; } while(0)
#define IO_PA4_SetDigitalOutput() do { PORTA_DIRSET = 0x10; } while(0)
#define IO_PA4_SetPullUp() do { PORTA_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA4_ResetPullUp() do { PORTA_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA4_SetInverted() do { PORTA_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA4_ResetInverted() do { PORTA_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA4_DisableInterruptOnChange() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA4_EnableInterruptForBothEdges() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA4_EnableInterruptForRisingEdge() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA4_EnableInterruptForFallingEdge() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA4_DisableDigitalInputBuffer() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA4_EnableInterruptForLowLevelSensing() do { PORTA.PIN4CTRL = (PORTA.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA4_SetInterruptHandler IO_PA4_SetInterruptHandler

//get/set IO_PA5 aliases
#define IO_PA5_SetHigh() do { PORTA_OUTSET = 0x20; } while(0)
#define IO_PA5_SetLow() do { PORTA_OUTCLR = 0x20; } while(0)
#define IO_PA5_Toggle() do { PORTA_OUTTGL = 0x20; } while(0)
#define IO_PA5_GetValue() (VPORTA.IN & (0x1 << 5))
#define IO_PA5_SetDigitalInput() do { PORTA_DIRCLR = 0x20; } while(0)
#define IO_PA5_SetDigitalOutput() do { PORTA_DIRSET = 0x20; } while(0)
#define IO_PA5_SetPullUp() do { PORTA_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA5_ResetPullUp() do { PORTA_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA5_SetInverted() do { PORTA_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA5_ResetInverted() do { PORTA_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA5_DisableInterruptOnChange() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA5_EnableInterruptForBothEdges() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA5_EnableInterruptForRisingEdge() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA5_EnableInterruptForFallingEdge() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA5_DisableDigitalInputBuffer() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA5_EnableInterruptForLowLevelSensing() do { PORTA.PIN5CTRL = (PORTA.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA5_SetInterruptHandler IO_PA5_SetInterruptHandler

//get/set IO_PA6 aliases
#define IO_PA6_SetHigh() do { PORTA_OUTSET = 0x40; } while(0)
#define IO_PA6_SetLow() do { PORTA_OUTCLR = 0x40; } while(0)
#define IO_PA6_Toggle() do { PORTA_OUTTGL = 0x40; } while(0)
#define IO_PA6_GetValue() (VPORTA.IN & (0x1 << 6))
#define IO_PA6_SetDigitalInput() do { PORTA_DIRCLR = 0x40; } while(0)
#define IO_PA6_SetDigitalOutput() do { PORTA_DIRSET = 0x40; } while(0)
#define IO_PA6_SetPullUp() do { PORTA_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA6_ResetPullUp() do { PORTA_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA6_SetInverted() do { PORTA_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA6_ResetInverted() do { PORTA_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA6_DisableInterruptOnChange() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA6_EnableInterruptForBothEdges() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA6_EnableInterruptForRisingEdge() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA6_EnableInterruptForFallingEdge() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA6_DisableDigitalInputBuffer() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA6_EnableInterruptForLowLevelSensing() do { PORTA.PIN6CTRL = (PORTA.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA6_SetInterruptHandler IO_PA6_SetInterruptHandler

//get/set IO_PA7 aliases
#define IO_PA7_SetHigh() do { PORTA_OUTSET = 0x80; } while(0)
#define IO_PA7_SetLow() do { PORTA_OUTCLR = 0x80; } while(0)
#define IO_PA7_Toggle() do { PORTA_OUTTGL = 0x80; } while(0)
#define IO_PA7_GetValue() (VPORTA.IN & (0x1 << 7))
#define IO_PA7_SetDigitalInput() do { PORTA_DIRCLR = 0x80; } while(0)
#define IO_PA7_SetDigitalOutput() do { PORTA_DIRSET = 0x80; } while(0)
#define IO_PA7_SetPullUp() do { PORTA_PIN7CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PA7_ResetPullUp() do { PORTA_PIN7CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PA7_SetInverted() do { PORTA_PIN7CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PA7_ResetInverted() do { PORTA_PIN7CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PA7_DisableInterruptOnChange() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PA7_EnableInterruptForBothEdges() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PA7_EnableInterruptForRisingEdge() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PA7_EnableInterruptForFallingEdge() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PA7_DisableDigitalInputBuffer() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PA7_EnableInterruptForLowLevelSensing() do { PORTA.PIN7CTRL = (PORTA.PIN7CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA7_SetInterruptHandler IO_PA7_SetInterruptHandler

//get/set IO_PB0 aliases
#define IO_PB0_SetHigh() do { PORTB_OUTSET = 0x1; } while(0)
#define IO_PB0_SetLow() do { PORTB_OUTCLR = 0x1; } while(0)
#define IO_PB0_Toggle() do { PORTB_OUTTGL = 0x1; } while(0)
#define IO_PB0_GetValue() (VPORTB.IN & (0x1 << 0))
#define IO_PB0_SetDigitalInput() do { PORTB_DIRCLR = 0x1; } while(0)
#define IO_PB0_SetDigitalOutput() do { PORTB_DIRSET = 0x1; } while(0)
#define IO_PB0_SetPullUp() do { PORTB_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define IO_PB0_ResetPullUp() do { PORTB_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define IO_PB0_SetInverted() do { PORTB_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define IO_PB0_ResetInverted() do { PORTB_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define IO_PB0_DisableInterruptOnChange() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define IO_PB0_EnableInterruptForBothEdges() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define IO_PB0_EnableInterruptForRisingEdge() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define IO_PB0_EnableInterruptForFallingEdge() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define IO_PB0_DisableDigitalInputBuffer() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define IO_PB0_EnableInterruptForLowLevelSensing() do { PORTB.PIN0CTRL = (PORTB.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PB0_SetInterruptHandler IO_PB0_SetInterruptHandler

//get/set LED_B3 aliases
#define LED_B3_SetHigh() do { PORTA_OUTSET = 0x8; } while(0)
#define LED_B3_SetLow() do { PORTA_OUTCLR = 0x8; } while(0)
#define LED_B3_Toggle() do { PORTA_OUTTGL = 0x8; } while(0)
#define LED_B3_GetValue() (VPORTA.IN & (0x1 << 3))
#define LED_B3_SetDigitalInput() do { PORTA_DIRCLR = 0x8; } while(0)
#define LED_B3_SetDigitalOutput() do { PORTA_DIRSET = 0x8; } while(0)
#define LED_B3_SetPullUp() do { PORTA_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_B3_ResetPullUp() do { PORTA_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_B3_SetInverted() do { PORTA_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_B3_ResetInverted() do { PORTA_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_B3_DisableInterruptOnChange() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_B3_EnableInterruptForBothEdges() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_B3_EnableInterruptForRisingEdge() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_B3_EnableInterruptForFallingEdge() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_B3_DisableDigitalInputBuffer() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_B3_EnableInterruptForLowLevelSensing() do { PORTA.PIN3CTRL = (PORTA.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PA3_SetInterruptHandler LED_B3_SetInterruptHandler

//get/set LED_Power aliases
#define LED_Power_SetHigh() do { PORTB_OUTSET = 0x20; } while(0)
#define LED_Power_SetLow() do { PORTB_OUTCLR = 0x20; } while(0)
#define LED_Power_Toggle() do { PORTB_OUTTGL = 0x20; } while(0)
#define LED_Power_GetValue() (VPORTB.IN & (0x1 << 5))
#define LED_Power_SetDigitalInput() do { PORTB_DIRCLR = 0x20; } while(0)
#define LED_Power_SetDigitalOutput() do { PORTB_DIRSET = 0x20; } while(0)
#define LED_Power_SetPullUp() do { PORTB_PIN5CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_Power_ResetPullUp() do { PORTB_PIN5CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_Power_SetInverted() do { PORTB_PIN5CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_Power_ResetInverted() do { PORTB_PIN5CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_Power_DisableInterruptOnChange() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_Power_EnableInterruptForBothEdges() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_Power_EnableInterruptForRisingEdge() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_Power_EnableInterruptForFallingEdge() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_Power_DisableDigitalInputBuffer() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_Power_EnableInterruptForLowLevelSensing() do { PORTB.PIN5CTRL = (PORTB.PIN5CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PB5_SetInterruptHandler LED_Power_SetInterruptHandler

//get/set LED_B1 aliases
#define LED_B1_SetHigh() do { PORTB_OUTSET = 0x40; } while(0)
#define LED_B1_SetLow() do { PORTB_OUTCLR = 0x40; } while(0)
#define LED_B1_Toggle() do { PORTB_OUTTGL = 0x40; } while(0)
#define LED_B1_GetValue() (VPORTB.IN & (0x1 << 6))
#define LED_B1_SetDigitalInput() do { PORTB_DIRCLR = 0x40; } while(0)
#define LED_B1_SetDigitalOutput() do { PORTB_DIRSET = 0x40; } while(0)
#define LED_B1_SetPullUp() do { PORTB_PIN6CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_B1_ResetPullUp() do { PORTB_PIN6CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_B1_SetInverted() do { PORTB_PIN6CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_B1_ResetInverted() do { PORTB_PIN6CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_B1_DisableInterruptOnChange() do { PORTB.PIN6CTRL = (PORTB.PIN6CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_B1_EnableInterruptForBothEdges() do { PORTB.PIN6CTRL = (PORTB.PIN6CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_B1_EnableInterruptForRisingEdge() do { PORTB.PIN6CTRL = (PORTB.PIN6CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_B1_EnableInterruptForFallingEdge() do { PORTB.PIN6CTRL = (PORTB.PIN6CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_B1_DisableDigitalInputBuffer() do { PORTB.PIN6CTRL = (PORTB.PIN6CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_B1_EnableInterruptForLowLevelSensing() do { PORTB.PIN6CTRL = (PORTB.PIN6CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PB6_SetInterruptHandler LED_B1_SetInterruptHandler

//get/set LED_B2 aliases
#define LED_B2_SetHigh() do { PORTB_OUTSET = 0x80; } while(0)
#define LED_B2_SetLow() do { PORTB_OUTCLR = 0x80; } while(0)
#define LED_B2_Toggle() do { PORTB_OUTTGL = 0x80; } while(0)
#define LED_B2_GetValue() (VPORTB.IN & (0x1 << 7))
#define LED_B2_SetDigitalInput() do { PORTB_DIRCLR = 0x80; } while(0)
#define LED_B2_SetDigitalOutput() do { PORTB_DIRSET = 0x80; } while(0)
#define LED_B2_SetPullUp() do { PORTB_PIN7CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_B2_ResetPullUp() do { PORTB_PIN7CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_B2_SetInverted() do { PORTB_PIN7CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_B2_ResetInverted() do { PORTB_PIN7CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_B2_DisableInterruptOnChange() do { PORTB.PIN7CTRL = (PORTB.PIN7CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_B2_EnableInterruptForBothEdges() do { PORTB.PIN7CTRL = (PORTB.PIN7CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_B2_EnableInterruptForRisingEdge() do { PORTB.PIN7CTRL = (PORTB.PIN7CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_B2_EnableInterruptForFallingEdge() do { PORTB.PIN7CTRL = (PORTB.PIN7CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_B2_DisableDigitalInputBuffer() do { PORTB.PIN7CTRL = (PORTB.PIN7CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_B2_EnableInterruptForLowLevelSensing() do { PORTB.PIN7CTRL = (PORTB.PIN7CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PB7_SetInterruptHandler LED_B2_SetInterruptHandler

//get/set LED_B4 aliases
#define LED_B4_SetHigh() do { PORTC_OUTSET = 0x10; } while(0)
#define LED_B4_SetLow() do { PORTC_OUTCLR = 0x10; } while(0)
#define LED_B4_Toggle() do { PORTC_OUTTGL = 0x10; } while(0)
#define LED_B4_GetValue() (VPORTC.IN & (0x1 << 4))
#define LED_B4_SetDigitalInput() do { PORTC_DIRCLR = 0x10; } while(0)
#define LED_B4_SetDigitalOutput() do { PORTC_DIRSET = 0x10; } while(0)
#define LED_B4_SetPullUp() do { PORTC_PIN4CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED_B4_ResetPullUp() do { PORTC_PIN4CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED_B4_SetInverted() do { PORTC_PIN4CTRL  |= PORT_INVEN_bm; } while(0)
#define LED_B4_ResetInverted() do { PORTC_PIN4CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED_B4_DisableInterruptOnChange() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED_B4_EnableInterruptForBothEdges() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED_B4_EnableInterruptForRisingEdge() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED_B4_EnableInterruptForFallingEdge() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED_B4_DisableDigitalInputBuffer() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED_B4_EnableInterruptForLowLevelSensing() do { PORTC.PIN4CTRL = (PORTC.PIN4CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PC4_SetInterruptHandler LED_B4_SetInterruptHandler

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize();

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for IO_PA2 pin. 
 *        This is a predefined interrupt handler to be used together with the IO_PA2_SetInterruptHandler() method.
 *        This handler is called every time the IO_PA2 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void IO_PA2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for IO_PA2 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for IO_PA2 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void IO_PA2_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for IO_PA1 pin. 
 *        This is a predefined interrupt handler to be used together with the IO_PA1_SetInterruptHandler() method.
 *        This handler is called every time the IO_PA1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void IO_PA1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for IO_PA1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for IO_PA1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void IO_PA1_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for IO_PA4 pin. 
 *        This is a predefined interrupt handler to be used together with the IO_PA4_SetInterruptHandler() method.
 *        This handler is called every time the IO_PA4 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void IO_PA4_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for IO_PA4 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for IO_PA4 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void IO_PA4_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for IO_PA5 pin. 
 *        This is a predefined interrupt handler to be used together with the IO_PA5_SetInterruptHandler() method.
 *        This handler is called every time the IO_PA5 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void IO_PA5_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for IO_PA5 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for IO_PA5 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void IO_PA5_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for IO_PA6 pin. 
 *        This is a predefined interrupt handler to be used together with the IO_PA6_SetInterruptHandler() method.
 *        This handler is called every time the IO_PA6 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void IO_PA6_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for IO_PA6 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for IO_PA6 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void IO_PA6_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for IO_PA7 pin. 
 *        This is a predefined interrupt handler to be used together with the IO_PA7_SetInterruptHandler() method.
 *        This handler is called every time the IO_PA7 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void IO_PA7_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for IO_PA7 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for IO_PA7 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void IO_PA7_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for IO_PB0 pin. 
 *        This is a predefined interrupt handler to be used together with the IO_PB0_SetInterruptHandler() method.
 *        This handler is called every time the IO_PB0 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void IO_PB0_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for IO_PB0 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for IO_PB0 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void IO_PB0_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LED_B3 pin. 
 *        This is a predefined interrupt handler to be used together with the LED_B3_SetInterruptHandler() method.
 *        This handler is called every time the LED_B3 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void LED_B3_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LED_B3 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for LED_B3 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void LED_B3_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LED_Power pin. 
 *        This is a predefined interrupt handler to be used together with the LED_Power_SetInterruptHandler() method.
 *        This handler is called every time the LED_Power ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void LED_Power_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LED_Power pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for LED_Power at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void LED_Power_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LED_B1 pin. 
 *        This is a predefined interrupt handler to be used together with the LED_B1_SetInterruptHandler() method.
 *        This handler is called every time the LED_B1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void LED_B1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LED_B1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for LED_B1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void LED_B1_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LED_B2 pin. 
 *        This is a predefined interrupt handler to be used together with the LED_B2_SetInterruptHandler() method.
 *        This handler is called every time the LED_B2 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void LED_B2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LED_B2 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for LED_B2 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void LED_B2_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LED_B4 pin. 
 *        This is a predefined interrupt handler to be used together with the LED_B4_SetInterruptHandler() method.
 *        This handler is called every time the LED_B4 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void LED_B4_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LED_B4 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for LED_B4 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void LED_B4_SetInterruptHandler(void (* interruptHandler)(void)) ; 
#endif /* PINS_H_INCLUDED */
