#include "Cursor.hpp"
#include "Device.hpp"

const int CURSORSPRITE = 12;
const int ANIMSPRITES = 3;
const int FRAMETIME = 30;

Position cursorPosition(0,0);
int currentSprite = 0;
int ticksToFrame = 0;

Position getCursorPosition(){
  return cursorPosition;  
}

void clampToBoard(){
  if(cursorPosition.x < 0) cursorPosition.x = 5;
  if(cursorPosition.x > 5) cursorPosition.x = 0;
  if(cursorPosition.y < 0) cursorPosition.y = 3;
  if(cursorPosition.y > 3) cursorPosition.y = 0;
}

void moveCursor(Direction dir){
  cursorPosition += dir;
  clampToBoard();
}

void drawCursor(){
  setSprite(CURSORSPRITE + currentSprite, cursorPosition);
  ticksToFrame--;
  if(ticksToFrame <= 0){
    ticksToFrame = FRAMETIME;
    currentSprite++;
    if(currentSprite > ANIMSPRITES-1) currentSprite = 0;
  }
}
