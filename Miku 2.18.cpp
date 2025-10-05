#include <iostream>
#include <cmath>

int main() {
    double x, y, z, q;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    std::cout << "Введите значение y: ";
    std::cin >> y;

    double numerator_z = x + (2.0 + y) / (x * x);
    double denominator_z = y + 1.0 / sqrt(x * x + 10.0);
    z = numerator_z / denominator_z;

    q = 7.25 * sin(x) - abs(y);

    std::cout << "z = " << z << std::endl;
    std::cout << "q = " << q << std::endl;

    return 0;
}
