#include "Board.hpp"
#include <Arduino.h>

const Card None = -1;

int board[4*6] = {
  -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1
  };

bool initialized = false;

Card cardAtIndex(int i){
    if(i < 0 || i >= 6*4) return -1;
    return board[i];
}

void setCardAtIndex(int index, Card c){
  if(index < 0) return;
  board[index] = c;  
}

void setCard(int wantedIndex, Card c){
    while(cardAtIndex(wantedIndex) != None){
            wantedIndex++;
            if(wantedIndex >= 4*6) wantedIndex = 0;
    }
    setCardAtIndex(wantedIndex, c);
}

void setCardPositions(Card c){
    auto firstIndex = random(6*4);  
    auto secondIndex = random(6*4);

    setCard(firstIndex, c);
    setCard(secondIndex, c);
}

void setupBoard(){
    for(Card c = 0; c < 12; ++c){
        setCardPositions(c);
    }
    initialized = true;  
}

unsigned int positionToIndex(Position pos){
    return 6*pos.y+pos.x;  
}

Card cardAtPosition(Position pos){
    return cardAtIndex(positionToIndex(pos)); 
}
