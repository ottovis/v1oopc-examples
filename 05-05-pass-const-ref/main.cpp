#include <iostream> 

void f( const int & x ){
}

int main(){
   const int x = 10;
   f( x );     // OK
   f( 3 + 5 ); // OK
}      

