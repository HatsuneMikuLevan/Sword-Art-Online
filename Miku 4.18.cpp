#include <iostream>
#include <cmath>

int main() {
    double area_circle, area_square;
    std::cout << "Введите площадь круга: ";
    std::cin >> area_circle;
    std::cout << "Введите площадь квадрата: ";
    std::cin >> area_square;
    double radius = sqrt(area_circle / M_PI);
    double side = sqrt(area_square);
    // а) Круг в квадрате
    if (2 * radius <= side) {
        std::cout << "Круг уместится в квадрате." << std::endl;
    } else {
        std::cout << "Круг не уместится в квадрате." << std::endl;
    }
    // б) Квадрат в круге
    if (side * sqrt(2) <= 2 * radius) {
        std::cout << "Квадрат уместится в круге." << std::endl;
    } else {
        std::cout << "Квадрат не уместится в круге." << std::endl;
    }
    return 0;
}
