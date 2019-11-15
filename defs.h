/* definitions / defines file */
#define DEFS_H

#define SW_VERSION		13   /* i.e. major.minor software version nbr. */

#ifndef NULL
#define NULL  0
#endif
        
// logix ...
#define TRUE	1
#define FALSE	0 
#define DUMMY	0

#define GREEN 1
#define RED 2

#define wdogtrig()			#asm("wdr") // call often if Watchdog timer enabled

#define CR				0x0D
#define LF				0x0A  

//#define LED1 PORTB.0        // PORTx is used for output
//#define SW1 PIND.5          // PINx is used for input
//#define TESTP PORTD.4       // test bit durations
#define LED1A PORTA.0
#define LED1B PORTC.0
#define LED2A PORTA.1
#define LED2B PORTC.1
#define LED3A PORTA.2
#define LED3B PORTC.2
#define LED4A PORTA.3
#define LED4B PORTC.3
#define LED5A PORTA.4
#define LED5B PORTC.4
#define LED6A PORTA.5
#define LED6B PORTC.5
#define LED7A PORTA.6
#define LED7B PORTC.6
#define LED8A PORTA.7
#define LED8B PORTC.7
#define LED9A PORTB.2
#define LED9B PORTB.3
#define SW_LEFT PIND.2
#define SW_SELECT PIND.3
#define SW_RIGHT PIND.4
#define LED_TEST PORTD.6
#define SW_TEST PIND.5
#include "funct.h"

