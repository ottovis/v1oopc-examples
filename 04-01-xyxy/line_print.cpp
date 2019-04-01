#include "hwlib.hpp"
#include "line_print.hpp"

void line_print( 
   hwlib::window & w, 
   int start_x, int start_y, 
   int end_x, int end_y 
){
   hwlib::line line( 
      hwlib::xy( start_x, start_y), 
      hwlib::xy( end_x, end_y ) );
   line.draw( w );
   w.flush();
}