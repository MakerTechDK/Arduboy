#include "Cursor.hpp"
#include "Device.hpp"

const int CURSORSPRITE = 12;
const int ANIMSPRITES = 3;
const int FRAMETIME = 100;

Position cursorPosition(0,0);
int currentSprite = 0;
int lastUpdateTime = 0;

Position getCursorPosition(){
  return cursorPosition;  
}

void moveCursor(Direction dir){
  cursorPosition += dir;  
}

void drawCursor(){
  setSprite(CURSORSPRITE + currentSprite, cursorPosition);
  if(millis()  > lastUpdateTime + FRAMETIME){
    lastUpdateTime = millis();
    currentSprite++;
    if(currentSprite > ANIMSPRITES-1) currentSprite = 0;
  }
}
