#include "hwlib.hpp"

int main(int argc, char **argv){
   int n = 0 ;
   for(;;){
      hwlib::wait_ms( 1'000 );
      hwlib::cout << ++n << "\n";
   }
}
