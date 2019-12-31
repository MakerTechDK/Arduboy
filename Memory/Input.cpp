#include "Input.hpp"
#include "Device.hpp"
#include "Cursor.hpp"

const int ticksBetweenInput = 15;
int ticksToInput = 0;

bool shouldProcessInput(){
  ticksToInput--;
  if(ticksToInput > 0) return false;

  ticksToInput = ticksBetweenInput;
  return true;
}

void handleInput(){
  if(!shouldProcessInput()) return;
  
  Direction dir(0,0);
  if(buttonPressed(Up)) dir.y--;
  if(buttonPressed(Down)) dir.y++;
  if(buttonPressed(Left)) dir.x--;
  if(buttonPressed(Right)) dir.x++;
  moveCursor(dir);
}
