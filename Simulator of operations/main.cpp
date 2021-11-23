#include <iostream>
#include "operations.h"

int main() {
    for (;;) {
        coordinate firstScalpelCoordinate,   secondScalpelCoordinate;
        std::string action;
        std::cout << "enter action:";
        std::cin >> action;
        if (action == "scalpel") {
            std::cout << "enter first coordinate:";
            std::cin >> firstScalpelCoordinate.x >> firstScalpelCoordinate.y;
            std::cout << "enter second coordinate:";
            std::cin >> secondScalpelCoordinate.x >> secondScalpelCoordinate.y;
            scalpel(firstScalpelCoordinate, secondScalpelCoordinate);
        }
        else if (action == "hemostat") {
            coordinate coordinate;
            std::cout << "enter coordinate:";
            std::cin >> coordinate.x >> coordinate.y;
            hemostat(coordinate);
        }
        else if (action == "tweezers") {
            coordinate coordinate;
            std::cout << "enter coordinate:";
            std::cin >> coordinate.x >> coordinate.y;
            tweezers(coordinate);
        }
        else if (action == "suture") {
            coordinate firstCoordinate,   secondCoordinate;
            std::cout << "enter first coordinate:";
            std::cin >> firstCoordinate.x >> firstScalpelCoordinate.y;
            std::cout << "enter second coordinate:";
            std::cin >> secondCoordinate.x >> secondScalpelCoordinate.y;
            scalpel(firstScalpelCoordinate, secondScalpelCoordinate);
            suture(firstCoordinate, secondCoordinate);
            if (firstScalpelCoordinate.x == firstCoordinate.x && secondScalpelCoordinate.x == secondCoordinate.x &&firstScalpelCoordinate.y == firstCoordinate.y && secondScalpelCoordinate.y == secondCoordinate.y) {
                break;
            }
        }
    }
}