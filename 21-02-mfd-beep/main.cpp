#include "hwlib.hpp"

int main( void ){	
  
   namespace target = hwlib::target;
   target::board board; 
   hwlib::blink( board.buzzer, 1, 200 );

}
