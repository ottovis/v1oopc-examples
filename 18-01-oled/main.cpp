#include "hwlib.hpp"

void fill( hwlib::window & lcd ){
   for( int x = 0; x < lcd.size.x; ++x ){
      for( int y = 0; y < lcd.size.y; ++y ){
         lcd.write( hwlib::location( x, y ), hwlib::black );
      }
   }
}

int main( void ){	
    
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   namespace target = hwlib::target;
   
   auto scl = target::pin_oc( target::pins::scl );
   auto sda = target::pin_oc( target::pins::sda );
   
   auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda( scl,sda );
   
   auto display = hwlib::glcd_oled( i2c_bus, 0x3c );  
     
   hwlib::graphics_random_circles( display );
}
