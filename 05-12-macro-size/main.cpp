#include <iostream>
#include <array>

#define ARRAY_SIZE 100

int array[ ARRAY_SIZE ];

void f(){
   #undef ARRAY_SIZE
   #define ARRAY_SIZE 20
   char my_array[ ARRAY_SIZE ];
   // . . .
   (void)my_array;
}


int main(){
   for( unsigned int i = 0; i < ARRAY_SIZE; i++ ){ // wrong ARRAY_SIZE
      array[ i ] = 0;
   }

   return 0;
}   

