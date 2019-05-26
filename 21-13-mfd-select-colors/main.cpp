#include "hwlib.hpp"

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
      
      board.red.write( red );
      board.green.write( green );
      board.blue.write( blue );
       
      board.red.flush(); 
      board.green.flush(); 
      board.blue.flush(); 
   }
}