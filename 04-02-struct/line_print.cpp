#include "hwlib.hpp"
#include "line_print.hpp"

void line_print( hwlib::window & w, const line & l ){
   hwlib::line line( 
      hwlib::xy( l.start_x, l.start_y), 
      hwlib::xy( l.end_x, l.end_y ) );
   line.draw( w );
   w.flush();  
}