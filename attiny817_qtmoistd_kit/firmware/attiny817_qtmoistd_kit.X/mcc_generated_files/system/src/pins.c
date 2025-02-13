/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 1.1.0
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

#include "../pins.h"

static void (*IO_PA2_InterruptHandler)(void);
static void (*IO_PA1_InterruptHandler)(void);
static void (*IO_PA4_InterruptHandler)(void);
static void (*IO_PA5_InterruptHandler)(void);
static void (*IO_PA6_InterruptHandler)(void);
static void (*IO_PA7_InterruptHandler)(void);
static void (*IO_PB0_InterruptHandler)(void);
static void (*LED_B3_InterruptHandler)(void);
static void (*LED_Power_InterruptHandler)(void);
static void (*LED_B1_InterruptHandler)(void);
static void (*LED_B2_InterruptHandler)(void);
static void (*LED_B4_InterruptHandler)(void);

void PIN_MANAGER_Initialize()
{

  /* OUT Registers Initialization */
    PORTA.OUT = 0x2;
    PORTB.OUT = 0x0;
    PORTC.OUT = 0x0;

  /* DIR Registers Initialization */
    PORTA.DIR = 0xA;
    PORTB.DIR = 0xE0;
    PORTC.DIR = 0x10;

  /* PINxCTRL registers Initialization */
    PORTA.PIN0CTRL = 0x0;
    PORTA.PIN1CTRL = 0x0;
    PORTA.PIN2CTRL = 0x0;
    PORTA.PIN3CTRL = 0x0;
    PORTA.PIN4CTRL = 0x4;
    PORTA.PIN5CTRL = 0x4;
    PORTA.PIN6CTRL = 0x4;
    PORTA.PIN7CTRL = 0x4;
    PORTB.PIN0CTRL = 0x4;
    PORTB.PIN1CTRL = 0x0;
    PORTB.PIN2CTRL = 0x0;
    PORTB.PIN3CTRL = 0x0;
    PORTB.PIN4CTRL = 0x0;
    PORTB.PIN5CTRL = 0x0;
    PORTB.PIN6CTRL = 0x0;
    PORTB.PIN7CTRL = 0x0;
    PORTC.PIN0CTRL = 0x0;
    PORTC.PIN1CTRL = 0x0;
    PORTC.PIN2CTRL = 0x0;
    PORTC.PIN3CTRL = 0x0;
    PORTC.PIN4CTRL = 0x0;
    PORTC.PIN5CTRL = 0x0;
    PORTC.PIN6CTRL = 0x0;
    PORTC.PIN7CTRL = 0x0;

  /* PORTMUX Initialization */
    PORTMUX.CTRLA = 0x0;
    PORTMUX.CTRLB = 0x1;
    PORTMUX.CTRLC = 0x0;
    PORTMUX.CTRLD = 0x0;

  // register default ISC callback functions at runtime; use these methods to register a custom function
    IO_PA2_SetInterruptHandler(IO_PA2_DefaultInterruptHandler);
    IO_PA1_SetInterruptHandler(IO_PA1_DefaultInterruptHandler);
    IO_PA4_SetInterruptHandler(IO_PA4_DefaultInterruptHandler);
    IO_PA5_SetInterruptHandler(IO_PA5_DefaultInterruptHandler);
    IO_PA6_SetInterruptHandler(IO_PA6_DefaultInterruptHandler);
    IO_PA7_SetInterruptHandler(IO_PA7_DefaultInterruptHandler);
    IO_PB0_SetInterruptHandler(IO_PB0_DefaultInterruptHandler);
    LED_B3_SetInterruptHandler(LED_B3_DefaultInterruptHandler);
    LED_Power_SetInterruptHandler(LED_Power_DefaultInterruptHandler);
    LED_B1_SetInterruptHandler(LED_B1_DefaultInterruptHandler);
    LED_B2_SetInterruptHandler(LED_B2_DefaultInterruptHandler);
    LED_B4_SetInterruptHandler(LED_B4_DefaultInterruptHandler);
}

/**
  Allows selecting an interrupt handler for IO_PA2 at application runtime
*/
void IO_PA2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    IO_PA2_InterruptHandler = interruptHandler;
}

void IO_PA2_DefaultInterruptHandler(void)
{
    // add your IO_PA2 interrupt custom code
    // or set custom function using IO_PA2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for IO_PA1 at application runtime
*/
void IO_PA1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    IO_PA1_InterruptHandler = interruptHandler;
}

void IO_PA1_DefaultInterruptHandler(void)
{
    // add your IO_PA1 interrupt custom code
    // or set custom function using IO_PA1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for IO_PA4 at application runtime
*/
void IO_PA4_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    IO_PA4_InterruptHandler = interruptHandler;
}

void IO_PA4_DefaultInterruptHandler(void)
{
    // add your IO_PA4 interrupt custom code
    // or set custom function using IO_PA4_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for IO_PA5 at application runtime
*/
void IO_PA5_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    IO_PA5_InterruptHandler = interruptHandler;
}

void IO_PA5_DefaultInterruptHandler(void)
{
    // add your IO_PA5 interrupt custom code
    // or set custom function using IO_PA5_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for IO_PA6 at application runtime
*/
void IO_PA6_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    IO_PA6_InterruptHandler = interruptHandler;
}

void IO_PA6_DefaultInterruptHandler(void)
{
    // add your IO_PA6 interrupt custom code
    // or set custom function using IO_PA6_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for IO_PA7 at application runtime
*/
void IO_PA7_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    IO_PA7_InterruptHandler = interruptHandler;
}

void IO_PA7_DefaultInterruptHandler(void)
{
    // add your IO_PA7 interrupt custom code
    // or set custom function using IO_PA7_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for IO_PB0 at application runtime
*/
void IO_PB0_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    IO_PB0_InterruptHandler = interruptHandler;
}

void IO_PB0_DefaultInterruptHandler(void)
{
    // add your IO_PB0 interrupt custom code
    // or set custom function using IO_PB0_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for LED_B3 at application runtime
*/
void LED_B3_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    LED_B3_InterruptHandler = interruptHandler;
}

void LED_B3_DefaultInterruptHandler(void)
{
    // add your LED_B3 interrupt custom code
    // or set custom function using LED_B3_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for LED_Power at application runtime
*/
void LED_Power_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    LED_Power_InterruptHandler = interruptHandler;
}

void LED_Power_DefaultInterruptHandler(void)
{
    // add your LED_Power interrupt custom code
    // or set custom function using LED_Power_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for LED_B1 at application runtime
*/
void LED_B1_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    LED_B1_InterruptHandler = interruptHandler;
}

void LED_B1_DefaultInterruptHandler(void)
{
    // add your LED_B1 interrupt custom code
    // or set custom function using LED_B1_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for LED_B2 at application runtime
*/
void LED_B2_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    LED_B2_InterruptHandler = interruptHandler;
}

void LED_B2_DefaultInterruptHandler(void)
{
    // add your LED_B2 interrupt custom code
    // or set custom function using LED_B2_SetInterruptHandler()
}
/**
  Allows selecting an interrupt handler for LED_B4 at application runtime
*/
void LED_B4_SetInterruptHandler(void (* interruptHandler)(void)) 
{
    LED_B4_InterruptHandler = interruptHandler;
}

void LED_B4_DefaultInterruptHandler(void)
{
    // add your LED_B4 interrupt custom code
    // or set custom function using LED_B4_SetInterruptHandler()
}
ISR(PORTA_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTA.INTFLAGS & PORT_INT2_bm)
    {
       IO_PA2_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT1_bm)
    {
       IO_PA1_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT4_bm)
    {
       IO_PA4_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT5_bm)
    {
       IO_PA5_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT6_bm)
    {
       IO_PA6_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT7_bm)
    {
       IO_PA7_InterruptHandler(); 
    }
    if(VPORTA.INTFLAGS & PORT_INT3_bm)
    {
       LED_B3_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTA.INTFLAGS = 0xff;
}

ISR(PORTB_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTB.INTFLAGS & PORT_INT0_bm)
    {
       IO_PB0_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT5_bm)
    {
       LED_Power_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT6_bm)
    {
       LED_B1_InterruptHandler(); 
    }
    if(VPORTB.INTFLAGS & PORT_INT7_bm)
    {
       LED_B2_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTB.INTFLAGS = 0xff;
}

ISR(PORTC_PORT_vect)
{ 
    // Call the interrupt handler for the callback registered at runtime
    if(VPORTC.INTFLAGS & PORT_INT4_bm)
    {
       LED_B4_InterruptHandler(); 
    }
    /* Clear interrupt flags */
    VPORTC.INTFLAGS = 0xff;
}

/**
 End of File
*/