//
// Created by idalov on 24.10.2017.
//

#include "Pixel.h"

void Pixel::setX(int X) {
    Pixel::X = (X <= 100 && X >= -100) ? X : Pixel::X;
}

void Pixel::setY(int Y) {
    Pixel::Y = (Y <= 100 && Y >= -100) ? Y : Pixel::Y;
}

void Pixel::setR(int R) {
    Pixel::R = (R >= 0 && R <= 255) ? R : Pixel::R;
}

void Pixel::setG(int G) {
    Pixel::G = (G >= 0 && G <= 255) ? G : Pixel::G;
}

void Pixel::setB(int B) {
    Pixel::B = (B >= 0 && B <= 255) ? B : Pixel::B;
}

Pixel::Pixel(int X, int Y, int R, int G, int B) {
    Pixel::X = (X <= 100 && X >= -100) ? X : 0;
    Pixel::Y = (Y <= 100 && Y >= -100) ? Y : 0;
    Pixel::R = (R >= 0 && R <= 255) ? R : 0;
    Pixel::G = (G >= 0 && G <= 255) ? G : 0;
    Pixel::B = (B >= 0 && B <= 255) ? B : 0;
}

