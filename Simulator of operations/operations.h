#include <iostream>

struct coordinate {
    double x;
    double y;
};

void scalpel(coordinate firstCoordinate, coordinate secondCoordinate) {
    std::cout << "cut from x = " << firstCoordinate.x << " and y = " << firstCoordinate.y << " to x =" << secondCoordinate.x << " and y =" << secondCoordinate.y;
}

void hemostat(coordinate coordinate) {
    std::cout << "clip at x = " << coordinate.x << " and y = " << coordinate.y;
}

void tweezers(coordinate coordinate) {
    std::cout << "captured at x = " << coordinate.x << " and y = " << coordinate.y;
}

void suture(coordinate firstCoordinate, coordinate secondCoordinate) {
    std::cout << "sew up from x = " << firstCoordinate.x << " and y = " << firstCoordinate.y << " to x =" << secondCoordinate.x << " and y =" << secondCoordinate.y;
}