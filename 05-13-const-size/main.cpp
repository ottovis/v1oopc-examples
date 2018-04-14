#include <iostream>
#include <array>

const unsigned int array_size = 1000;

int array[ array_size ];

void f(){
   const int array_size = 20;
   char my_array[ array_size ];
   // . . .
}



int main(){
   for( unsigned int i = 0; i < array_size; i++ ){ 
      array[ i ] = 0;
   }

   return 0;
}    

