#include <iostream>

class xy {
public:
   int x;
   int y; 

   xy( int x, int y ): 
      x( x ), y( y )
   {}
   
   xy():
      x( 0 ), y( 0 )
   {}

};

int main(int argc, char **argv){
   xy a( 1, 2 );
   xy b;
   
   return 0;
}
