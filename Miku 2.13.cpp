#include <iostream>

int main() {
    double a, b;
    std::cout << "Введите коэффициент a: ";
    std::cin >> a;
    std::cout << "Введите коэффициент b: ";
    std::cin >> b;

    if (a == 0) {
        std::cout << "Коэффициент 'a' не может быть равен нулю." << std::endl;
    } else {
        double x = -b / a;
        std::cout << "Решение уравнения " << a << "x + " << b << " = 0: x = " << x << std::endl;
    }

    return 0;
}
