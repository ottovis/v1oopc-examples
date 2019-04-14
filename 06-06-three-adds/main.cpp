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

int main(int argc, char **argv){
   
   xy a( 1, 2 ), b( 3, 4 ), c( 5, 6 );
   int x = 1, y = 2, z;
   
   c = a + b;
   z = x + y;
   // z = x + b;    // compilation error
   
   return 0;
}
