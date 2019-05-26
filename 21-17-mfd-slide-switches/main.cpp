#include "hwlib.hpp"

void copy( hwlib::pin_out & led, hwlib::pin_in & button ){
   button.refresh();
   led.write( button.read() );
   led.flush();
}

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   board.red.write( 1 );
   board.red.flush();
   
   auto led1_invert = hwlib::invert( board.led1 );
   auto leds5 = hwlib::all( led1_invert, board.led4 );
   
   auto led2_invert = hwlib::invert( board.led2 );
   auto leds6 = hwlib::all( led2_invert, board.led5 );
   
   for(;;){
      copy( leds5, board.sw5 );      
      copy( leds6, board.sw6 );      
   }
   
}
