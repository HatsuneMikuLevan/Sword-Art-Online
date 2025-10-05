#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double num1, num2;
    std::cout << "Введите два числа: ";
    std::cin >> num1 >> num2;

    double arith_mean = (std::abs(num1) + std::abs(num2)) / 2.0;
    double geom_mean = std::sqrt(std::abs(num1) * std::abs(num2));

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Среднее арифметическое модулей: " << arith_mean << std::endl;
    std::cout << "Среднее геометрическое модулей: " << geom_mean << std::endl;

    return 0;
}
