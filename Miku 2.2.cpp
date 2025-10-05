#include <iostream>
#include <cmath>

int main() {
    double a;

    std::cout << "Введите значение a: ";
    std::cin >> a;

    double g = std::pow(a, 2) + 10;
    double h = std::sqrt(std::pow(a, 2) + 1);

    double x = g / h;

    std::cout << "Значение функции при a = " << a << " равно: " << x;

    
}
