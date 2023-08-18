#include <iostream>
#include <cmath>    // C++

// #include <math.h>   // C 粂ē

using namespace std;

#define PI M_PI


struct Circle {
    int radius;
    int height;
    double girth;
    double area;
    double volume;
} circle_1, circle_2,
  *pointer_1, *pointer_2;


// 畖砞竚
void set_radius(struct Circle *circle, int radius);
// 蛾㏄
double circle_Girth(struct Circle circle);
// 蛾縩
double circle_Area(struct Circle circle);
// 蛾琖砰 砰縩
double circle_Volume(struct Circle circle);
// 縩程
struct Circle max_area(struct Circle c1, struct Circle c2);
// 砰縩程
struct Circle max_volumn(struct Circle c1, struct Circle c2);


/* 
    ㄏノ struct 讽把计
 */

// 砞竚把计絛瞅

void set_radius(struct Circle *circle, int radius) {
    if (circle == NULL) {
        return;
    }
    if (radius > 0) {
        // cout<<radius<<endl;
        circle->radius = radius;
    } else {
        circle->radius = 1;
    }
}


double circle_Girth(struct Circle circle) {
    return circle.radius * 2 * PI;
}

double circle_Area(struct Circle circle) {
    // pow(┏计, 计);    <math.h> or <cmath> ┏
    return pow(circle.radius, 2) * PI;
}

double circle_Volume(struct Circle circle) {
    return circle.area * circle.height;
}

struct Circle max_area(struct Circle c1, struct Circle c2) {
    return c1.area > c2.area ? c1: c2;
}
struct Circle max_volumn(struct Circle c1, struct Circle c2) {
    return c1.volume > c2.volume ? c1: c2;
}
