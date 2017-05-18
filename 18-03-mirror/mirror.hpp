#ifndef _MIRROR_HPP
#define _MIRROR_HPP

#include "hwlib.hpp"

class window_mirror : public hwlib::window {
private:
   hwlib::window & w;
   
public:
   window_mirror( hwlib::window & w ); 
   void clear( hwlib::buffering buf = hwlib::buffering::unbuffered ) override { 
      w.clear(); 
   }
   
private:   
   void write_implementation( 
      hwlib::location pos, 
      hwlib::color col, 
      hwlib::buffering buf = hwlib::buffering::unbuffered 
   ) override;

};

#endif


