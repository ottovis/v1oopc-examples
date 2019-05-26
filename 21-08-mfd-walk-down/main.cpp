#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   auto leds1 = hwlib::all( 
      board.led7, board.led8, board.led9, board.green );
   auto leds2 = hwlib::all(
      board.led4, board.led5, board.led6, board.blue );
   auto leds3 = hwlib::all(
      board.led1, board.led2, board.led3, board.red );
   
   auto leds = hwlib::port_out_from( leds1, leds2, leds3 );
   
   hwlib::snake( leds, 400 );
}
