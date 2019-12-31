#include "Device.hpp"
#include "Sprites.hpp"

Arduboy2 arduboy;

void startDevice(){
    arduboy.begin();
    clearScreen();
}

void setSquare(Position pos){
    arduboy.drawRect(pos.x*16, pos.y*16, 16, 16, WHITE); 
}

void setSprite(Sprite sprite, Position pos){
    arduboy.drawBitmap(pos.x*16, pos.y*16, sprites[sprite], 16, 16, WHITE);  
}

void clearScreen(){
    arduboy.clear();  
}

void draw(){
    arduboy.display();
}

bool buttonPressed(Button b){
  return arduboy.pressed(b);  
}
