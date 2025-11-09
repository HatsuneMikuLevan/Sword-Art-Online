

#include <iostream>

int main() {
    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    double fx;
    if (x <= 0) {
        fx = 0;
    } else if (x < 1) {
        fx = x;
    } else { // x >= 1
        fx = x * x;
    }

    std::cout << "Значение функции f(x) = " << fx << std::endl;
    return 0;
}
