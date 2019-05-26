#include "hwlib.hpp"

int main( void ){	
   
   namespace target = hwlib::target;
   target::board board; 
   
   auto leds = hwlib::all(
      board.led1, board.led2, board.led3, board.led4, 
      board.led5, board.led6, board.led7, board.led8, board.led9 );
   leds.write( 1 );
   leds.flush();
   
   for(;;){
      board.sw1.refresh();
      board.green.write( board.sw1.read() );
      board.green.flush();      
      
      board.sw2.refresh();
      board.blue.write( board.sw2.read() );
      board.blue.flush();      
      
      board.sw3.refresh();
      board.green.write( board.sw3.read() );;
      board.red.flush();      
   }
}
