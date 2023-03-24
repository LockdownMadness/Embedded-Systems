
#include "Flashy.hpp"
#include <chrono>
#include <cstdint>
#include <ratio>

//Comment this next line to use simulated hardware
#define USE_REAL_HW

//Switch between real hardware and mocked
#ifdef USE_REAL_HW

#include "uop_msb.h"
#include "MbedLight.hpp"
#include "MbedTimer.hpp"
MbedLight redLed(LED1);                 //Concrete class  //This is for the physical device and set to whatever on the board
MbedTimer tmr;

ILightNotify& lightObj = redLed;        //Alias
ITimer& tmrObj = tmr;

#else

#include "MockedLight.hpp"
#include "MockedTimer.hpp"
MockedLight redLedMocked("RED LED FLASH ");    //Concrete class
MockedTimer tmr(1000ms);

ILightNotify& lightObj = redLedMocked;  //Alias
ITimer& tmrObj = tmr;
#endif


int main()
{
    Flashy f(tmrObj, lightObj, 250ms);
    
    while (true) {
        f.flashOnce();
        tmrObj.wait_for(1000ms);
    }
}




