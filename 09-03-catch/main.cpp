#include "ostream"
#include "vector.hpp"

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

bool operator==( vector lhs, vector rhs ){
   return ( lhs.x == rhs.x ) && ( lhs.y == rhs.y );
}

std::ostream & operator<<( std::ostream & lhs, vector rhs ){
   return lhs << "(" << rhs.x << "," << rhs.y << ")";
}

TEST_CASE( "constructors, two_parameters" ){
   vector v( 3, 4 );
   REQUIRE( v.x == 3 );   
   REQUIRE( v.y == 4 );   
}

TEST_CASE( "constructors, default" ){
   vector v;
   REQUIRE( v == vector( 0, 0 ) );   
}


