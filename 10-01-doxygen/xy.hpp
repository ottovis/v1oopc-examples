#ifndef XY_HPP
#define XY_HPP

class xy {
public:
   int x;
   int y; 
   
   /// \brief
   /// default constructor
   /// \details
   /// This constructor does not initialize the x and y attributes.
   xy();

   /// \brief
   /// multiply xy by integer
   /// \details
   /// This operator multiplies an xy by an integer, yielding an xy.
   /// The resulting xy points in the same direction as the original,
   /// but its length is rhs times longer than the original.
   /// In other words, the x and y attributes of the result are
   /// the x and y of the original, multiplied by the rhs.
   xy operator*( int rhs ) const;
   
};

#endif