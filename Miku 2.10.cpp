#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cout << "Введите два целых числа: ";
    std::cin >> a >> b;
    double h = (static_cast<double>(a) + b) / 2.0;
    std::cout << "Среднее арифметическое: " << h << std::endl;
    double g = sqrt(static_cast<double>(a) * b);
    std::cout << "Среднее геометрическое: " << g << std::endl;

    return 0;
}
