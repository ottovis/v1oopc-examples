#include "hwlib.hpp"

int main( void ){	
    
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   // wait for the PC to start the console
   hwlib::wait_ms( 1000 );
   
   hwlib::cout 
      << "cout demo\n"
      << 'd' << "ecimal " << 42 << "\n" 
      << "hexadecimal " << hwlib::hex << 42 << "\n";
   
}
