#include <iostream>
#include <array>

const unsigned int word_size = 8;

void print( const std::array< char, word_size > & word ){
   for( unsigned int i = 0; i < word.size(); i++ )    {
      std::cout<< word[ i ];
   }    
}

int main(){
   std::array< char, word_size > word = { 'P', 'a', 't', 'a', 't', 'j', 'e', '!' };
   print( word );
   
   // std::array< char, 5 > short_word = { 'P', 'a', 't', 'a', 't' };
   // print( short_word );    // compiler error
} 
  