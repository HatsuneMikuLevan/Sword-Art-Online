#include <iostream>
#include <cmath>

int main() {
    double x, k, f;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    if (sin(x) < 0) {
        k = x * x;
    } else {
        k = std::abs(x);
    }

    if (k < x) {
        f = k * x;
    } else {
        f = k + x;
    }

    std::cout << "Значение f(x) = " << f << std::endl;
    return 0;
}
