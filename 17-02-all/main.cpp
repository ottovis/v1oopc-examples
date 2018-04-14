#include <array>
#include "hwlib.hpp"

class pin_out_all : public hwlib::pin_out {
private:
   std::array< hwlib::pin_out *, 4 > list;     
   
public:

   pin_out_all( 
      hwlib::pin_out & p0, 
      hwlib::pin_out & p1 = hwlib::pin_out_dummy,  
      hwlib::pin_out & p2 = hwlib::pin_out_dummy, 
      hwlib::pin_out & p3 = hwlib::pin_out_dummy 
   ):
      list{ &p0, &p1, &p2, &p3 }
   {}
   
   void set( 
      bool v, 
      hwlib::buffering buf = hwlib::buffering::unbuffered  
   ){
      for( auto p  : list ){
          p->set( v );
      }
   }
};

int main( void ){	
    
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   namespace target = hwlib::target;
   
   auto led0 = target::pin_out( target::pins::d7 );
   auto led1 = target::pin_out( target::pins::d6 );
   //auto led2 = target::pin_out( target::pins::d5 );
   //auto led3 = target::pin_out( target::pins::d4 );
   
   auto leds = pin_out_all( led0, led1 );
   
   hwlib::blink( leds );    
}
