/**
 * @file circle.cpp
 * @version 0.1
 * @date 2023-05-17
 * 
 * @copyright Copyright (c) 2023
 * 
 * @brief Problem 5
 * @details Base class Circle and derived class Sphere exercise.
 */

#include <iostream>
#include <cmath>

using namespace std;

// M_PI (3.14159...) --> <cmath>
#define PI  M_PI


class Circle {
private:
    double radius;

public:
    Circle(double radius) {
        this->radius = radius;
    }

    ~Circle() {}

    double perimeter() {
        return 2 * PI * this->radius;
    }

    double area() {
        // pow() 次方 --> <cmath> 函式庫
        return PI * pow(this->radius, 2);
    }
};


class Sphere : Circle {    // 繼承 Circle
private:
    double radius;

public:
    // radius 的參數值給了 Circle.radius
    Sphere(double radius) : Circle(radius) {
        this->radius = radius;
    }

    double surface() {
        double perimeter = this->perimeter();
        return 2 * this->radius * perimeter;
    }

    double volumn() {
        double area = this->area();
        return (4/3) * this->radius * area;
    }
};


int main(int argc, char const *argv[]) {
    Circle circle(2);

    cout<<"circle perimeter: "<<circle.perimeter()<<endl;
    cout<<"circle area: "<<circle.area()<<endl;

    cout<<"-----------------"<<endl;

    Sphere sphere(2);
    cout<<"sphere surface: "<<sphere.surface()<<endl;
    cout<<"sphere volumn: "<<sphere.volumn()<<endl;

    return 0;
}

