/**
 * @file class_object.h
 * @author your name (you@domain.com)
 * @brief ��@�a�I
 * @version 0.1
 * @date 2023-01-17
 * 
 * @copyright Copyright (c) 2023
 * 
 * @details C++ �� class "�ŧi�B�s�������ܼơB�禡�B�غc�l�B�������"
 * 
 */


#include <iostream>
#include <string.h>

using namespace std;


class Class_Objects {
    public:
        int radius = 454;
        const double PI = 3.14159;
        double girth();
        double area();
};

double Class_Objects::girth() {
    return radius * 2 * PI;
}

double Class_Objects::area() {
    return radius * radius * PI;
}


class Array_Testing {
    public:
        
};





