#include "Device.hpp"

Arduboy2 arduboy;

void startDevice(){
    arduboy.begin();
    clearScreen();
}

void setSquare(Position pos){
    arduboy.drawRect(pos.x*16, pos.y*16, 16, 16, WHITE); 
}

void clearScreen(){
    arduboy.clear();  
}

void draw(){
    arduboy.display();
}
