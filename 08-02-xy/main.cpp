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

std::ostream & operator<<( std::ostream & lhs, xy pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}

int main(int argc, char **argv){
   xy pos1( 1, 2 ), pos2( 12, 33 );
   std::cout << pos1 << "  " << pos2 << "\n";
}



