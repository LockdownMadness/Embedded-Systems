#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2

// Objects
DigitalOut grn(TRAF_GRN1_PIN,1);  // with break point it shows zero values for everything then assigned mask etc
DigitalOut yel(TRAF_YEL1_PIN,1);  // same as above but with different mask number
DigitalOut red(TRAF_RED1_PIN,1);

DigitalOut reeeeed(TRAF_RED1_PIN,0);         
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

int main()
{
    while (true) {
        red = 0;
        yel = 1;
        grn = 1;
        wait_us(500000);
        red = 1;
        yel = 0;
        grn = 0;  
        wait_us(500000);    
    }
}

// not sure about question 5, confirm these are compatible with PUSH_PULL outputs <<<<<<<<<
// I would say yes due to using the same DigitalOut????