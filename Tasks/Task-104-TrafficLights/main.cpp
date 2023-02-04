#include "mbed_wait_api.h"
#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 

DigitalOut red(TRAF_RED1_PIN,0);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

LCD_16X2_DISPLAY lcd;

int main()
{
    //lcd.puts("RED");
    //wait_us(1000000); //1000000 is microseconds == 1 second

    //amber = 1;
    //lcd.cls();
    //lcd.puts("Amber");
    //wait_us(1000000);

    //green = 1;
    //lcd.cls();
    //lcd.puts("Green");    
    //wait_us(1000000);

    //lcd.cls();
    //lcd.puts("TASK-104");

    while (true)
    {
        //red = !red;
        //amber = !amber;
        //green = !green;
        //wait_us(WAIT_TIME_MS * 1000);

        red = 1;
        amber = 0;
        lcd.cls();
        lcd.puts("RED");
        wait_us(10000000); //should be 10s

        amber = 1;
        lcd.cls();
        lcd.puts("RED & AMBER");
        wait_us(2000000); //should be 2s

        red = 0;
        amber = 0;
        green = 1;
        lcd.cls();
        lcd.puts("GO GO GO Green");
        wait_us(10000000); // should be 10s

        green = 0;
        amber = 1;
        lcd.cls();
        lcd.puts("AMBER");
        wait_us(2000000); // Should be 2s

    }
}
