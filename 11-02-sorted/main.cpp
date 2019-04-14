#include <iostream>
#include <array>
   
int main(){
   const unsigned int array_size = 100;
   std::array< int, array_size > array;
   
   unsigned int fouten = 0;
   
   for( unsigned int i = 1; i <= array_size; ++i ){
      if( i < array_size ) // prevent the compiler error!
          array[ i ] = 100 + i;
   }
   
   for( unsigned int i = 0; i < array_size; ++i ){       
      if( array[ i ] > array[ i + 1 ] ){
         std::cout << "not sorted\n";
         fouten++;
      }
   }

   std::cout << "Het aantal fouten is " << fouten << "\n";
   return 0;
}   

