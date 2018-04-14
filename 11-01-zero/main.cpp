#include <iostream>
#include <array>

int main(){
    
   const unsigned int array_size = 100;
   std::array< int, array_size > array;

   for( unsigned int i = 1; i <= array_size; ++i ){
      array[ i ] = 0;
   }

   return 0;
}   

