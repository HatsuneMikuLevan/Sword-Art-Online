#include <iostream>
#include <iomanip>

int main() {
    double a, b, c;
    std::cout << "Введите длины сторон параллелепипеда: ";
    std::cin >> a >> b >> c;

    double volume = a * b * c;
    double side_area = 2 * (a * c + b * c);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Объем: " << volume << std::endl;
    std::cout << "Площадь боковой поверхности: " << side_area << std::endl;

    return 0;
}
