#include "hwlib.hpp"

void pin_pulse( hwlib::pin_out & pin, bool x, uint16_t us ){
   pin.write( x );
   pin.flush();
   hwlib::wait_us( us );
   pin.write( 0 );
   pin.flush();   
}

int main( void ){	
   
   namespace target = hwlib::target;
   target::board board; 
   
   auto leds = hwlib::all(
      board.led1, board.led2, board.led3, board.led4, 
      board.led5, board.led6, board.led7, board.led8, board.led9 );
   leds.write( 1 );
   leds.flush();
   
   bool red = 0, green = 0, blue = 0;
   
   for(;;){
      board.sw1.refresh();
      board.sw2.refresh();
      board.sw3.refresh();
      board.sw4.refresh();
      
      if( board.sw1.read() ){
         red = 0;
         green = 0;
         blue = 0;
      }
      
      if( board.sw2.read() ){
         red = 1;
      }
      
      if( board.sw3.read() ){
         green = 1;
      }
      
      if( board.sw4.read() ){
         blue = 1;
      }
      
      pin_pulse( board.red,   red,   100 );
      pin_pulse( board.green, green,  50 );
      pin_pulse( board.blue,  blue,   15 );
   }
}
