#include <iostream>
#include <cmath> 

class Triangle {
private:
    double totalAngle, angleA, angleB, angleC;
    double sideA, sideB, sideC; 

public:
    
    Triangle(double A, double B, double C);

   
    void setAngles(double A, double B, double C);

    
    bool validateTriangle() const;

    
    double computeArea(double a, double b, double c) const;

    
    double computePerimeter() const;

    
    std::string triangleType() const;
};


Triangle::Triangle(double A, double B, double C) : angleA(A), angleB(B), angleC(C) {
    totalAngle = A + B + C;
}

// Set angles
void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

// Validate if the angles make a valid triangle
bool Triangle::validateTriangle() const {
    return (totalAngle == 180);
}


double Triangle::computeArea(double a, double b, double c) const {
    double s = (a + b + c) / 2; // semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


double Triangle::computePerimeter() const {
    return sideA + sideB + sideC;
}


std::string Triangle::triangleType() const {
    if (angleA < 90 && angleB < 90 && angleC < 90) {
        return "Acute-angled";
    } else if (angleA > 90 || angleB > 90 || angleC > 90) {
        return "Obtuse-angled";
    } else {
        return "Right-angled";
    }
}

int main() {
    double A = 120, B = 30, C = 30; // Example angles with one obtuse angle
    double sideA = 7, sideB = 5, sideC = 5; // Example sides

    Triangle set1(A, B, C);

    
    if (set1.validateTriangle()) {
        std::cout << "The shape is a valid triangle.\n";

        
        std::cout << "The area of the triangle is: " << set1.computeArea(sideA, sideB, sideC) << std::endl;
        std::cout << "The perimeter of the triangle is: " << set1.computePerimeter() << std::endl;

       
        std::cout << "The triangle is: " << set1.triangleType() << std::endl;
    } else {
        std::cout << "The shape is NOT a valid triangle.\n";
    }

    return 0;
}

