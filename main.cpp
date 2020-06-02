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

    cout << "Flächenberechnungen: " << endl;
    cout << "Fläche des Rechtecks: " << calculator->getShapeA()->getArea() << endl;
    cout << "Fläche des Kreises: " << calculator->getShapeB()->getArea() << endl;
    cout << "Flächenunterschied: " << calculator->getAreaDiff() << endl;
    cout << "Flächensumme: " << calculator->getAreaSum() << endl;
    cout << "größere Fläche: " << calculator->getBiggerShape()->getArea() << endl;
    cout << "kleinere Fläche: " << calculator->getSmallerShape()->getArea() << endl << endl;
    cout << "Umfangsberechungen: " << endl;
    cout << "Umfang des Rechtecks: " << calculator->getShapeA()->getCircumference() << endl;
    cout << "Umfang des Kreises: " << calculator->getShapeB()->getCircumference() << endl;
    cout << "Unterschied des Umfangs:" << calculator->getCircumferenceDiff() << endl;
    cout << "Umfangsumme: " << calculator->getCircumferenceSum() << endl;
    cout << "größerer Umfang: " << calculator->getBiggerCircumference()->getCircumference() << endl;
    cout << "kleinerer Umfang: " << calculator->getSmallerCircumference()->getCircumference() << endl;
    cout << "test" << endl;

    return 0;
}