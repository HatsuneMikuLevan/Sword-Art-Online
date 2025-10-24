#include <iostream>
#include <cmath>

int main() {
    double radius, side;
    std::cout << "Введите радиус круга: ";
    std::cin >> radius;
    std::cout << "Введите сторону квадрата: ";
    std::cin >> side;
    double area_circle = M_PI * pow(radius, 2);
    double area_square = pow(side, 2);
    if (area_circle > area_square) {
        std::cout << "Площадь круга больше." << std::endl;
    } else if (area_square > area_circle) {
        std::cout << "Площадь квадрата больше." << std::endl;
    } else {
        std::cout << "Площади равны." << std::endl;
    }
    return 0;
}
