#include "Math.hpp"

void Vector::operator +=(Vector other){
  x += other.x;
  y += other.y;  
}

bool operator!=(Vector v1, Vector v2){
  return !(v1.x == v2.x && v1.y == v2.y);  
}
