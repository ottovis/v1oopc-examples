#include "hwlib.hpp"

class pin_in_out_invert : public hwlib::pin_in_out {
private:
   hwlib::pin_in_out & slave;
   
public:
   pin_in_out_invert( hwlib::pin_in_out & slave ): 
      slave( slave ){}
   
   void direction_set_input() override { 
      slave.direction_set_input(); 
   }
   
   void direction_set_output() override { 
      slave.direction_set_output(); 
   }
   
   bool read() override {
       return ! slave.read();
   }    
   
   void write( bool x ) override {
      slave.write( ! x );
   } 

   void direction_flush() override { 
      slave.direction_flush(); 
   }
   
   void refresh() override { 
      slave.refresh(); 
   }
   
   void flush() override { 
      slave.flush(); 
   }
   
};

void copy_pins( 
   hwlib::pin_in_out & destination,
   hwlib::pin_in_out & source 
){
   destination.direction_set_output();
   source.direction_set_input();
   for(;;){
      source.refresh();       
      destination.write( source.read() );
      destination.flush();
   }
}
   

int main( void ){	
   
   namespace target = hwlib::target;
   auto led    = target::pin_in_out( target::pins::led );
   auto sw_pin = target::pin_in_out( target::pins::d7 );
   
   // LED on when switch is *not* pressed
   // copy_pins( led, sw_pin );
   
   // LED on when switch is pressed
   auto sw     = pin_in_out_invert( sw_pin );
   copy_pins( led, sw );  
}
