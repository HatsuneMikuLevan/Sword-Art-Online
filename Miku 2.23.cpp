#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b;
    std::cout << "Введите длины сторон прямоугольника: ";
    std::cin >> a >> b;

    double perimeter = 2 * (a + b);
    double diagonal = std::sqrt(a * a + b * b);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Периметр: " << perimeter << std::endl;
    std::cout << "Длина диагонали: " << diagonal << std::endl;

    return 0;
}
