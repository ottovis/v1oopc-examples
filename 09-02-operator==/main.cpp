#include "xy.hpp"
#include <assert.h> 

bool operator==( const xy & lhs, const xy & rhs ){
   return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y );
}

int main(int argc, char **argv){

   xy a( 1, 2 );
   xy b( 4, 3 );

   xy c = a + b;

   assert( a == xy( 1, 2 ) );
   assert( b == xy( 4, 3 ) );
   assert( c == xy( 5, 5 ) );

   return 0;
}
