#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   board.red.write( 1 );
   board.red.flush();
   hwlib::blink( board.led1 );
}
