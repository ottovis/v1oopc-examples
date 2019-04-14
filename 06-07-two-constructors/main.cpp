#include <iostream>

class xy {
public:
   int x;
   int y; 
   
   xy( int x, int y ): 
      x( x ), y( y )
   {}
   
   xy(){}

};

int main(int argc, char **argv){
   
   xy a;
   xy b( 1, 2 );

   return 0;
}

