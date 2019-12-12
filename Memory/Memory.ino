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
      Position pos(x,y);
        setSquare(pos);
        setSprite((y*6+x) % 12, pos);
    }    
  }
  draw();
}
