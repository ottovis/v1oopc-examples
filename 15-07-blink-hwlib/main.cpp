// ==========================================================================
//
// toggle a led on B.27
// by a switch on C.23
//
// This file is in the public domain.
//
// ==========================================================================

#include "hwlib.hpp"

int main( void ){	
   auto led = hwlib::target::pin_out( hwlib::target::pins::d13 );
   hwlib::blink( led );
}

         

