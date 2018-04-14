#include <iostream>
#include <array>

const unsigned int squares_table_size = 10;

int main(){
   std::array< int, squares_table_size > squares;
   
   for( unsigned int i = 0; i < squares_table_size; i++ ){ 
      squares[ i ] = i * i;
   }
   
   for( unsigned int i = 0; i < squares.size(); i++ ){ 
      std::cout << "squares[ " << i << " ]= " << squares[ i ] << "\n";
   }
} 
   