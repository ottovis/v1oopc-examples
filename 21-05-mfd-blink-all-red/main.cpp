#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   board.red.write( 1 );
   board.red.flush();
   
   auto leds = hwlib::all(
      board.led1, board.led2, board.led3, board.led4, 
      board.led5, board.led6, board.led7, board.led8, board.led9 );
   
   hwlib::blink( leds );
}

