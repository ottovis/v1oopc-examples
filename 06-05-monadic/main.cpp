#include <iostream>

class xy {
public:
   int x;
   int y; 
   
   xy( int x, int y ): 
      x( x ), y( y )
   {}   

   xy operator+() const {
      return xy( x, y );
   }

};

int main(int argc, char **argv){
   
   xy a( 1, 2 ), b( 3, 4 );
   
   a = + b;
   
   return 0;
}
