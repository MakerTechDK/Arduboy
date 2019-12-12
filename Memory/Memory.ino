#include "Device.hpp"
#include "Math.hpp"
#include <Arduboy2.h>

void setup() {
  // put your setup code here, to run once:
  startDevice();
}

void loop() {
  clearScreen();
  for(int x = 0; x < 6; ++x){
    for(int y = 0; y < 4; ++y){
        setSquare(Vector(x, y));
    }    
  }
  draw();
}
