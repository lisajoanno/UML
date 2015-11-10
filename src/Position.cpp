#include "Position.h"

Position::Position() {
    x = 0;
    y = 0;
}
 
Position::Position(int x1, int y1) {
    x = x1;
    y = y1;
}

int Position::getX() {
    return x;
}

int Position::getY() {
    return y;
}

void Position::setX(int x1) {
    x = x1;
}

void Position::setY(int y1) {
    y = y1;
}
