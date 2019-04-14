#include <iostream>

class xy {
private:
   int x;
   int y; 
public:
   xy( int x, int y ): 
      x( x ), y( y )
   {}
   int x_get(){ return x; }
   int y_get(){ return y; }
   void x_set( int new_x ){ x = new_x; }
   void y_set( int new_y ){ y = new_y; }
};

class line {
private:
   xy start;
   xy end;
public:
   line( xy start, xy end ): start( start ), end( end ){}   
};

int main(int argc, char **argv){
   xy a( 1, 2 ), b( 3, 4 );

   // add b to a
   a.x_set( a.x_get() + b.x_get() );
   a.y_set( a.y_get() + b.y_get() );
   
   return 0;
}
