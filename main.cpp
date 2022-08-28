//
// Created by arnab on 8/28/2022.
//

#include <iostream>
#include <cmath>
#include "Circle.h"

const double PI = 3.14159;

Circle::Circle(unsigned int r) : radius(r) {
    std::cout << "Created circle!" << std::endl;
}

double Circle::getArea() {
    return radius * radius * PI;
}

int main() {
    std::cout << "Hello World!" << std::endl;
    Circle* c = new Circle(3);
    std::cout << "The area of the circle is: " << c->getArea() << std::endl;
    return 0;
}