#include "hwlib.hpp"

int main( void ){	
    
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   // wait for the PC to start the console
   hwlib::wait_ms( 1000 );
   
   hwlib::cout << "cin demo\n";
   
   for(;;){
      char c;
      hwlib::cin >> c;    
      hwlib::cout 
         << "[0x" << hwlib::hex << (int) c << "] "
         << c << "\n";
   }
   
}
