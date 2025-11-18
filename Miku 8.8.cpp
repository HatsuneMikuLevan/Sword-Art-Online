

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a;
    std::cout << "Введите число a (1 < a < 1.5): ";
    std::cin >> a;

    int n = 2;
    std::cout << "Значения n, при которых 1+1/n >= a: ";
    while (1.0 + 1.0 / n >= a) {
        std::cout << n << " ";
        n++;
    }
    std::cout << std::endl;

    return 0;
}
