#include "hwlib.hpp"

struct line {
   int start_x;
   int start_y; 
   int end_x;
   int end_y;
};

void line_print( hwlib::window & w, const line & l );
