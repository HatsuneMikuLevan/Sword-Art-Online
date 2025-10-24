#include <iostream>
#include <cmath>

int main() {
    double area_circle, area_triangle;
    std::cout << "Введите площадь круга: ";
    std::cin >> area_circle;
    std::cout << "Введите площадь равностороннего треугольника: ";
    std::cin >> area_triangle;
    double radius_circle = sqrt(area_circle / M_PI);
    double side_triangle = sqrt(4 * area_triangle / sqrt(3));
    double inscribed_radius = side_triangle / (2 * sqrt(3));
    double circumscribed_radius = side_triangle / sqrt(3);
    // а) Круг в треугольнике
    if (radius_circle <= inscribed_radius) {
        std::cout << "Круг уместится в треугольнике." << std::endl;
    } else {
        std::cout << "Круг не уместится в треугольнике." << std::endl;
    }
    // б) Треугольник в круге
    if (circumscribed_radius <= radius_circle) {
        std::cout << "Треугольник уместится в круге." << std::endl;
    } else {
        std::cout << "Треугольник не уместится в круге." << std::endl;
    }
    return 0;
}
