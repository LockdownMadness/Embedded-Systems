#include "mbed.h"
#include "mbed_wait_api.h"
#include "uop_msb.h"
using namespace uop_msb;

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2
#define TRAF_RED2_PIN PC_7
#define STEREO_L_AN PC_0


// Objects
// DigitalOut grn(TRAF_GRN1_PIN);
// DigitalOut yel(TRAF_YEL1_PIN);
// DigitalOut red(TRAF_RED1_PIN,1);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);
LCD_16X2_DISPLAY lcd;

int main()
{
    //while (true) {
        //leds = 0;   //Binary 000
        //wait_us(500000);
        //leds = 7;   //Binary 111
        //wait_us(500000);    
    //}

    while (true) {

        
        volatile int n;
        for (n=0; n<=31; n = n+1) {
            printf("n=%d\n", n);
            lcd.cls();
            //lcd.printf("Binary Number = ",d); // Ask Nick about how to display an INT in the LCD display. I can only see char am i doing something wrong??
            //At least it works in the console
            leds = n;
            wait_us(2000000);
        }

        //ASK FOR HELP IN THIS ONE FOR TASK202 6. ADDING THE THREE PINS PB_0 ETC COULDNT FIND THEM ON THE SCMATIC
    }
}


