#include "hwlib.hpp"

// lipo full = 4.2 V per cell => 12.6 V
// lipo empty = 3.0 V per cell => 9.0 V

int millivolts( hwlib::adc & adc ){ 
   int n = adc.get();
   return ( n * 33000 ) / 4095;       
}

void print_time( int s ){
   auto m = s / 60;
   auto h = m / 60;
   hwlib::cout 
      << hwlib::setw( 2 ) << hwlib::right << hwlib::setfill( '0' )
      << h % 60 << ":"
      << hwlib::setw( 2 ) << hwlib::right << hwlib::setfill( '0' )
      << m % 60 << ":"
      << hwlib::setw( 2 ) << hwlib::right << hwlib::setfill( '0' )
      << s % 60; 
}

void print_voltage( int mv ){
   auto v = mv / 1000;
   hwlib::cout 
      << hwlib::setw( 2 ) << hwlib::right << hwlib::setfill( ' ' )
      << v << "."
      << hwlib::setw( 3 ) << hwlib::right << hwlib::setfill( '0' )
      << mv % 1000;    
}

void print( const char *t, int s, int mv ){
   hwlib::cout << t << " ";
   print_time( s );
   hwlib::cout << " ";
   print_voltage( mv );
   hwlib::cout << " V \n" ;
}

void charge( hwlib::pin_out & dis, hwlib::adc & adc ){
   dis.set( 0 );    
   int s = 0;    
   for(;;){    
      int mv = millivolts( adc );
      print( "charging to 12.500 V  ", ++s, mv );
      hwlib::wait_ms( 1000 );
      if( mv > 12500 ){
         break;          
      }
   }      
}

void discharge( hwlib::pin_out & dis, hwlib::adc & adc ){
   dis.set( 1 );    
   int s = 0;    
   for(;;){    
      int mv = millivolts( adc );
      print( "discharging to 9.100 V  ", ++s, mv );
      hwlib::wait_ms( 1000 );
      if( mv < 9100 ){
         break;          
      }
   } 
   dis.set( 0 );
   hwlib::cout << "discharging stopped\n";
}

int main( void ){	
    
   // kill the watchdog
   WDT->WDT_MR = WDT_MR_WDDIS;
   
   // wait for the PC to start the console
   hwlib::wait_ms( 1000 );
   
   hwlib::cout << "LiPo battery pack tester\n";
   
   auto adc = hwlib::target::pin_adc( hwlib::target::ad_pins::a0 );
   auto dis = hwlib::target::pin_out( hwlib::target::pins::a8 );
   
   charge( dis,  adc );
   discharge( dis, adc );
   
}
