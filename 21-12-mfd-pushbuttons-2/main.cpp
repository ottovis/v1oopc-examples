#include "hwlib.hpp"

void copy( hwlib::pin_out & led, hwlib::pin_in & button ){
   button.refresh();
   led.write( button.read() );
   led.flush();
}

int main( void ){	
   
   namespace target = hwlib::target;
   target::board board; 
   
   auto leds = hwlib::all(
      board.led1, board.led2, board.led3, board.led4, 
      board.led5, board.led6, board.led7, board.led8, board.led9 );
   leds.write( 1 );
   leds.flush();
   
   for(;;){
      copy( board.red,   board.sw2 );
      copy( board.green, board.sw3 );
      copy( board.blue,  board.sw4 );      
   }
}
