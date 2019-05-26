#include "hwlib.hpp"

void pin_pulse( 
   hwlib::pin_out & pin, 
   uint16_t on, 
   uint16_t total 
){
   pin.write( 1 );
   pin.flush();
   hwlib::wait_us( on );
   pin.write( 0 );
   pin.flush();   
   hwlib::wait_us( total - on );
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
      pin_pulse( 
         board.green,  
         board.adc.read(),
         board.adc.adc_max_value
      );
   }
}   
