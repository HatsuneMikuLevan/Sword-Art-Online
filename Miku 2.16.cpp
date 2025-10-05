#include <iostream>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Введите длину первого катета (a): ";
    std::cin >> a;
    std::cout << "Введите длину второго катета (b): ";
    std::cin >> b;

    if (a > 0 && b > 0) {
        double c = sqrt(pow(a, 2) + pow(b, 2));
        double P = a + b + c;
        std::cout << "Периметр треугольника: " << P << std::endl;
    } else {
        std::cout << "Ошибка: длины катетов должны быть положительными." << std::endl;
    }

    return 0;
}
