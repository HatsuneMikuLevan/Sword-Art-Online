#include <iostream>
#include <cmath>

int main() {
    double radius;
    std::cout << "Введите радиус окружности: ";
    std::cin >> radius;

    std::cout << "Длина окружности: " << 2 * M_PI * radius << std::endl;
    std::cout << "Площадь круга: " << M_PI * radius * radius << std::endl;

    return 0;
}
