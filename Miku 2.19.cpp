#include <iostream>
#include <cmath>

int main() {
    double a, b, x, y;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;

    double numerator_x = 2.0 / (a * a + 25.0) + b;
    double denominator_x = sqrt(b) + (a + b) / 2.0;
    x = numerator_x / denominator_x;

    y = (abs(a) + 2.0 * sin(b)) / (5.5 * a);

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    return 0;
}
