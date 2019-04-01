#include "hwlib.hpp"
#include "line_print.hpp"

int main(){
   // the window in which we want to print the line
   hwlib::target::window w( 128, 64 );	
   
   hwlib::graphics_random_circles(  w );
   
	line_print( w, 10, 10, 10, 20 );
   
   // keep the window around until we close it
   for(;;){ w.poll(); } 
}
