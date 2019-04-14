#include <iostream>

class xy {
public:
   int x;
   int y; 
   xy operator+( const xy & rhs ) const;
   xy & operator+=( const xy & rhs );
};

xy & xy::operator+=( const xy & rhs ){
   x += rhs.x;
   y += rhs.y;
   return *this;
}

xy xy::operator+( const xy & rhs ) const {
   xy temp = *this;
   temp += rhs;
   return temp;
}

int main(int argc, char **argv){  
   return 0;
}
