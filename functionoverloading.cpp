

#include <iostream>
#include <cmath>

class AreaCalculator {
public:
    double calculateArea(double side) {
        std::cout << "(Calling the version for a Square...)" << std::endl;
        return side * side;
    }
    double calculateArea(double length, double width) {
        std::cout << "(Calling the version for a Rectangle...)" << std::endl;
        return length * width;
    }

    double calculateArea(float radius) {
        std::cout << "(Calling the version for a Circle...)" << std::endl;
        return M_PI * radius * radius;
    }
};


int main() {
    AreaCalculator calculator;

    std::cout << "--- Calculating Areas of Geometric Shapes ---" << std::endl << std::endl;


    double squareSide = 8.0;

    double squareArea = calculator.calculateArea(squareSide);
    std::cout << "The area of a square with side " << squareSide << " is: " << squareArea << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    double rectLength = 10.0;
    double rectWidth = 5.0;
    double rectangleArea = calculator.calculateArea(rectLength, rectWidth);
    std::cout << "The area of a rectangle with length " << rectLength << " and width " << rectWidth << " is: " << rectangleArea << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    float circleRadius = 7.0f;
    double circleArea = calculator.calculateArea(circleRadius);
    std::cout << "The area of a circle with radius " << circleRadius << " is: " << circleArea << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;

    return 0;
}