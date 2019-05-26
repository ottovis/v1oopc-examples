#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   board.led1.write( 1 );
   board.led1.flush();
   
   auto colors = hwlib::port_out_from( board.red, board.green, board.blue );
   
   hwlib::snake( colors, 500 );
}
