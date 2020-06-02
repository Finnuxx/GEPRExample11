//
// Created by Benjamin Luger on 02.06.2020.
//

#ifndef GEPREXAMPLE11_GEOMETRICSHAPE_H
#define GEPREXAMPLE11_GEOMETRICSHAPE_H

class GeometricShape {
public:
    virtual float getArea();
    virtual float getCircumference();
};

float GeometricShape::getArea() {
    return 0;
}

float GeometricShape::getCircumference() {
    return 0;
}

#endif //GEPREXAMPLE11_GEOMETRICSHAPE_H
