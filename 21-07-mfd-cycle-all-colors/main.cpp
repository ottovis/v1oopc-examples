#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   auto leds = hwlib::all(
      board.led1, board.led2, board.led3, board.led4, 
      board.led5, board.led6, board.led7, board.led8, board.led9 );   
   leds.write( 1 );
   leds.flush();
   
   auto colors = hwlib::port_out_from( board.red, board.green, board.blue );
   
   hwlib::snake( colors, 500 );
}
