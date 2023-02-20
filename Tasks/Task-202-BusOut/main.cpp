#include "mbed.h"
#include "mbed_wait_api.h"
#include "uop_msb.h"
#include <ostream>
#include <string>
#include <bitset>
#include <iostream>
using namespace uop_msb;

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2

// Objects
// DigitalOut grn(TRAF_GRN1_PIN);
// DigitalOut yel(TRAF_YEL1_PIN);
// DigitalOut red(TRAF_RED1_PIN,1);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN, PB_0, PB_7, PB_14); //the order in here determins the binary to turn it on!!!
//BusOut leds(PC_2, PC_3, PC_6, PB_0, PB_7, PB_14);
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



        int n;
        float b;
        
        for (n=1; n<=32; n = n+1) {
            printf("n=%d\n", n);
            lcd.cls();
            lcd.printf("Real Num: %d\n", n);
            //uint32_t binary = *reinterpret_cast<uint32_t*>(&n);

                //if(n==1){
                    //lcd.locate(1, 0);   //Row 1, Col 0
                    //lcd.printf(" Bin Num:00001");
                    //}else if (n==2){
                        //lcd.locate(1, 0);   //Row 1, Col 0
                        //lcd.printf(" Bin Num:00010");
                            //}else if (n==3){
                                //lcd.locate(1, 0);   //Row 1, Col 0
                                //lcd.printf(" Bin Num:00011");
                                    //}else if (n==4){
                                        //lcd.locate(1, 0);   //Row 1, Col 0
                                        //lcd.printf(" Bin Num:00100");
                                            //}else if (n==5){
                                                //lcd.locate(1, 0);   //Row 1, Col 0
                                                //lcd.printf(" Bin Num:00101");
                                                    //}else if (n==6){
                                                        //lcd.locate(1, 0);   //Row 1, Col 0
                                                        //lcd.printf(" Bin Num:00110");
                                                           // }else if (n==7){
                                                                //lcd.locate(1, 0);   //Row 1, Col 0
                                                                //lcd.printf(" Bin Num:00111");
                                                            //};

            leds = n;
            wait_us(200000);
        }

    

        //ASK FOR HELP IN THIS ONE FOR TASK202 6. ADDING THE THREE PINS PB_7 & PB_14 ETC COULDNT FIND THEM ON THE SCMATIC
    }
}


