//
// Created by Benjamin Luger on 02.06.2020.
//

#ifndef GEPREXAMPLE11_SQUARE_H
#define GEPREXAMPLE11_SQUARE_H

#include "GeometricShape.h"

class Square: public GeometricShape {
protected:
    float a;
    float b;

public:
    Square (float a, float b) {
        this->a = a;
        this->b = b;
    }

    Square(int a, int b) {
        this->a = (float) a;
        this->b = (float) b;
    }

    Square(const Square &p2) {
        this->a = p2.a;
        this->b = p2.b;
    }

    float getArea()  {
        return (float)this->a * (float)this->b;
    }

    float getCircumference()  {
        return (float)this->a*2 + (float) this->b*2;
    }

    float getA() {
        return this->a;
    }

    float getB() {
        return this->b;
    }
};

#endif //GEPREXAMPLE11_SQUARE_H
