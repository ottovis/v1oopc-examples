#include "ostream"
#include "xy.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

bool operator==( xy lhs, xy rhs ){
   return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y );
}

TEST_CASE( "constructors, default" ){
   xy v;
   REQUIRE( v == xy( 1, 7 ) );   
}



