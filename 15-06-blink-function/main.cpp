// ==========================================================================
//
// toggle a led on B.27
// by a switch on C.23
//
// This file is in the public domain.
//
// ==========================================================================

#include "hwlib.hpp"

void blink( hwlib::pin_in_out & pin ){
   pin.direction_set_output();
   pin.direction_flush();
   for(;;){
      pin.write( 1 );
      pin.flush();
      hwlib::wait_ms( 200 );   
	  
      pin.write( 0 );
      pin.flush();
      hwlib::wait_ms( 200 );      
   } 
}

int main( void ){	  
   auto led = hwlib::target::pin_in_out( 1, 27 );
   ::blink( led );
}

         

