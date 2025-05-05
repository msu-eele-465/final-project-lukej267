#include <msp430.h>
#include <stdbool.h>

int main(void)
{
    
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mdoe to activate
    
    P1DIR |= BIT0;                          // Initialize P1.0 LED1 as output/off
    P1OUT &= ~BIT0;
    
    // Main loop
    while(1){}

    return 0;
}
