// ==========================================================================
//
// toggle a led on B.27
// by a switch on C.23
//
// This file is in the public domain.
//
// ==========================================================================

#include "hwlib.hpp"

int main( void ){	
   
   auto led0 = hwlib::target::pin_out( hwlib::target::pins::d7 );
   auto led1 = hwlib::target::pin_out( hwlib::target::pins::d6 );
   auto led2 = hwlib::target::pin_out( hwlib::target::pins::d5 );
   auto led3 = hwlib::target::pin_out( hwlib::target::pins::d4 );
   
   for(;;){
      led0.write( 1 ); led0.flush(); hwlib::wait_ms( 80 ); led0.write( 0 ); led0.flush(); 
      led1.write( 1 ); led0.flush(); hwlib::wait_ms( 80 ); led1.write( 0 ); led0.flush(); 
      led2.write( 1 ); led0.flush(); hwlib::wait_ms( 80 ); led2.write( 0 ); led0.flush(); 
      led3.write( 1 ); led0.flush(); hwlib::wait_ms( 80 ); led3.write( 0 ); led0.flush(); 
      led2.write( 1 ); led0.flush(); hwlib::wait_ms( 80 ); led2.write( 0 ); led0.flush(); 
      led1.write( 1 ); led0.flush(); hwlib::wait_ms( 80 ); led1.write( 0 ); led0.flush(); 
   }
}

         

