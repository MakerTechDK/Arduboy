#ifndef DEVICE_HPP
#define DEVICE_HPP

#include <Arduboy2.h>
#include "Math.hpp"
#include "Sprites.hpp"

enum Button{Left = LEFT_BUTTON, Right = RIGHT_BUTTON, Up = UP_BUTTON, Down = DOWN_BUTTON, A = A_BUTTON, B = B_BUTTON};

void startDevice();
void setCursor(Position pos);
void setSquare(Position pos);
void setSprite(Sprite sprite, Position pos);
void clearScreen();
void draw();
bool buttonPressed(Button b);

#endif
