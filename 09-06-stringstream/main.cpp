#include "ostream"
#include "xy.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

std::ostream & operator<<( std::ostream & lhs, xy pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}

TEST_CASE( "operator<<" ){
   std::stringstream s;
   
   xy v( 1, 2 );
   
   s << v;
   
   REQUIRE( s.str() == "(1,2)" );   
}


