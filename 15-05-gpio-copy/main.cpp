// ==========================================================================
//
// copy switch at C.23 to LED at B.27
//
// This file is in the public domain.
//
// ==========================================================================

#include "hwlib.hpp"

int main( void ){	
   
   auto led = hwlib::target::pin_in_out( hwlib::target::pins::d13 );
   led.direction_set_output();
   led.direction_flush();

   auto sw = hwlib::target::pin_in_out( hwlib::target::pins::d7 );
   sw.direction_set_input();
   sw.direction_flush();

   while(1){
      sw.refresh();
      led.write( ! sw.read() );
      led.flush();
   }
}


