#include <iostream>
#include <array>

const unsigned int word_size = 8;

void print( const std::array< char, word_size > & word ){
   for( unsigned int i = 0; i < word.size(); i++ )    {
      if( word[ i ] == '\0' ){
          return;
      }
      std::cout<< word[ i ];
   }    
}

int main(){
   std::array< char, 8 > short_word = { 'P', 'a', 't', 'a', 't', '\0' };
   print( short_word ); 
}  