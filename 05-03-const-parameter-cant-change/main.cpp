#include <iostream> 

void f( const int x ){
   x = x + 5; // compilation error
}

int main(){
   int i = 10;
   f( i );
}      

