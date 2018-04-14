#include <iostream> 

void f( int x ){
   // . . . 
   x = x + 5; // did the author realize that he is modifying a copy?
   // . . .
}

int main(){
   int i = 10;
   f( i );
   std::cout << "i=" << i << "\n";
}   


