#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   
   for(;;){
      auto v = board.adc.read();       
      hwlib::cout
         << hwlib::setw( 4 ) << v
         <<  " |"
         << hwlib::setfill( '-' )
         << hwlib::setw( v / 16 )  << ""
         << hwlib::setfill( ' ' )
         << "\n" << hwlib::flush;
      hwlib::wait_ms( 200 );
   }
}   