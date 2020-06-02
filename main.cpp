#include <iostream>
#include "headers/GeometricShape.h"
#include "headers/Square.h"
#include "headers/Calculator.h"
#include "headers/Circle.h"


using namespace std;


int main() {
    float a, b, r;

    cout << "Geben Sie die Seiten des Rechtecks an: " << endl;
    cout << "a: ";
    cin >> a;
    cout << endl << "b: ";
    cin >> b;
    cout << endl << "Geben Sie den Radius des Kreises an: " << endl;
    cout << "r: ";
    cin >> r;
    cout << endl;

    auto * x = new Square(a, b);
    auto * y = new Circle(r);
    auto * calculator = new Calculator(x, y);

    cout << "Area calculation: " << endl;
    cout << "Area rectangle: " << calculator->getShapeA()->getArea() << endl;
    cout << "Area circle: " << calculator->getShapeB()->getArea() << endl;
    cout << "Area difference: " << calculator->getAreaDiff() << endl;
    cout << "Area sum: " << calculator->getAreaSum() << endl;
    cout << "Bigger area: " << calculator->getBiggerShape()->getArea() << endl;
    cout << "Smaller Area: " << calculator->getSmallerShape()->getArea() << endl << endl;
    cout << "Circumference calculation: " << endl;
    cout << "Circumference rectangle: " << calculator->getShapeA()->getCircumference() << endl;
    cout << "Circumference circle: " << calculator->getShapeB()->getCircumference() << endl;
    cout << "Circumference difference:" << calculator->getCircumferenceDiff() << endl;
    cout << "Circumference sum: " << calculator->getCircumferenceSum() << endl;
    cout << "Bigger circumference: " << calculator->getBiggerCircumference()->getCircumference() << endl;
    cout << "Smaller circumference: " << calculator->getSmallerCircumference()->getCircumference() << endl;

    return 0;
}