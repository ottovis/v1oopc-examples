#include <iostream>

class xy {
public:
   int x;
   int y; 
   
   xy( int x, int y ): 
      x( x ), y( y )
   {}   
   
   xy operator+( const xy & rhs ) const {
      return xy( x + rhs.x, y + rhs.y );
   }
};

xy operator-( const xy & lhs, const xy & rhs ){
   return xy( lhs.x - rhs.x, lhs.y + rhs.y );
}

int main(int argc, char **argv){
   xy a( 1, 2 ), b( 3, 4 );

   // add b to a
   a = a + b;
   
   // subtract b from a
   a = a - b;
   
   return 0;
}
