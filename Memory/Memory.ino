#include "Device.hpp"
#include "Math.hpp"
#include "Board.hpp"
#include "GameState.hpp"
#include "Cursor.hpp"
#include "Input.hpp"
#include <Arduboy2.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  startDevice();
  setupBoard();
}

void loop() {
  handleInput();
  clearScreen();
  Position cursorPosition = getCursorPosition();
  drawCursor();
  for(int x = 0; x < 6; ++x){
    for(int y = 0; y < 4; ++y){
        Position pos(x,y);
        if(cursorPosition != pos) setSquare(pos);
        setSprite(cardAtPosition(pos), pos);
    }    
  }
  draw();
}
