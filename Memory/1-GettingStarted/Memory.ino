#include "Device.hpp"
#include "Math.hpp"
#include <Arduboy2.h>

void setup() {
  // put your setup code here, to run once:
  startDevice();
}

void loop() {
  clearScreen();
  for(int x = 0; x < 8; ++x){
    for(int y = 0; y < 8; ++y){
        setSquare(Vector(x, y));
    }    
  }
  draw();
}
