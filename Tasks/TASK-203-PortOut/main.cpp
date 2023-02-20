#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2



#define LEDMASK1 0b0000000001001100 //binary corisponds to the pin number, so 2nd/3rd and 6th pins are 1's!!!!
#define LEDMASK2 0b0100000010000001   //with this is toggles off TRAF_RED!_PIN - PC_PC2 as its in 2nd slot

// Objects
//BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN, PB_0, PB_7, PB_14);
PortOut leds1(PortC, LEDMASK1);
PortOut leds2(PortB, LEDMASK2);

int main()
{
    while (true) {
        //leds1 = 0;   //Binary 000
        //leds2 = 0;

        leds1 = leds1^LEDMASK1;
        leds2 = leds2^LEDMASK2;
        wait_us(500000);
        //leds1 = 0xFF;
        //leds2 = 0xFF;   //Binary 11111111
        //wait_us(500000);    
    }
}




