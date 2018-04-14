#include <iostream>
#include <array>

int main(){
   std::array< int, 10 > a;
   
   for( unsigned int i = 0; i < a.size(); i++ ){ 
      a[ i ] = i * i;
   }
   
   for( unsigned int i = 0; i < a.size(); i++ ){ 
      std::cout << "a[ " << i << " ]= " << a[ i ] << "\n";
   }
}   

