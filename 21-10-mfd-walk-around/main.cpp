#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   board.green.write( 1 );
   board.green.flush();   
   
   auto leds = hwlib::port_out_from(
      board.led1, board.led2, board.led3, board.led6, 
      board.led9, board.led8, board.led7, board.led4 );
   hwlib::snake( leds, 50 );
}

