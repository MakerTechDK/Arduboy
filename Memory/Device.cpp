#include "Device.hpp"
#include "Sprites.hpp"

Arduboy2 arduboy;

void startDevice(){
    arduboy.begin();
    clearScreen();
}

void setSquare(Vector pos){
    arduboy.drawRect(pos.x, pos.y, 16, 16, WHITE); 
}

void clearScreen(){
    arduboy.clear();  
}

void draw(){
    arduboy.display();
}
