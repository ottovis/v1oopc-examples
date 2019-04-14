#include <iostream>

class xy {
public:
   int x;
   int y; 

   xy( int x = 0, int y = 0 );
};

xy::xy( int x, int y ): 
   x( x ), y( y )
{}

int main(int argc, char **argv){
   
   xy a;
   xy b( 1 );
   xy c( 2, 3 );
   
   return 0;
}
