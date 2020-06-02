//
// Created by Benjamin Luger on 02.06.2020.
//

#ifndef GEPREXAMPLE11_CALCULATOR_H
#define GEPREXAMPLE11_CALCULATOR_H

using namespace std;

class Calculator {
private:
    GeometricShape* shapeA;
    GeometricShape* shapeB;

public:
    Calculator (GeometricShape* shapeA, GeometricShape* shapeB) {
        this->shapeA = shapeA;
        this->shapeB = shapeB;
    }

    float getAreaDiff() {
        return abs(int (this->shapeA->getArea() - this->shapeB->getArea()));
    }

    float getAreaSum() {
        return this->shapeA->getArea() + this->shapeB->getArea();
    }

    GeometricShape* getBiggerShape() {
        if (this->shapeA->getArea() > this->shapeB->getArea()) {
            return this->shapeA;
        }

        return this->shapeB;
    }

    GeometricShape* getSmallerShape() {
        if (this->shapeA->getArea() < this->shapeB->getArea()) {
            return this->shapeA;
        }

        return this->shapeB;
    }

    bool shapeHaveEqualSize() {
        return this->shapeA->getArea() == this->shapeB->getArea();
    }

    float getCircumferenceSum() {
        return this->shapeA->getCircumference() + this->shapeB->getCircumference();
    }

    float getCircumferenceDiff() {
        return std::abs(int (this->shapeA->getCircumference() - this->shapeB->getCircumference()));
    }

    void setShapeA(GeometricShape* shape) {
        this->shapeA = shape;
    }

    void setShapeB(GeometricShape* shape) {
        this->shapeB = shape;
    }

    GeometricShape *getShapeA() const {
        return shapeA;
    }

    GeometricShape *getShapeB() const {
        return shapeB;
    }

    GeometricShape* getBiggerCircumference() {
        if (this->shapeA->getCircumference() > this->shapeB->getCircumference()) {
            return this->shapeA;
        }

        return this->shapeB;
    }

    GeometricShape* getSmallerCircumference() {
        if (this->shapeA->getCircumference() < this->shapeB->getCircumference()) {
            return this->shapeA;
        }

        return this->shapeB;
    }


};

#endif //GEPREXAMPLE11_CALCULATOR_H
