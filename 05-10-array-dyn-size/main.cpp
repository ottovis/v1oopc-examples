#include <iostream>
#include <array>

const unsigned int word_size = 8;

void print( 
   const std::array< char, word_size > & word, 
   unsigned int valid 
){
   for( unsigned int i = 0; i < valid; i++ )    {
      std::cout<< word[ i ];
   }    
}

int main(){
   std::array< char, word_size > word = { 'P', 'a', 't', 'a', 't', 'j', 'e', '!' };
   print( word, 8 );
   
   std::array< char, 8 > short_word = { 'P', 'a', 't', 'a', 't' };
   print( short_word, 5 ); 
}  