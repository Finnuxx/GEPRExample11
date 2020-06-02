//
// Created by Benjamin Luger on 02.06.2020.
//

#ifndef GEPREXAMPLE11_CIRCLE_H
#define GEPREXAMPLE11_CIRCLE_H

#include <math.h>
#include "GeometricShape.h"

class Circle: public GeometricShape {
private:
    float r;

public:
    Circle(float r) {
        this->r = r;
    }

    float getArea() {
        return (float) pow(r, 2) * M_PI;
    }

    float getCircumference() {
        return M_PI * 2 * r;
    }

    float getR() const {
        return r;
    }
};

#endif //GEPREXAMPLE11_CIRCLE_H
