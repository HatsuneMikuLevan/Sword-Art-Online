#include <iostream>
#include <cmath>

int main() {
    double a, b, h;
    std::cout << "Введите длину первого основания (a): ";
    std::cin >> a;
    std::cout << "Введите длину второго основания (b): ";
    std::cin >> b;
    std::cout << "Введите высоту (h): ";
    std::cin >> h;

    if (a > 0 && b > 0 && h > 0) {
        double x = std::abs(a - b) / 2.0;
        double c = sqrt(pow(h, 2) + pow(x, 2));
        double P = a + b + 2 * c;
        std::cout << "Периметр трапеции: " << P << std::endl;
    } else {
        std::cout << "Ошибка: длины оснований и высота должны быть положительными." << std::endl;
    }

    return 0;
}
