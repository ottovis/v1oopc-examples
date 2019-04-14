#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   
   auto led0 = target::pin_out( target::pins::d7 );
   auto led1 = target::pin_out( target::pins::d6 );
   auto led2 = target::pin_out( target::pins::d5 );
   auto led3 = target::pin_out( target::pins::d4 );
   
   auto leds = hwlib::port_out_from( led0, led1, led2, led3 );
   hwlib::kitt( leds );
}
