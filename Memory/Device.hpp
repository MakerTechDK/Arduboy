#ifndef DEVICE_HPP
#define DEVICE_HPP

#include <Arduboy2.h>
#include "Math.hpp"
#include "Sprites.hpp"

void startDevice();
void setCursor(Position pos);
void setSquare(Position pos);
void setSprite(Sprite sprite, Position pos);
void clearScreen();
void draw();

#endif
